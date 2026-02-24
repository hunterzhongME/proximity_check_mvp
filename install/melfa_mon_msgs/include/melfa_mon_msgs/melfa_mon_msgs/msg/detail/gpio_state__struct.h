// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_mon_msgs:msg/GpioState.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__STRUCT_H_
#define MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'interface_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GpioState in the package melfa_mon_msgs.
/**
  * COPYRIGHT (C) 2025 Mitsubishi Electric Corporation
 */
typedef struct melfa_mon_msgs__msg__GpioState
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
  /// IO INTERFACE
  rosidl_runtime_c__String interface_name;
  /// Input Address
  uint16_t input_addrr;
  /// Output Address
  uint16_t output_addrr;
  /// INPUT DATA
  uint32_t input_data;
  /// OUTPUT DATA
  uint32_t output_data;
} melfa_mon_msgs__msg__GpioState;

// Struct for a sequence of melfa_mon_msgs__msg__GpioState.
typedef struct melfa_mon_msgs__msg__GpioState__Sequence
{
  melfa_mon_msgs__msg__GpioState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_mon_msgs__msg__GpioState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MON_MSGS__MSG__DETAIL__GPIO_STATE__STRUCT_H_
