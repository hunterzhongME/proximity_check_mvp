// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_mon_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__STRUCT_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_mon_msgs__msg__GpioState __attribute__((deprecated))
#else
# define DEPRECATED__melfa_mon_msgs__msg__GpioState __declspec(deprecated)
#endif

namespace melfa_mon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpioState_
{
  using Type = GpioState_<ContainerAllocator>;

  explicit GpioState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interface_name = "";
      this->input_addrr = 0;
      this->output_addrr = 0;
      this->input_data = 0ul;
      this->output_data = 0ul;
    }
  }

  explicit GpioState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : interface_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interface_name = "";
      this->input_addrr = 0;
      this->output_addrr = 0;
      this->input_data = 0ul;
      this->output_data = 0ul;
    }
  }

  // field types and members
  using _interface_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _interface_name_type interface_name;
  using _input_addrr_type =
    uint16_t;
  _input_addrr_type input_addrr;
  using _output_addrr_type =
    uint16_t;
  _output_addrr_type output_addrr;
  using _input_data_type =
    uint32_t;
  _input_data_type input_data;
  using _output_data_type =
    uint32_t;
  _output_data_type output_data;

  // setters for named parameter idiom
  Type & set__interface_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->interface_name = _arg;
    return *this;
  }
  Type & set__input_addrr(
    const uint16_t & _arg)
  {
    this->input_addrr = _arg;
    return *this;
  }
  Type & set__output_addrr(
    const uint16_t & _arg)
  {
    this->output_addrr = _arg;
    return *this;
  }
  Type & set__input_data(
    const uint32_t & _arg)
  {
    this->input_data = _arg;
    return *this;
  }
  Type & set__output_data(
    const uint32_t & _arg)
  {
    this->output_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_mon_msgs::msg::GpioState_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_mon_msgs::msg::GpioState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::msg::GpioState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::msg::GpioState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_mon_msgs__msg__GpioState
    std::shared_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_mon_msgs__msg__GpioState
    std::shared_ptr<melfa_mon_msgs::msg::GpioState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioState_ & other) const
  {
    if (this->interface_name != other.interface_name) {
      return false;
    }
    if (this->input_addrr != other.input_addrr) {
      return false;
    }
    if (this->output_addrr != other.output_addrr) {
      return false;
    }
    if (this->input_data != other.input_data) {
      return false;
    }
    if (this->output_data != other.output_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioState_

// alias to use template instance with default allocator
using GpioState =
  melfa_mon_msgs::msg::GpioState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__STRUCT_HPP_
