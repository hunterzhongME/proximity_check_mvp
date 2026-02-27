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

#include <builtin_interfaces/msg/time.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit_msgs/msg/collision_object.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>
#include <shape_msgs/msg/solid_primitive.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/string.hpp>

#include <moveit/planning_scene/planning_scene.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit_msgs/msg/planning_scene.hpp>

class DistanceEstimator : public rclcpp::Node
{
public:
  DistanceEstimator()
  : Node("distance_estimator")
  {
    joint_state_topic_ = this->declare_parameter<std::string>(
      "joint_state_topic", "/joint_state_broadcaster/joint_states");

    // PlanningScene topic for RViz / other consumers
    rclcpp::QoS qos(1);              // queue depth = 1
    qos.transient_local();           // keep last msg for late subscribers
    qos.reliable();                  // reliable delivery
    planning_scene_pub_ = this->create_publisher<moveit_msgs::msg::PlanningScene>(
      "/monitored_planning_scene", qos);

    robot_urdf_path_ = this->declare_parameter<std::string>("robot_urdf_path", "");
    robot_description_xml_ = this->declare_parameter<std::string>("robot_description_xml", "");
    robot_description_ = this->declare_parameter<std::string>("robot_description", "robot_description");

    robot_srdf_path_ = this->declare_parameter<std::string>("robot_srdf_path", "");
    robot_description_semantic_xml_ =
      this->declare_parameter<std::string>("robot_description_semantic_xml", "");
    robot_description_semantic_ =
      this->declare_parameter<std::string>("robot_description_semantic", "robot_description_semantic");

    warn_threshold_m_ = this->declare_parameter<double>("warn_threshold_m", 0.12);
    stop_threshold_m_ = this->declare_parameter<double>("stop_threshold_m", 0.06);
    stale_timeout_sec_ = this->declare_parameter<double>("stale_timeout_sec", 0.25);
    eval_rate_hz_ = this->declare_parameter<double>("eval_rate_hz", 20.0);

    obstacle_id_ = this->declare_parameter<std::string>("obstacle_id", "mvp_box");
    obstacle_x_ = this->declare_parameter<double>("obstacle_x", 0.35);
    obstacle_y_ = this->declare_parameter<double>("obstacle_y", 0.35);
    obstacle_z_ = this->declare_parameter<double>("obstacle_z", 0.35);
    obstacle_px_ = this->declare_parameter<double>("obstacle_px", 0.55);
    obstacle_py_ = this->declare_parameter<double>("obstacle_py", 0.0);
    obstacle_pz_ = this->declare_parameter<double>("obstacle_pz", 0.2);
    world_frame_ = this->declare_parameter<std::string>("world_frame", "world");

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
      RCLCPP_FATAL(
        get_logger(),
        "Missing required parameter 'robot_urdf_path'. Set a local URDF file path.");
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
      RCLCPP_FATAL(get_logger(), "Missing required parameter 'robot_srdf_path'.");
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

  void initializePlanningScene()
  {
    std::string urdf_xml;
    if (!loadRobotDescription(urdf_xml)) {
      rclcpp::shutdown();
      return;
    }

    std::string srdf_xml;
    if (!loadSemanticDescription(srdf_xml)) {
      rclcpp::shutdown();
      return;
    }

    // Publish both descriptions for MoveIt
    this->set_parameter(rclcpp::Parameter(robot_description_, urdf_xml));
    this->set_parameter(rclcpp::Parameter(robot_description_semantic_, srdf_xml));

    planning_scene_monitor_ =
      std::make_shared<planning_scene_monitor::PlanningSceneMonitor>(shared_from_this(), robot_description_);

    if (!planning_scene_monitor_ || !planning_scene_monitor_->getPlanningScene()) {
      RCLCPP_FATAL(get_logger(), "Failed to initialize PlanningSceneMonitor from local robot description.");
      rclcpp::shutdown();
      return;
    }

    cacheExpectedJointNames();

    planning_scene_monitor_->startStateMonitor(joint_state_topic_);

    // Keep disabled for now to avoid duplicate publishers / QoS confusion
    // planning_scene_monitor_->startPublishingPlanningScene(
    //   planning_scene_monitor::PlanningSceneMonitor::UPDATE_SCENE,
    //   "/monitored_planning_scene");

    addStaticObstacle();

	  obstacle_republish_timer_ = this->create_wall_timer(
		std::chrono::milliseconds(200),
		std::bind(&DistanceEstimator::republishPlanningSceneFull, this));
    const auto period = std::chrono::duration<double>(1.0 / std::max(1.0, eval_rate_hz_));
    timer_ = this->create_wall_timer(
      std::chrono::duration_cast<std::chrono::milliseconds>(period),
      std::bind(&DistanceEstimator::onTimer, this));

    init_timer_.reset();
    RCLCPP_INFO(get_logger(), "Distance estimator running. Listening: %s", joint_state_topic_.c_str());
    
    RCLCPP_INFO(
  get_logger(),
  "MoveIt robot model frame: %s",
  planning_scene_monitor_->getRobotModel()->getModelFrame().c_str());
  
  }

  void cacheExpectedJointNames()
  {
    expected_joint_names_.clear();
    const auto robot_model = planning_scene_monitor_->getRobotModel();
    if (!robot_model) {
      return;
    }

    const auto & active_joints = robot_model->getActiveJointModels();
    for (const auto * joint : active_joints) {
      if (joint) {
        expected_joint_names_.insert(joint->getName());
      }
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
      if (incoming.find(expected) == incoming.end()) {
        missing.push_back(expected);
      }
    }

    for (const auto & name : incoming) {
      if (expected_joint_names_.find(name) == expected_joint_names_.end()) {
        unknown.push_back(name);
      }
    }

    if (!missing.empty() || !unknown.empty()) {
      RCLCPP_WARN(
        get_logger(),
        "Joint-name mismatch detected. missing=%zu unknown=%zu",
        missing.size(), unknown.size());
    } else {
      RCLCPP_INFO(get_logger(), "Joint-name check passed.");
    }
  }

  void addStaticObstacle()
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

    // Save for periodic republish
    obstacle_object_ = object;

    // Apply to local planning scene (used by distance queries)
    {
      planning_scene_monitor::LockedPlanningSceneRW scene(planning_scene_monitor_);
      scene->processCollisionObjectMsg(object);
    }

    // Publish once immediately (full scene bootstrap for RViz)
    moveit_msgs::msg::PlanningScene ps_msg;
    ps_msg.is_diff = false;
    if (planning_scene_monitor_ && planning_scene_monitor_->getRobotModel()) {
      ps_msg.robot_model_name = planning_scene_monitor_->getRobotModel()->getName();
    }
    ps_msg.world.collision_objects.push_back(object);
    planning_scene_pub_->publish(ps_msg);

    // Optional: notify internal scene update listeners
    planning_scene_monitor_->triggerSceneUpdateEvent(
      planning_scene_monitor::PlanningSceneMonitor::UPDATE_SCENE);

    RCLCPP_INFO(
      get_logger(),
      "Added static obstacle '%s' frame='%s' size=[%.2f %.2f %.2f] pos=[%.2f %.2f %.2f] op=%d",
      obstacle_id_.c_str(), world_frame_.c_str(),
      obstacle_x_, obstacle_y_, obstacle_z_,
      obstacle_px_, obstacle_py_, obstacle_pz_,
      static_cast<int>(object.operation));
  }

	void republishPlanningSceneFull()
	{
		if (!planning_scene_monitor_) return;

		moveit_msgs::msg::PlanningScene ps_msg;

		{
		  planning_scene_monitor::LockedPlanningSceneRO scene(planning_scene_monitor_);
		  scene->getPlanningSceneMsg(ps_msg);   // <-- full scene, includes robot_state + world
		}

		ps_msg.is_diff = false;  // full snapshot
		planning_scene_pub_->publish(ps_msg);
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
    } 

else {
  // Sync latest joint states into MoveIt's internal PlanningScene
  planning_scene_monitor_->updateFrameTransforms();
  planning_scene_monitor_->updateSceneWithCurrentState();

  planning_scene_monitor::LockedPlanningSceneRO scene(planning_scene_monitor_);
  collision_detection::DistanceRequest req;
  collision_detection::DistanceResult res;

  req.enable_signed_distance = true;
  req.type = collision_detection::DistanceRequestType::SINGLE;

  const auto & state = scene->getCurrentState();

  // --- Debug: print active joint values from MoveIt RobotState ---
  const auto & active_joints = scene->getRobotModel()->getActiveJointModels();
  if (!active_joints.empty()) {
    std::ostringstream oss;
    oss << "MoveIt RobotState joints: ";

    // print first few joints (usually enough)
    size_t count = 0;
    for (const auto * jm : active_joints) {
      if (!jm) continue;

      const std::string & jn = jm->getName();
      // Active joints may have 1 variable (revolute/prismatic); use first variable name
      const auto & var_names = jm->getVariableNames();
      if (var_names.empty()) continue;

      const std::string & vn = var_names.front();
      double v = state.getVariablePosition(vn);

      oss << jn << "=" << v << "  ";
      count++;
      if (count >= 6) break;  // avoid huge logs
    }

    RCLCPP_INFO_THROTTLE(get_logger(), *get_clock(), 1000, "%s", oss.str().c_str());
  }

  // --- Distance query ---
  scene->getCollisionEnv()->distanceRobot(req, res, state);
  min_distance = res.minimum_distance.distance;

  RCLCPP_INFO_THROTTLE(
    get_logger(), *get_clock(), 1000,
    "Distance result: %.4f m", min_distance);

  if (min_distance <= stop_threshold_m_) {
    warning = "STOP";
  } else if (min_distance <= warn_threshold_m_) {
    warning = "WARN";
  }
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
    if (last_joint_state_stamp_.sec == 0 && last_joint_state_stamp_.nanosec == 0) {
      return false;
    }

    const rclcpp::Time now = this->get_clock()->now();
    const rclcpp::Time then(last_joint_state_stamp_);
    return (now - then).seconds() <= stale_timeout_sec_;
  }

  // Parameters / config
  std::string joint_state_topic_;
  std::string robot_urdf_path_;
  std::string robot_description_xml_;
  std::string robot_description_;
  std::string robot_srdf_path_;
  std::string robot_description_semantic_xml_;
  std::string robot_description_semantic_;
  std::string world_frame_;
  std::string obstacle_id_;

  // Joint validation
  std::set<std::string> expected_joint_names_;
  bool joint_mismatch_checked_{false};

  // Thresholds / timing
  double warn_threshold_m_{};
  double stop_threshold_m_{};
  double stale_timeout_sec_{};
  double eval_rate_hz_{};

  // Obstacle box
  double obstacle_x_{};
  double obstacle_y_{};
  double obstacle_z_{};
  double obstacle_px_{};
  double obstacle_py_{};
  double obstacle_pz_{};

  // Latest telemetry timestamp
  builtin_interfaces::msg::Time last_joint_state_stamp_{};

  // ROS I/O
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr min_distance_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr warning_level_pub_;
  rclcpp::Publisher<moveit_msgs::msg::PlanningScene>::SharedPtr planning_scene_pub_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr joint_state_sub_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::TimerBase::SharedPtr init_timer_;

  // Debug obstacle republish
  moveit_msgs::msg::CollisionObject obstacle_object_;
  rclcpp::TimerBase::SharedPtr obstacle_republish_timer_;

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
