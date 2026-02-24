// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_mon_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_mon_msgs/msg/detail/control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_mon_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlMode_user8_io_interface
{
public:
  explicit Init_ControlMode_user8_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  ::melfa_mon_msgs::msg::ControlMode user8_io_interface(::melfa_mon_msgs::msg::ControlMode::_user8_io_interface_type arg)
  {
    msg_.user8_io_interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user7_io_interface
{
public:
  explicit Init_ControlMode_user7_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user8_io_interface user7_io_interface(::melfa_mon_msgs::msg::ControlMode::_user7_io_interface_type arg)
  {
    msg_.user7_io_interface = std::move(arg);
    return Init_ControlMode_user8_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user6_io_interface
{
public:
  explicit Init_ControlMode_user6_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user7_io_interface user6_io_interface(::melfa_mon_msgs::msg::ControlMode::_user6_io_interface_type arg)
  {
    msg_.user6_io_interface = std::move(arg);
    return Init_ControlMode_user7_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user5_io_interface
{
public:
  explicit Init_ControlMode_user5_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user6_io_interface user5_io_interface(::melfa_mon_msgs::msg::ControlMode::_user5_io_interface_type arg)
  {
    msg_.user5_io_interface = std::move(arg);
    return Init_ControlMode_user6_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user4_io_interface
{
public:
  explicit Init_ControlMode_user4_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user5_io_interface user4_io_interface(::melfa_mon_msgs::msg::ControlMode::_user4_io_interface_type arg)
  {
    msg_.user4_io_interface = std::move(arg);
    return Init_ControlMode_user5_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user3_io_interface
{
public:
  explicit Init_ControlMode_user3_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user4_io_interface user3_io_interface(::melfa_mon_msgs::msg::ControlMode::_user3_io_interface_type arg)
  {
    msg_.user3_io_interface = std::move(arg);
    return Init_ControlMode_user4_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user2_io_interface
{
public:
  explicit Init_ControlMode_user2_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user3_io_interface user2_io_interface(::melfa_mon_msgs::msg::ControlMode::_user2_io_interface_type arg)
  {
    msg_.user2_io_interface = std::move(arg);
    return Init_ControlMode_user3_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_user1_io_interface
{
public:
  explicit Init_ControlMode_user1_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user2_io_interface user1_io_interface(::melfa_mon_msgs::msg::ControlMode::_user1_io_interface_type arg)
  {
    msg_.user1_io_interface = std::move(arg);
    return Init_ControlMode_user2_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_general2_io_interface
{
public:
  explicit Init_ControlMode_general2_io_interface(::melfa_mon_msgs::msg::ControlMode & msg)
  : msg_(msg)
  {}
  Init_ControlMode_user1_io_interface general2_io_interface(::melfa_mon_msgs::msg::ControlMode::_general2_io_interface_type arg)
  {
    msg_.general2_io_interface = std::move(arg);
    return Init_ControlMode_user1_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

class Init_ControlMode_general1_io_interface
{
public:
  Init_ControlMode_general1_io_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMode_general2_io_interface general1_io_interface(::melfa_mon_msgs::msg::ControlMode::_general1_io_interface_type arg)
  {
    msg_.general1_io_interface = std::move(arg);
    return Init_ControlMode_general2_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::msg::ControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::msg::ControlMode>()
{
  return melfa_mon_msgs::msg::builder::Init_ControlMode_general1_io_interface();
}

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__BUILDER_HPP_
