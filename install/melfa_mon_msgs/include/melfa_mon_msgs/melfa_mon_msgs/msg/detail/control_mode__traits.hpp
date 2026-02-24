// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_mon_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_mon_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_mon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: general1_io_interface
  {
    out << "general1_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.general1_io_interface, out);
    out << ", ";
  }

  // member: general2_io_interface
  {
    out << "general2_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.general2_io_interface, out);
    out << ", ";
  }

  // member: user1_io_interface
  {
    out << "user1_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user1_io_interface, out);
    out << ", ";
  }

  // member: user2_io_interface
  {
    out << "user2_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user2_io_interface, out);
    out << ", ";
  }

  // member: user3_io_interface
  {
    out << "user3_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user3_io_interface, out);
    out << ", ";
  }

  // member: user4_io_interface
  {
    out << "user4_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user4_io_interface, out);
    out << ", ";
  }

  // member: user5_io_interface
  {
    out << "user5_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user5_io_interface, out);
    out << ", ";
  }

  // member: user6_io_interface
  {
    out << "user6_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user6_io_interface, out);
    out << ", ";
  }

  // member: user7_io_interface
  {
    out << "user7_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user7_io_interface, out);
    out << ", ";
  }

  // member: user8_io_interface
  {
    out << "user8_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user8_io_interface, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: general1_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general1_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.general1_io_interface, out);
    out << "\n";
  }

  // member: general2_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general2_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.general2_io_interface, out);
    out << "\n";
  }

  // member: user1_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user1_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user1_io_interface, out);
    out << "\n";
  }

  // member: user2_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user2_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user2_io_interface, out);
    out << "\n";
  }

  // member: user3_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user3_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user3_io_interface, out);
    out << "\n";
  }

  // member: user4_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user4_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user4_io_interface, out);
    out << "\n";
  }

  // member: user5_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user5_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user5_io_interface, out);
    out << "\n";
  }

  // member: user6_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user6_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user6_io_interface, out);
    out << "\n";
  }

  // member: user7_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user7_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user7_io_interface, out);
    out << "\n";
  }

  // member: user8_io_interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user8_io_interface: ";
    rosidl_generator_traits::value_to_yaml(msg.user8_io_interface, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlMode & msg, bool use_flow_style = false)
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
  const melfa_mon_msgs::msg::ControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_mon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_mon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_mon_msgs::msg::ControlMode & msg)
{
  return melfa_mon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_mon_msgs::msg::ControlMode>()
{
  return "melfa_mon_msgs::msg::ControlMode";
}

template<>
inline const char * name<melfa_mon_msgs::msg::ControlMode>()
{
  return "melfa_mon_msgs/msg/ControlMode";
}

template<>
struct has_fixed_size<melfa_mon_msgs::msg::ControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<melfa_mon_msgs::msg::ControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<melfa_mon_msgs::msg::ControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__TRAITS_HPP_
