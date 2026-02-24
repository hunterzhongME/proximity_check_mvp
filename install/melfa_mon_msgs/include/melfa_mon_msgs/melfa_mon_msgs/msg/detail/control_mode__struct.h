// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_mon_msgs:msg/ControlMode.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_
#define MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControlMode in the package melfa_mon_msgs.
/**
  * COPYRIGHT (C) 2025 Mitsubishi Electric Corporation
 */
typedef struct melfa_mon_msgs__msg__ControlMode
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
  /// IO binary control mode
  bool general1_io_interface;
  bool general2_io_interface;
  bool user1_io_interface;
  bool user2_io_interface;
  bool user3_io_interface;
  bool user4_io_interface;
  bool user5_io_interface;
  bool user6_io_interface;
  bool user7_io_interface;
  bool user8_io_interface;
} melfa_mon_msgs__msg__ControlMode;

// Struct for a sequence of melfa_mon_msgs__msg__ControlMode.
typedef struct melfa_mon_msgs__msg__ControlMode__Sequence
{
  melfa_mon_msgs__msg__ControlMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_mon_msgs__msg__ControlMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MON_MSGS__MSG__DETAIL__CONTROL_MODE__STRUCT_H_
