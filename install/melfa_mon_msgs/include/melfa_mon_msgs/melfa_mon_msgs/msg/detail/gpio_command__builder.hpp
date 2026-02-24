// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_mon_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__GPIO_COMMAND__BUILDER_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__GPIO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_mon_msgs/msg/detail/gpio_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_mon_msgs
{

namespace msg
{

namespace builder
{

class Init_GpioCommand_output_addrr
{
public:
  explicit Init_GpioCommand_output_addrr(::melfa_mon_msgs::msg::GpioCommand & msg)
  : msg_(msg)
  {}
  ::melfa_mon_msgs::msg::GpioCommand output_addrr(::melfa_mon_msgs::msg::GpioCommand::_output_addrr_type arg)
  {
    msg_.output_addrr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioCommand msg_;
};

class Init_GpioCommand_input_addrr
{
public:
  Init_GpioCommand_input_addrr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioCommand_output_addrr input_addrr(::melfa_mon_msgs::msg::GpioCommand::_input_addrr_type arg)
  {
    msg_.input_addrr = std::move(arg);
    return Init_GpioCommand_output_addrr(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::msg::GpioCommand>()
{
  return melfa_mon_msgs::msg::builder::Init_GpioCommand_input_addrr();
}

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__GPIO_COMMAND__BUILDER_HPP_
