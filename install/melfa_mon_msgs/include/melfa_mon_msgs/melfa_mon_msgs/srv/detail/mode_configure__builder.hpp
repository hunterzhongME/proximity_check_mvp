// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from melfa_mon_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__SRV__DETAIL__MODE_CONFIGURE__BUILDER_HPP_
#define MELFA_MON_MSGS__SRV__DETAIL__MODE_CONFIGURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "melfa_mon_msgs/srv/detail/mode_configure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace melfa_mon_msgs
{

namespace srv
{

namespace builder
{

class Init_ModeConfigure_Request_user8_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user8_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  ::melfa_mon_msgs::srv::ModeConfigure_Request user8_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user8_io_interface_type arg)
  {
    msg_.user8_io_interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user7_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user7_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user8_io_interface user7_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user7_io_interface_type arg)
  {
    msg_.user7_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user8_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user6_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user6_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user7_io_interface user6_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user6_io_interface_type arg)
  {
    msg_.user6_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user7_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user5_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user5_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user6_io_interface user5_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user5_io_interface_type arg)
  {
    msg_.user5_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user6_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user4_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user4_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user5_io_interface user4_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user4_io_interface_type arg)
  {
    msg_.user4_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user5_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user3_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user3_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user4_io_interface user3_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user3_io_interface_type arg)
  {
    msg_.user3_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user4_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user2_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user2_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user3_io_interface user2_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user2_io_interface_type arg)
  {
    msg_.user2_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user3_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_user1_io_interface
{
public:
  explicit Init_ModeConfigure_Request_user1_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user2_io_interface user1_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_user1_io_interface_type arg)
  {
    msg_.user1_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user2_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_general2_io_interface
{
public:
  explicit Init_ModeConfigure_Request_general2_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request & msg)
  : msg_(msg)
  {}
  Init_ModeConfigure_Request_user1_io_interface general2_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_general2_io_interface_type arg)
  {
    msg_.general2_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_user1_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

class Init_ModeConfigure_Request_general1_io_interface
{
public:
  Init_ModeConfigure_Request_general1_io_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeConfigure_Request_general2_io_interface general1_io_interface(::melfa_mon_msgs::srv::ModeConfigure_Request::_general1_io_interface_type arg)
  {
    msg_.general1_io_interface = std::move(arg);
    return Init_ModeConfigure_Request_general2_io_interface(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::srv::ModeConfigure_Request>()
{
  return melfa_mon_msgs::srv::builder::Init_ModeConfigure_Request_general1_io_interface();
}

}  // namespace melfa_mon_msgs


namespace melfa_mon_msgs
{

namespace srv
{

namespace builder
{

class Init_ModeConfigure_Response_success
{
public:
  Init_ModeConfigure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::melfa_mon_msgs::srv::ModeConfigure_Response success(::melfa_mon_msgs::srv::ModeConfigure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::melfa_mon_msgs::srv::ModeConfigure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::melfa_mon_msgs::srv::ModeConfigure_Response>()
{
  return melfa_mon_msgs::srv::builder::Init_ModeConfigure_Response_success();
}

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__SRV__DETAIL__MODE_CONFIGURE__BUILDER_HPP_
