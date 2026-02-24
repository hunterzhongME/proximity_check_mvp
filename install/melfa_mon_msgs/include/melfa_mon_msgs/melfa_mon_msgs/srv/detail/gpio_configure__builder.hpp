// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_mon_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__BUILDER_HPP_
#define MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_mon_msgs/srv/detail/gpio_configure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_mon_msgs
{

namespace srv
{

namespace builder
{

class Init_GpioConfigure_Request_output_addrr
{
public:
  explicit Init_GpioConfigure_Request_output_addrr(::melfa_mon_msgs::srv::GpioConfigure_Request & msg)
  : msg_(msg)
  {}
  ::melfa_mon_msgs::srv::GpioConfigure_Request output_addrr(::melfa_mon_msgs::srv::GpioConfigure_Request::_output_addrr_type arg)
  {
    msg_.output_addrr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::srv::GpioConfigure_Request msg_;
};

class Init_GpioConfigure_Request_input_addrr
{
public:
  Init_GpioConfigure_Request_input_addrr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioConfigure_Request_output_addrr input_addrr(::melfa_mon_msgs::srv::GpioConfigure_Request::_input_addrr_type arg)
  {
    msg_.input_addrr = std::move(arg);
    return Init_GpioConfigure_Request_output_addrr(msg_);
  }

private:
  ::melfa_mon_msgs::srv::GpioConfigure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::srv::GpioConfigure_Request>()
{
  return melfa_mon_msgs::srv::builder::Init_GpioConfigure_Request_input_addrr();
}

}  // namespace melfa_mon_msgs


namespace melfa_mon_msgs
{

namespace srv
{

namespace builder
{

class Init_GpioConfigure_Response_success
{
public:
  Init_GpioConfigure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::melfa_mon_msgs::srv::GpioConfigure_Response success(::melfa_mon_msgs::srv::GpioConfigure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::srv::GpioConfigure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::srv::GpioConfigure_Response>()
{
  return melfa_mon_msgs::srv::builder::Init_GpioConfigure_Response_success();
}

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__BUILDER_HPP_
