// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
#define MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'program_number'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotInfo in the package melfa_mon_msgs.
/**
  * COPYRIGHT (C) 2025 Mitsubishi Electric Corporation
 */
typedef struct melfa_mon_msgs__msg__RobotInfo
{
  ///    Licensed under the Apache License, Version 2.0 (the "License");
  ///    you may not use this file except in compliance with the License.
  ///    You may obtain a copy of the License at
  ///        http://www.apache.org/licenses/LICENSE-2.0
  ///    Unless required by applicable law or agreed to in writing, software
  ///    distributed under the License is distributed on an "AS IS" BASIS,
  ///    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ///    See the License for the specific language governing permissions and
  ///    limitations under the License.
  /// Controller Type
  float tool_point_speed_feedback;
  float remaining_distance_feedback;
  float tool_point_speed_command;
  float remaining_distance_command;
  float gap_of_command_and_feedback;
  uint16_t transport_factor_command;
  uint16_t acceleration_state_command;
  uint16_t step_number;
  rosidl_runtime_c__String program_number;
  uint16_t controller_temperature;
  uint32_t monitoring_counter;
} melfa_mon_msgs__msg__RobotInfo;

// Struct for a sequence of melfa_mon_msgs__msg__RobotInfo.
typedef struct melfa_mon_msgs__msg__RobotInfo__Sequence
{
  melfa_mon_msgs__msg__RobotInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_mon_msgs__msg__RobotInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
