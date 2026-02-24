// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_
#define MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__melfa_mon_msgs__msg__RobotInfo __attribute__((deprecated))
#else
# define DEPRECATED__melfa_mon_msgs__msg__RobotInfo __declspec(deprecated)
#endif

namespace melfa_mon_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotInfo_
{
  using Type = RobotInfo_<ContainerAllocator>;

  explicit RobotInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_point_speed_feedback = 0.0f;
      this->remaining_distance_feedback = 0.0f;
      this->tool_point_speed_command = 0.0f;
      this->remaining_distance_command = 0.0f;
      this->gap_of_command_and_feedback = 0.0f;
      this->transport_factor_command = 0;
      this->acceleration_state_command = 0;
      this->step_number = 0;
      this->program_number = "";
      this->controller_temperature = 0;
      this->monitoring_counter = 0ul;
    }
  }

  explicit RobotInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : program_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tool_point_speed_feedback = 0.0f;
      this->remaining_distance_feedback = 0.0f;
      this->tool_point_speed_command = 0.0f;
      this->remaining_distance_command = 0.0f;
      this->gap_of_command_and_feedback = 0.0f;
      this->transport_factor_command = 0;
      this->acceleration_state_command = 0;
      this->step_number = 0;
      this->program_number = "";
      this->controller_temperature = 0;
      this->monitoring_counter = 0ul;
    }
  }

  // field types and members
  using _tool_point_speed_feedback_type =
    float;
  _tool_point_speed_feedback_type tool_point_speed_feedback;
  using _remaining_distance_feedback_type =
    float;
  _remaining_distance_feedback_type remaining_distance_feedback;
  using _tool_point_speed_command_type =
    float;
  _tool_point_speed_command_type tool_point_speed_command;
  using _remaining_distance_command_type =
    float;
  _remaining_distance_command_type remaining_distance_command;
  using _gap_of_command_and_feedback_type =
    float;
  _gap_of_command_and_feedback_type gap_of_command_and_feedback;
  using _transport_factor_command_type =
    uint16_t;
  _transport_factor_command_type transport_factor_command;
  using _acceleration_state_command_type =
    uint16_t;
  _acceleration_state_command_type acceleration_state_command;
  using _step_number_type =
    uint16_t;
  _step_number_type step_number;
  using _program_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _program_number_type program_number;
  using _controller_temperature_type =
    uint16_t;
  _controller_temperature_type controller_temperature;
  using _monitoring_counter_type =
    uint32_t;
  _monitoring_counter_type monitoring_counter;

  // setters for named parameter idiom
  Type & set__tool_point_speed_feedback(
    const float & _arg)
  {
    this->tool_point_speed_feedback = _arg;
    return *this;
  }
  Type & set__remaining_distance_feedback(
    const float & _arg)
  {
    this->remaining_distance_feedback = _arg;
    return *this;
  }
  Type & set__tool_point_speed_command(
    const float & _arg)
  {
    this->tool_point_speed_command = _arg;
    return *this;
  }
  Type & set__remaining_distance_command(
    const float & _arg)
  {
    this->remaining_distance_command = _arg;
    return *this;
  }
  Type & set__gap_of_command_and_feedback(
    const float & _arg)
  {
    this->gap_of_command_and_feedback = _arg;
    return *this;
  }
  Type & set__transport_factor_command(
    const uint16_t & _arg)
  {
    this->transport_factor_command = _arg;
    return *this;
  }
  Type & set__acceleration_state_command(
    const uint16_t & _arg)
  {
    this->acceleration_state_command = _arg;
    return *this;
  }
  Type & set__step_number(
    const uint16_t & _arg)
  {
    this->step_number = _arg;
    return *this;
  }
  Type & set__program_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->program_number = _arg;
    return *this;
  }
  Type & set__controller_temperature(
    const uint16_t & _arg)
  {
    this->controller_temperature = _arg;
    return *this;
  }
  Type & set__monitoring_counter(
    const uint32_t & _arg)
  {
    this->monitoring_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__melfa_mon_msgs__msg__RobotInfo
    std::shared_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__melfa_mon_msgs__msg__RobotInfo
    std::shared_ptr<melfa_mon_msgs::msg::RobotInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInfo_ & other) const
  {
    if (this->tool_point_speed_feedback != other.tool_point_speed_feedback) {
      return false;
    }
    if (this->remaining_distance_feedback != other.remaining_distance_feedback) {
      return false;
    }
    if (this->tool_point_speed_command != other.tool_point_speed_command) {
      return false;
    }
    if (this->remaining_distance_command != other.remaining_distance_command) {
      return false;
    }
    if (this->gap_of_command_and_feedback != other.gap_of_command_and_feedback) {
      return false;
    }
    if (this->transport_factor_command != other.transport_factor_command) {
      return false;
    }
    if (this->acceleration_state_command != other.acceleration_state_command) {
      return false;
    }
    if (this->step_number != other.step_number) {
      return false;
    }
    if (this->program_number != other.program_number) {
      return false;
    }
    if (this->controller_temperature != other.controller_temperature) {
      return false;
    }
    if (this->monitoring_counter != other.monitoring_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInfo_

// alias to use template instance with default allocator
using RobotInfo =
  melfa_mon_msgs::msg::RobotInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace melfa_mon_msgs

#endif  // MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_HPP_
