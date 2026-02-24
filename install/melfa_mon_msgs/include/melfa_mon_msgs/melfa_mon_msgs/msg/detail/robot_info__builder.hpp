// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_mon_msgs/msg/detail/robot_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_mon_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotInfo_monitoring_counter
{
public:
  explicit Init_RobotInfo_monitoring_counter(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  ::melfa_mon_msgs::msg::RobotInfo monitoring_counter(::melfa_mon_msgs::msg::RobotInfo::_monitoring_counter_type arg)
  {
    msg_.monitoring_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_controller_temperature
{
public:
  explicit Init_RobotInfo_controller_temperature(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_monitoring_counter controller_temperature(::melfa_mon_msgs::msg::RobotInfo::_controller_temperature_type arg)
  {
    msg_.controller_temperature = std::move(arg);
    return Init_RobotInfo_monitoring_counter(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_program_number
{
public:
  explicit Init_RobotInfo_program_number(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_controller_temperature program_number(::melfa_mon_msgs::msg::RobotInfo::_program_number_type arg)
  {
    msg_.program_number = std::move(arg);
    return Init_RobotInfo_controller_temperature(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_step_number
{
public:
  explicit Init_RobotInfo_step_number(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_program_number step_number(::melfa_mon_msgs::msg::RobotInfo::_step_number_type arg)
  {
    msg_.step_number = std::move(arg);
    return Init_RobotInfo_program_number(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_acceleration_state_command
{
public:
  explicit Init_RobotInfo_acceleration_state_command(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_step_number acceleration_state_command(::melfa_mon_msgs::msg::RobotInfo::_acceleration_state_command_type arg)
  {
    msg_.acceleration_state_command = std::move(arg);
    return Init_RobotInfo_step_number(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_transport_factor_command
{
public:
  explicit Init_RobotInfo_transport_factor_command(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_acceleration_state_command transport_factor_command(::melfa_mon_msgs::msg::RobotInfo::_transport_factor_command_type arg)
  {
    msg_.transport_factor_command = std::move(arg);
    return Init_RobotInfo_acceleration_state_command(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_gap_of_command_and_feedback
{
public:
  explicit Init_RobotInfo_gap_of_command_and_feedback(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_transport_factor_command gap_of_command_and_feedback(::melfa_mon_msgs::msg::RobotInfo::_gap_of_command_and_feedback_type arg)
  {
    msg_.gap_of_command_and_feedback = std::move(arg);
    return Init_RobotInfo_transport_factor_command(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_remaining_distance_command
{
public:
  explicit Init_RobotInfo_remaining_distance_command(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_gap_of_command_and_feedback remaining_distance_command(::melfa_mon_msgs::msg::RobotInfo::_remaining_distance_command_type arg)
  {
    msg_.remaining_distance_command = std::move(arg);
    return Init_RobotInfo_gap_of_command_and_feedback(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_tool_point_speed_command
{
public:
  explicit Init_RobotInfo_tool_point_speed_command(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_remaining_distance_command tool_point_speed_command(::melfa_mon_msgs::msg::RobotInfo::_tool_point_speed_command_type arg)
  {
    msg_.tool_point_speed_command = std::move(arg);
    return Init_RobotInfo_remaining_distance_command(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_remaining_distance_feedback
{
public:
  explicit Init_RobotInfo_remaining_distance_feedback(::melfa_mon_msgs::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_tool_point_speed_command remaining_distance_feedback(::melfa_mon_msgs::msg::RobotInfo::_remaining_distance_feedback_type arg)
  {
    msg_.remaining_distance_feedback = std::move(arg);
    return Init_RobotInfo_tool_point_speed_command(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

class Init_RobotInfo_tool_point_speed_feedback
{
public:
  Init_RobotInfo_tool_point_speed_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInfo_remaining_distance_feedback tool_point_speed_feedback(::melfa_mon_msgs::msg::RobotInfo::_tool_point_speed_feedback_type arg)
  {
    msg_.tool_point_speed_feedback = std::move(arg);
    return Init_RobotInfo_remaining_distance_feedback(msg_);
  }

private:
  ::melfa_mon_msgs::msg::RobotInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::msg::RobotInfo>()
{
  return melfa_mon_msgs::msg::builder::Init_RobotInfo_tool_point_speed_feedback();
}

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
