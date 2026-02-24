// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_mon_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_HPP_
#define MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Request __attribute__((deprecated))
#else
# define DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Request __declspec(deprecated)
#endif

namespace melfa_mon_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GpioConfigure_Request_
{
  using Type = GpioConfigure_Request_<ContainerAllocator>;

  explicit GpioConfigure_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_addrr = 0;
      this->output_addrr = 0;
    }
  }

  explicit GpioConfigure_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_addrr = 0;
      this->output_addrr = 0;
    }
  }

  // field types and members
  using _input_addrr_type =
    uint16_t;
  _input_addrr_type input_addrr;
  using _output_addrr_type =
    uint16_t;
  _output_addrr_type output_addrr;

  // setters for named parameter idiom
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

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Request
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Request
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioConfigure_Request_ & other) const
  {
    if (this->input_addrr != other.input_addrr) {
      return false;
    }
    if (this->output_addrr != other.output_addrr) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioConfigure_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioConfigure_Request_

// alias to use template instance with default allocator
using GpioConfigure_Request =
  melfa_mon_msgs::srv::GpioConfigure_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace melfa_mon_msgs


#ifndef _WIN32
# define DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Response __attribute__((deprecated))
#else
# define DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Response __declspec(deprecated)
#endif

namespace melfa_mon_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GpioConfigure_Response_
{
  using Type = GpioConfigure_Response_<ContainerAllocator>;

  explicit GpioConfigure_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit GpioConfigure_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Response
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_mon_msgs__srv__GpioConfigure_Response
    std::shared_ptr<melfa_mon_msgs::srv::GpioConfigure_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioConfigure_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioConfigure_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioConfigure_Response_

// alias to use template instance with default allocator
using GpioConfigure_Response =
  melfa_mon_msgs::srv::GpioConfigure_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace melfa_mon_msgs

namespace melfa_mon_msgs
{

namespace srv
{

struct GpioConfigure
{
  using Request = melfa_mon_msgs::srv::GpioConfigure_Request;
  using Response = melfa_mon_msgs::srv::GpioConfigure_Response;
};

}  // namespace srv

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_HPP_
