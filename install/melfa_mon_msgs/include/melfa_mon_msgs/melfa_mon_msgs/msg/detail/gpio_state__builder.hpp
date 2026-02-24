// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_mon_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__BUILDER_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_mon_msgs/msg/detail/gpio_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_mon_msgs
{

namespace msg
{

namespace builder
{

class Init_GpioState_output_data
{
public:
  explicit Init_GpioState_output_data(::melfa_mon_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  ::melfa_mon_msgs::msg::GpioState output_data(::melfa_mon_msgs::msg::GpioState::_output_data_type arg)
  {
    msg_.output_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioState msg_;
};

class Init_GpioState_input_data
{
public:
  explicit Init_GpioState_input_data(::melfa_mon_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_output_data input_data(::melfa_mon_msgs::msg::GpioState::_input_data_type arg)
  {
    msg_.input_data = std::move(arg);
    return Init_GpioState_output_data(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioState msg_;
};

class Init_GpioState_output_addrr
{
public:
  explicit Init_GpioState_output_addrr(::melfa_mon_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_input_data output_addrr(::melfa_mon_msgs::msg::GpioState::_output_addrr_type arg)
  {
    msg_.output_addrr = std::move(arg);
    return Init_GpioState_input_data(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioState msg_;
};

class Init_GpioState_input_addrr
{
public:
  explicit Init_GpioState_input_addrr(::melfa_mon_msgs::msg::GpioState & msg)
  : msg_(msg)
  {}
  Init_GpioState_output_addrr input_addrr(::melfa_mon_msgs::msg::GpioState::_input_addrr_type arg)
  {
    msg_.input_addrr = std::move(arg);
    return Init_GpioState_output_addrr(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioState msg_;
};

class Init_GpioState_interface_name
{
public:
  Init_GpioState_interface_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioState_input_addrr interface_name(::melfa_mon_msgs::msg::GpioState::_interface_name_type arg)
  {
    msg_.interface_name = std::move(arg);
    return Init_GpioState_input_addrr(msg_);
  }

private:
  ::melfa_mon_msgs::msg::GpioState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::msg::GpioState>()
{
  return melfa_mon_msgs::msg::builder::Init_GpioState_interface_name();
}

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__BUILDER_HPP_
