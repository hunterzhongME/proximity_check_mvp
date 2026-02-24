// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from melfa_mon_msgs:srv/GpioConfigure.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_H_
#define MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GpioConfigure in the package melfa_mon_msgs.
typedef struct melfa_mon_msgs__srv__GpioConfigure_Request
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
  /// Fields Required
  uint16_t input_addrr;
  uint16_t output_addrr;
} melfa_mon_msgs__srv__GpioConfigure_Request;

// Struct for a sequence of melfa_mon_msgs__srv__GpioConfigure_Request.
typedef struct melfa_mon_msgs__srv__GpioConfigure_Request__Sequence
{
  melfa_mon_msgs__srv__GpioConfigure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_mon_msgs__srv__GpioConfigure_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GpioConfigure in the package melfa_mon_msgs.
typedef struct melfa_mon_msgs__srv__GpioConfigure_Response
{
  bool success;
} melfa_mon_msgs__srv__GpioConfigure_Response;

// Struct for a sequence of melfa_mon_msgs__srv__GpioConfigure_Response.
typedef struct melfa_mon_msgs__srv__GpioConfigure_Response__Sequence
{
  melfa_mon_msgs__srv__GpioConfigure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} melfa_mon_msgs__srv__GpioConfigure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MON_MSGS__SRV__DETAIL__GPIO_CONFIGURE__STRUCT_H_
