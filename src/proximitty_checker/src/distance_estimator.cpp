#include <algorithm>
#include <chrono>
#include <cmath>
#include <fstream>
#include <limits>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <functional>

#include <Eigen/Core>
#include <boost/variant/get.hpp>

#include <builtin_interfaces/msg/time.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit_msgs/msg/collision_object.hpp>
#include <moveit_msgs/msg/planning_scene.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <shape_msgs/msg/solid_primitive.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/string.hpp>

#include <moveit/planning_scene/planning_scene.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit/collision_detection/collision_common.h>
#include <moveit/collision_detection/collision_env.h>
#include <moveit/robot_state/conversions.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include <geometric_shapes/shape_operations.h>
#include <geometric_shapes/shapes.h>

class DistanceEstimator : public rclcpp::Node
{
public:
  DistanceEstimator()
  : Node("distance_estimator")
  {
    joint_state_topic_ = this->declare_parameter<std::string>(
      "joint_state_topic", "/joint_states_renamed");

    // PlanningScene topic for RViz / other consumers
    rclcpp::QoS qos(1);
    qos.transient_local();
    qos.reliable();
    planning_scene_pub_ = this->create_publisher<moveit_msgs::msg::PlanningScene>(
      "/monitored_planning_scene", qos);

    // Robot description inputs
    robot_urdf_path_ = this->declare_parameter<std::string>("robot_urdf_path", "");
    robot_description_xml_ = this->declare_parameter<std::string>("robot_description_xml", "");
    robot_description_ = this->declare_parameter<std::string>("robot_description", "robot_description");

    robot_srdf_path_ = this->declare_parameter<std::string>("robot_srdf_path", "");
    robot_description_semantic_xml_ =
      this->declare_parameter<std::string>("robot_description_semantic_xml", "");
    robot_description_semantic_ =
      this->declare_parameter<std::string>("robot_description_semantic", "robot_description_semantic");

    // Obstacle config
    obstacle_id_ = this->declare_parameter<std::string>("obstacle_id", "mvp_obstacle");
    world_frame_ = this->declare_parameter<std::string>("world_frame", "world");

    // Box obstacle params (fallback)
    obstacle_x_ = this->declare_parameter<double>("obstacle_x", 0.35);
    obstacle_y_ = this->declare_parameter<double>("obstacle_y", 0.35);
    obstacle_z_ = this->declare_parameter<double>("obstacle_z", 0.35);
    obstacle_px_ = this->declare_parameter<double>("obstacle_px", 100.0);
    obstacle_py_ = this->declare_parameter<double>("obstacle_py", 0.0);
    obstacle_pz_ = this->declare_parameter<double>("obstacle_pz", 100.0);

    // Mesh obstacle params
    obstacle_mesh_resource_ = this->declare_parameter<std::string>("obstacle_mesh_resource", "");
    obstacle_mesh_scale_ = this->declare_parameter<double>("obstacle_mesh_scale", 0.1); // mm->m default
    use_mesh_obstacle_ = this->declare_parameter<bool>("use_mesh_obstacle", false);

    // Distance thresholds / timing
    warn_threshold_m_ = this->declare_parameter<double>("warn_threshold_m", 0.12);
    stop_threshold_m_ = this->declare_parameter<double>("stop_threshold_m", 0.06);
    stale_timeout_sec_ = this->declare_parameter<double>("stale_timeout_sec", 0.25);
    eval_rate_hz_ = this->declare_parameter<double>("eval_rate_hz", 20.0);

    min_distance_pub_ = this->create_publisher<std_msgs::msg::Float32>("~/minimum_distance", 10);
    warning_level_pub_ = this->create_publisher<std_msgs::msg::String>("~/warning_level", 10);

    joint_state_sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      joint_state_topic_, rclcpp::SensorDataQoS(),
      [this](const sensor_msgs::msg::JointState::SharedPtr msg) {
        last_joint_state_stamp_ = msg->header.stamp;

        if (!joint_mismatch_checked_ && planning_scene_monitor_) {
          checkJointNameMismatch(*msg);
          joint_mismatch_checked_ = true;
        }
      });

    // Delay init slightly so node is fully up before constructing MoveIt objects
    init_timer_ = this->create_wall_timer(
      std::chrono::milliseconds(10),
      std::bind(&DistanceEstimator::initializePlanningScene, this));
  }

private:
  bool loadRobotDescription(std::string & xml_out)
  {
    if (!robot_description_xml_.empty()) {
      xml_out = robot_description_xml_;
      return true;
    }

    if (robot_urdf_path_.empty()) {
      RCLCPP_FATAL(get_logger(), "Missing required parameter 'robot_urdf_path' or 'robot_description_xml'.");
      return false;
    }

    std::ifstream urdf_stream(robot_urdf_path_);
    if (!urdf_stream.good()) {
      RCLCPP_FATAL(get_logger(), "Invalid robot_urdf_path: '%s'", robot_urdf_path_.c_str());
      return false;
    }

    std::stringstream buffer;
    buffer << urdf_stream.rdbuf();
    xml_out = buffer.str();
    if (xml_out.empty()) {
      RCLCPP_FATAL(get_logger(), "URDF file is empty: '%s'", robot_urdf_path_.c_str());
      return false;
    }
    return true;
  }

  bool loadSemanticDescription(std::string & xml_out)
  {
    if (!robot_description_semantic_xml_.empty()) {
      xml_out = robot_description_semantic_xml_;
      return true;
    }

    if (robot_srdf_path_.empty()) {
      RCLCPP_FATAL(get_logger(), "Missing required parameter 'robot_srdf_path' or 'robot_description_semantic_xml'.");
      return false;
    }

    std::ifstream srdf_stream(robot_srdf_path_);
    if (!srdf_stream.good()) {
      RCLCPP_FATAL(get_logger(), "Invalid robot_srdf_path: '%s'", robot_srdf_path_.c_str());
      return false;
    }

    std::stringstream buffer;
    buffer << srdf_stream.rdbuf();
    xml_out = buffer.str();
    if (xml_out.empty()) {
      RCLCPP_FATAL(get_logger(), "SRDF file is empty: '%s'", robot_srdf_path_.c_str());
      return false;
    }
    return true;
  }

  void ensureParamDeclared(const std::string & name)
  {
    if (!this->has_parameter(name)) {
      this->declare_parameter<std::string>(name, "");
    }
  }

  void initializePlanningScene()
  {
    std::string urdf_xml;
    if (!loadRobotDescription(urdf_xml)) { rclcpp::shutdown(); return; }

    std::string srdf_xml;
    if (!loadSemanticDescription(srdf_xml)) { rclcpp::shutdown(); return; }

    // Make sure the parameters we set exist (ROS2 typically disallows setting undeclared params)
    ensureParamDeclared(robot_description_);
    ensureParamDeclared(robot_description_semantic_);

    // Put URDF/SRDF into the param keys that MoveIt expects
    this->set_parameter(rclcpp::Parameter(robot_description_, urdf_xml));
    this->set_parameter(rclcpp::Parameter(robot_description_semantic_, srdf_xml));

    planning_scene_monitor_ =
      std::make_shared<planning_scene_monitor::PlanningSceneMonitor>(shared_from_this(), robot_description_);

    if (!planning_scene_monitor_ || !planning_scene_monitor_->getPlanningScene()) {
      RCLCPP_FATAL(get_logger(), "Failed to initialize PlanningSceneMonitor.");
      rclcpp::shutdown();
      return;
    }

    cacheExpectedJointNames();

    // Track joint states into MoveIt's current state
    planning_scene_monitor_->startStateMonitor(joint_state_topic_);

    // Add obstacle into internal planning scene
    if (use_mesh_obstacle_) {
      addStaticObstacleMesh();
    } else {
      addStaticObstacleBox();
    }

    // Publish ONE full snapshot to RViz immediately + a few bootstrap retries
    publishPlanningSceneFullOnce();
    startRvizBootstrapPublish();

    // Start distance timer
    const auto period = std::chrono::duration<double>(1.0 / std::max(1.0, eval_rate_hz_));
    timer_ = this->create_wall_timer(
      std::chrono::duration_cast<std::chrono::milliseconds>(period),
      std::bind(&DistanceEstimator::onTimer, this));

    init_timer_.reset();

    RCLCPP_INFO(get_logger(), "Distance estimator running. Listening: %s", joint_state_topic_.c_str());
    RCLCPP_INFO(get_logger(), "Robot model frame: %s",
                planning_scene_monitor_->getRobotModel()->getModelFrame().c_str());
  }
  void publishRobotStateDiff()
	{
	  if (!planning_scene_monitor_) return;

	  moveit_msgs::msg::PlanningScene ps;
	  ps.is_diff = true;

	  {
		planning_scene_monitor::LockedPlanningSceneRO scene(planning_scene_monitor_);
		const auto & state = scene->getCurrentState();
		moveit::core::robotStateToRobotStateMsg(state, ps.robot_state);
	  }

	  planning_scene_pub_->publish(ps);
	}

  void publishPlanningSceneFullOnce()
  {
    if (!planning_scene_monitor_) return;

    moveit_msgs::msg::PlanningScene ps_msg;
    {
      planning_scene_monitor::LockedPlanningSceneRO scene(planning_scene_monitor_);
      scene->getPlanningSceneMsg(ps_msg);
    }
    ps_msg.is_diff = false;
    planning_scene_pub_->publish(ps_msg);
  }

  void startRvizBootstrapPublish()
  {
    rviz_bootstrap_count_ = 0;
    rviz_bootstrap_timer_ = this->create_wall_timer(
      std::chrono::seconds(1),
      [this]() {
        publishPlanningSceneFullOnce();
        rviz_bootstrap_count_++;
        if (rviz_bootstrap_count_ >= 60) { // 5 seconds total
          rviz_bootstrap_timer_.reset();
        }
      });
  }

  void cacheExpectedJointNames()
  {
    expected_joint_names_.clear();
    const auto robot_model = planning_scene_monitor_->getRobotModel();
    if (!robot_model) return;

    const auto & active_joints = robot_model->getActiveJointModels();
    for (const auto * joint : active_joints) {
      if (joint) expected_joint_names_.insert(joint->getName());
    }
  }

  void checkJointNameMismatch(const sensor_msgs::msg::JointState & msg)
  {
    if (expected_joint_names_.empty()) {
      RCLCPP_WARN(get_logger(), "Unable to validate joint names; robot model active joints are empty.");
      return;
    }

    std::set<std::string> incoming(msg.name.begin(), msg.name.end());
    std::vector<std::string> missing;
    std::vector<std::string> unknown;

    for (const auto & expected : expected_joint_names_) {
      if (incoming.find(expected) == incoming.end()) missing.push_back(expected);
    }
    for (const auto & name : incoming) {
      if (expected_joint_names_.find(name) == expected_joint_names_.end()) unknown.push_back(name);
    }

    if (!missing.empty() || !unknown.empty()) {
      RCLCPP_WARN(get_logger(), "Joint-name mismatch detected. missing=%zu unknown=%zu",
                  missing.size(), unknown.size());
    } else {
      RCLCPP_INFO(get_logger(), "Joint-name check passed.");
    }
  }

  void addStaticObstacleBox()
  {
    moveit_msgs::msg::CollisionObject object;
    object.header.frame_id = world_frame_;
    object.id = obstacle_id_;

    shape_msgs::msg::SolidPrimitive primitive;
    primitive.type = shape_msgs::msg::SolidPrimitive::BOX;
    primitive.dimensions = {obstacle_x_, obstacle_y_, obstacle_z_};

    geometry_msgs::msg::Pose pose;
    pose.position.x = obstacle_px_;
    pose.position.y = obstacle_py_;
    pose.position.z = obstacle_pz_;
    pose.orientation.w = 1.0;

    object.primitives.push_back(primitive);
    object.primitive_poses.push_back(pose);
    object.operation = moveit_msgs::msg::CollisionObject::ADD;

    {
      planning_scene_monitor::LockedPlanningSceneRW scene(planning_scene_monitor_);
      scene->processCollisionObjectMsg(object);
    }

    planning_scene_monitor_->triggerSceneUpdateEvent(
      planning_scene_monitor::PlanningSceneMonitor::UPDATE_SCENE);

    RCLCPP_INFO(get_logger(),
                "Added BOX obstacle '%s' frame='%s' size=[%.3f %.3f %.3f] pos=[%.3f %.3f %.3f]",
                obstacle_id_.c_str(), world_frame_.c_str(),
                obstacle_x_, obstacle_y_, obstacle_z_,
                obstacle_px_, obstacle_py_, obstacle_pz_);
  }

  void addStaticObstacleMesh()
  {
    if (obstacle_mesh_resource_.empty()) {
      RCLCPP_ERROR(get_logger(), "use_mesh_obstacle=true but 'obstacle_mesh_resource' is empty.");
      return;
    }
    
    moveit_msgs::msg::CollisionObject object;
    object.header.frame_id = world_frame_;
    object.id = obstacle_id_;

    const std::string mesh_resource = obstacle_mesh_resource_;

    Eigen::Vector3d scale(obstacle_mesh_scale_, obstacle_mesh_scale_, obstacle_mesh_scale_);
    shapes::Mesh* m = shapes::createMeshFromResource(mesh_resource, scale);
    if (!m) {
      RCLCPP_ERROR(get_logger(), "Failed to load mesh: %s", mesh_resource.c_str());
      return;
    }

    shapes::ShapeMsg mesh_shape_msg;
    shapes::constructMsgFromShape(m, mesh_shape_msg);
    shape_msgs::msg::Mesh mesh_msg = boost::get<shape_msgs::msg::Mesh>(mesh_shape_msg);
    delete m;


    geometry_msgs::msg::Pose pose;
	pose.position.x = 0;
	pose.position.y = 1.0;
	pose.position.z = obstacle_pz_;

	tf2::Quaternion q;
	q.setRPY(M_PI/2, 0.0, 0.0);          // try roll +90deg (lies flat)
	pose.orientation = tf2::toMsg(q);
    object.meshes.push_back(mesh_msg);
    object.mesh_poses.push_back(pose);
    object.operation = moveit_msgs::msg::CollisionObject::ADD;

    {
      planning_scene_monitor::LockedPlanningSceneRW scene(planning_scene_monitor_);
      scene->processCollisionObjectMsg(object);
      moveit_msgs::msg::PlanningScene ps_msg;
		ps_msg.is_diff = true;
		ps_msg.world.collision_objects.clear();
		ps_msg.world.collision_objects.push_back(object);
		planning_scene_pub_->publish(ps_msg);
    }

    planning_scene_monitor_->triggerSceneUpdateEvent(
      planning_scene_monitor::PlanningSceneMonitor::UPDATE_SCENE);

    RCLCPP_INFO(get_logger(),
                "Added MESH obstacle '%s' from '%s' scale=%.6f frame='%s' pos=[%.3f %.3f %.3f]",
                obstacle_id_.c_str(), mesh_resource.c_str(), obstacle_mesh_scale_,
                world_frame_.c_str(),
                pose.position.x, pose.position.y, pose.position.z);
  }

  void onTimer()
  {
    std::string warning = "OK";
    double min_distance = std::numeric_limits<double>::infinity();

    if (!hasFreshJointState()) {
      warning = "STALE";
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "No fresh joint states on %s", joint_state_topic_.c_str());
    } else {
      planning_scene_monitor_->updateFrameTransforms();
      planning_scene_monitor_->updateSceneWithCurrentState();

      planning_scene_monitor::LockedPlanningSceneRO scene(planning_scene_monitor_);
      collision_detection::DistanceRequest req;
      collision_detection::DistanceResult res;

      req.enable_signed_distance = true;
      req.type = collision_detection::DistanceRequestType::SINGLE;

      const auto & state = scene->getCurrentState();
		
      scene->getCollisionEnv()->distanceRobot(req, res, state);
      min_distance = res.minimum_distance.distance;
      
      publishRobotStateDiff();
      RCLCPP_INFO_THROTTLE(get_logger(), *get_clock(), 1000,
                           "Distance result: %.4f m", min_distance);

      if (min_distance <= stop_threshold_m_) warning = "STOP";
      else if (min_distance <= warn_threshold_m_) warning = "WARN";
    }

    std_msgs::msg::Float32 distance_msg;
    distance_msg.data = std::isfinite(min_distance) ? static_cast<float>(min_distance) : -1.0f;
    min_distance_pub_->publish(distance_msg);

    std_msgs::msg::String level_msg;
    level_msg.data = warning;
    warning_level_pub_->publish(level_msg);
  }

  bool hasFreshJointState()
  {
    if (last_joint_state_stamp_.sec == 0 && last_joint_state_stamp_.nanosec == 0) return false;

    const rclcpp::Time now = this->get_clock()->now();
    const rclcpp::Time then(last_joint_state_stamp_);
    return (now - then).seconds() <= stale_timeout_sec_;
  }

  // Parameters / config
  std::string joint_state_topic_;

  std::string robot_urdf_path_;
  std::string robot_description_xml_;
  std::string robot_description_; // param key name

  std::string robot_srdf_path_;
  std::string robot_description_semantic_xml_;
  std::string robot_description_semantic_; // param key name

  std::string world_frame_;
  std::string obstacle_id_;

  // Obstacle (box)
  double obstacle_x_{};
  double obstacle_y_{};
  double obstacle_z_{};
  double obstacle_px_{};
  double obstacle_py_{};
  double obstacle_pz_{};

  // Obstacle (mesh)
  std::string obstacle_mesh_resource_;
  double obstacle_mesh_scale_{};
  bool use_mesh_obstacle_{false};

  // Joint validation
  std::set<std::string> expected_joint_names_;
  bool joint_mismatch_checked_{false};

  // Thresholds / timing
  double warn_threshold_m_{};
  double stop_threshold_m_{};
  double stale_timeout_sec_{};
  double eval_rate_hz_{};

  // Latest telemetry timestamp
  builtin_interfaces::msg::Time last_joint_state_stamp_{};

  // ROS I/O
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr min_distance_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr warning_level_pub_;
  rclcpp::Publisher<moveit_msgs::msg::PlanningScene>::SharedPtr planning_scene_pub_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::TimerBase::SharedPtr init_timer_;

  // RViz bootstrap publish
  rclcpp::TimerBase::SharedPtr rviz_bootstrap_timer_;
  int rviz_bootstrap_count_{0};

  // MoveIt planning scene
  planning_scene_monitor::PlanningSceneMonitorPtr planning_scene_monitor_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<DistanceEstimator>());
  rclcpp::shutdown();
  return 0;
}
