// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from melfa_mon_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__TRAITS_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "melfa_mon_msgs/msg/detail/gpio_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace melfa_mon_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GpioState & msg,
  std::ostream & out)
{
  out << "{";
  // member: interface_name
  {
    out << "interface_name: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_name, out);
    out << ", ";
  }

  // member: input_addrr
  {
    out << "input_addrr: ";
    rosidl_generator_traits::value_to_yaml(msg.input_addrr, out);
    out << ", ";
  }

  // member: output_addrr
  {
    out << "output_addrr: ";
    rosidl_generator_traits::value_to_yaml(msg.output_addrr, out);
    out << ", ";
  }

  // member: input_data
  {
    out << "input_data: ";
    rosidl_generator_traits::value_to_yaml(msg.input_data, out);
    out << ", ";
  }

  // member: output_data
  {
    out << "output_data: ";
    rosidl_generator_traits::value_to_yaml(msg.output_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GpioState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interface_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface_name: ";
    rosidl_generator_traits::value_to_yaml(msg.interface_name, out);
    out << "\n";
  }

  // member: input_addrr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_addrr: ";
    rosidl_generator_traits::value_to_yaml(msg.input_addrr, out);
    out << "\n";
  }

  // member: output_addrr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_addrr: ";
    rosidl_generator_traits::value_to_yaml(msg.output_addrr, out);
    out << "\n";
  }

  // member: input_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_data: ";
    rosidl_generator_traits::value_to_yaml(msg.input_data, out);
    out << "\n";
  }

  // member: output_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_data: ";
    rosidl_generator_traits::value_to_yaml(msg.output_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GpioState & msg, bool use_flow_style = false)
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
  const melfa_mon_msgs::msg::GpioState & msg,
  std::ostream & out, size_t indentation = 0)
{
  melfa_mon_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use melfa_mon_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const melfa_mon_msgs::msg::GpioState & msg)
{
  return melfa_mon_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<melfa_mon_msgs::msg::GpioState>()
{
  return "melfa_mon_msgs::msg::GpioState";
}

template<>
inline const char * name<melfa_mon_msgs::msg::GpioState>()
{
  return "melfa_mon_msgs/msg/GpioState";
}

template<>
struct has_fixed_size<melfa_mon_msgs::msg::GpioState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<melfa_mon_msgs::msg::GpioState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<melfa_mon_msgs::msg::GpioState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__TRAITS_HPP_
