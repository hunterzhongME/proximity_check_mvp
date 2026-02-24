#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>

class JointStateSmoke : public rclcpp::Node {
public:
  JointStateSmoke() : Node("joint_state_pub") {
    topic_ = this->declare_parameter<std::string>("joint_state_topic", "/joint_state_broadcaster/joint_states"); //subsribe to a JointState Topic

    sub_ = this->create_subscription<sensor_msgs::msg::JointState>(
      topic_, rclcpp::SensorDataQoS(),
      [this](sensor_msgs::msg::JointState::SharedPtr msg) {
        (void)msg;
        count_++;
      });
      //count how many messages arrive per second

    timer_ = this->create_wall_timer(std::chrono::seconds(1), [this]() {
      RCLCPP_INFO(this->get_logger(), "JointState RX: %ld msg/s on topic: %s",
                  count_, topic_.c_str());//print the receive rate
      count_ = 0;
    });

    RCLCPP_INFO(this->get_logger(), "Listening on joint state topic: %s", topic_.c_str());
  }

private:
  std::string topic_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr sub_;
  rclcpp::TimerBase::SharedPtr timer_;
  long count_{0};
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<JointStateSmoke>());
  rclcpp::shutdown();
  return 0;
}