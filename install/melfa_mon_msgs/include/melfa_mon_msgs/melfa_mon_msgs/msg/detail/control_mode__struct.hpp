// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_mon_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_mon_msgs__msg__ControlMode __attribute__((deprecated))
#else
# define DEPRECATED__melfa_mon_msgs__msg__ControlMode __declspec(deprecated)
#endif

namespace melfa_mon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlMode_
{
  using Type = ControlMode_<ContainerAllocator>;

  explicit ControlMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->general1_io_interface = false;
      this->general2_io_interface = false;
      this->user1_io_interface = false;
      this->user2_io_interface = false;
      this->user3_io_interface = false;
      this->user4_io_interface = false;
      this->user5_io_interface = false;
      this->user6_io_interface = false;
      this->user7_io_interface = false;
      this->user8_io_interface = false;
    }
  }

  explicit ControlMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->general1_io_interface = false;
      this->general2_io_interface = false;
      this->user1_io_interface = false;
      this->user2_io_interface = false;
      this->user3_io_interface = false;
      this->user4_io_interface = false;
      this->user5_io_interface = false;
      this->user6_io_interface = false;
      this->user7_io_interface = false;
      this->user8_io_interface = false;
    }
  }

  // field types and members
  using _general1_io_interface_type =
    bool;
  _general1_io_interface_type general1_io_interface;
  using _general2_io_interface_type =
    bool;
  _general2_io_interface_type general2_io_interface;
  using _user1_io_interface_type =
    bool;
  _user1_io_interface_type user1_io_interface;
  using _user2_io_interface_type =
    bool;
  _user2_io_interface_type user2_io_interface;
  using _user3_io_interface_type =
    bool;
  _user3_io_interface_type user3_io_interface;
  using _user4_io_interface_type =
    bool;
  _user4_io_interface_type user4_io_interface;
  using _user5_io_interface_type =
    bool;
  _user5_io_interface_type user5_io_interface;
  using _user6_io_interface_type =
    bool;
  _user6_io_interface_type user6_io_interface;
  using _user7_io_interface_type =
    bool;
  _user7_io_interface_type user7_io_interface;
  using _user8_io_interface_type =
    bool;
  _user8_io_interface_type user8_io_interface;

  // setters for named parameter idiom
  Type & set__general1_io_interface(
    const bool & _arg)
  {
    this->general1_io_interface = _arg;
    return *this;
  }
  Type & set__general2_io_interface(
    const bool & _arg)
  {
    this->general2_io_interface = _arg;
    return *this;
  }
  Type & set__user1_io_interface(
    const bool & _arg)
  {
    this->user1_io_interface = _arg;
    return *this;
  }
  Type & set__user2_io_interface(
    const bool & _arg)
  {
    this->user2_io_interface = _arg;
    return *this;
  }
  Type & set__user3_io_interface(
    const bool & _arg)
  {
    this->user3_io_interface = _arg;
    return *this;
  }
  Type & set__user4_io_interface(
    const bool & _arg)
  {
    this->user4_io_interface = _arg;
    return *this;
  }
  Type & set__user5_io_interface(
    const bool & _arg)
  {
    this->user5_io_interface = _arg;
    return *this;
  }
  Type & set__user6_io_interface(
    const bool & _arg)
  {
    this->user6_io_interface = _arg;
    return *this;
  }
  Type & set__user7_io_interface(
    const bool & _arg)
  {
    this->user7_io_interface = _arg;
    return *this;
  }
  Type & set__user8_io_interface(
    const bool & _arg)
  {
    this->user8_io_interface = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_mon_msgs::msg::ControlMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_mon_msgs::msg::ControlMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::msg::ControlMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::msg::ControlMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_mon_msgs__msg__ControlMode
    std::shared_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_mon_msgs__msg__ControlMode
    std::shared_ptr<melfa_mon_msgs::msg::ControlMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMode_ & other) const
  {
    if (this->general1_io_interface != other.general1_io_interface) {
      return false;
    }
    if (this->general2_io_interface != other.general2_io_interface) {
      return false;
    }
    if (this->user1_io_interface != other.user1_io_interface) {
      return false;
    }
    if (this->user2_io_interface != other.user2_io_interface) {
      return false;
    }
    if (this->user3_io_interface != other.user3_io_interface) {
      return false;
    }
    if (this->user4_io_interface != other.user4_io_interface) {
      return false;
    }
    if (this->user5_io_interface != other.user5_io_interface) {
      return false;
    }
    if (this->user6_io_interface != other.user6_io_interface) {
      return false;
    }
    if (this->user7_io_interface != other.user7_io_interface) {
      return false;
    }
    if (this->user8_io_interface != other.user8_io_interface) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMode_

// alias to use template instance with default allocator
using ControlMode =
  melfa_mon_msgs::msg::ControlMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_HPP_
