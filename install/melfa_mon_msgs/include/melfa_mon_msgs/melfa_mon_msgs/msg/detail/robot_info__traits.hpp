// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_mon_msgs/msg/detail/robot_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_mon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: tool_point_speed_feedback
  {
    out << "tool_point_speed_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_point_speed_feedback, out);
    out << ", ";
  }

  // member: remaining_distance_feedback
  {
    out << "remaining_distance_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance_feedback, out);
    out << ", ";
  }

  // member: tool_point_speed_command
  {
    out << "tool_point_speed_command: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_point_speed_command, out);
    out << ", ";
  }

  // member: remaining_distance_command
  {
    out << "remaining_distance_command: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance_command, out);
    out << ", ";
  }

  // member: gap_of_command_and_feedback
  {
    out << "gap_of_command_and_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_of_command_and_feedback, out);
    out << ", ";
  }

  // member: transport_factor_command
  {
    out << "transport_factor_command: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_factor_command, out);
    out << ", ";
  }

  // member: acceleration_state_command
  {
    out << "acceleration_state_command: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_state_command, out);
    out << ", ";
  }

  // member: step_number
  {
    out << "step_number: ";
    rosidl_generator_traits::value_to_yaml(msg.step_number, out);
    out << ", ";
  }

  // member: program_number
  {
    out << "program_number: ";
    rosidl_generator_traits::value_to_yaml(msg.program_number, out);
    out << ", ";
  }

  // member: controller_temperature
  {
    out << "controller_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_temperature, out);
    out << ", ";
  }

  // member: monitoring_counter
  {
    out << "monitoring_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.monitoring_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tool_point_speed_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_point_speed_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_point_speed_feedback, out);
    out << "\n";
  }

  // member: remaining_distance_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_distance_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance_feedback, out);
    out << "\n";
  }

  // member: tool_point_speed_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_point_speed_command: ";
    rosidl_generator_traits::value_to_yaml(msg.tool_point_speed_command, out);
    out << "\n";
  }

  // member: remaining_distance_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_distance_command: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance_command, out);
    out << "\n";
  }

  // member: gap_of_command_and_feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gap_of_command_and_feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.gap_of_command_and_feedback, out);
    out << "\n";
  }

  // member: transport_factor_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport_factor_command: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_factor_command, out);
    out << "\n";
  }

  // member: acceleration_state_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_state_command: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_state_command, out);
    out << "\n";
  }

  // member: step_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_number: ";
    rosidl_generator_traits::value_to_yaml(msg.step_number, out);
    out << "\n";
  }

  // member: program_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "program_number: ";
    rosidl_generator_traits::value_to_yaml(msg.program_number, out);
    out << "\n";
  }

  // member: controller_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_temperature, out);
    out << "\n";
  }

  // member: monitoring_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "monitoring_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.monitoring_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotInfo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace melfa_mon_msgs

namespace rosidl_generator_traits
{

[[deprecated("use melfa_mon_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const melfa_mon_msgs::msg::RobotInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_mon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_mon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_mon_msgs::msg::RobotInfo & msg)
{
  return melfa_mon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_mon_msgs::msg::RobotInfo>()
{
  return "melfa_mon_msgs::msg::RobotInfo";
}

template<>
inline const char * name<melfa_mon_msgs::msg::RobotInfo>()
{
  return "melfa_mon_msgs/msg/RobotInfo";
}

template<>
struct has_fixed_size<melfa_mon_msgs::msg::RobotInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<melfa_mon_msgs::msg::RobotInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<melfa_mon_msgs::msg::RobotInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
