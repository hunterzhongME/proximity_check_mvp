#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>

#include <unordered_map>
#include <string>
#include <sstream>

class JointStateRenamer : public rclcpp::Node
{
public:
  JointStateRenamer() : Node("joint_state_renamer")
  {
    in_topic_ = declare_parameter<std::string>(
      "input_topic", "/joint_state_broadcaster/joint_states");
    out_topic_ = declare_parameter<std::string>(
      "output_topic", "/joint_states_renamed");

    // Only joints that exist in your MoveIt robot model (rv7frl)
    rename_map_ = {
      {"joint_1", "rv7frl_joint_1"},
      {"joint_2", "rv7frl_joint_2"},
      {"joint_3", "rv7frl_joint_3"},
      {"joint_4", "rv7frl_joint_4"},
      {"joint_5", "rv7frl_joint_5"},
      {"joint_6", "rv7frl_joint_6"},
    };

    sub_ = create_subscription<sensor_msgs::msg::JointState>(
      in_topic_, rclcpp::SensorDataQoS(),
      std::bind(&JointStateRenamer::onMsg, this, std::placeholders::_1));

    pub_ = create_publisher<sensor_msgs::msg::JointState>(
      out_topic_, rclcpp::SensorDataQoS());

    RCLCPP_INFO(get_logger(), "JointStateRenamer: %s -> %s", in_topic_.c_str(), out_topic_.c_str());
  }

private:
  void onMsg(const sensor_msgs::msg::JointState::SharedPtr msg)
  {
    sensor_msgs::msg::JointState out;
    out.header = msg->header;

    // Build a filtered + renamed JointState while keeping arrays aligned
    for (size_t i = 0; i < msg->name.size(); ++i)
    {
      const std::string & in_name = msg->name[i];

      auto it = rename_map_.find(in_name);
      if (it == rename_map_.end())
      {
        // Drop unknown joints (e.g. joint_7, joint_8)
        continue;
      }

      out.name.push_back(it->second);

      if (i < msg->position.size()) out.position.push_back(msg->position[i]);
      if (i < msg->velocity.size()) out.velocity.push_back(msg->velocity[i]);
      if (i < msg->effort.size())   out.effort.push_back(msg->effort[i]);
    }

    if (out.name.empty())
    {
      RCLCPP_WARN_THROTTLE(
        get_logger(), *get_clock(), 2000,
        "joint_renamer: no known joints found in incoming JointState");
      return;
    }

    // Debug (throttled): confirm only 6 renamed joints are going out
    std::ostringstream oss;
    oss << "joint_renamer out: ";
    for (size_t i = 0; i < out.name.size(); ++i)
    {
      oss << out.name[i];
      if (i + 1 < out.name.size()) oss << ", ";
    }
    RCLCPP_INFO_THROTTLE(get_logger(), *get_clock(), 2000, "%s", oss.str().c_str());

    pub_->publish(out);
  }

  std::string in_topic_;
  std::string out_topic_;
  std::unordered_map<std::string, std::string> rename_map_;

  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr sub_;
  rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr pub_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<JointStateRenamer>());
  rclcpp::shutdown();
  return 0;
}
