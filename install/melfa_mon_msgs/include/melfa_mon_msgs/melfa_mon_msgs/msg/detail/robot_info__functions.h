// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__FUNCTIONS_H_
#define MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "melfa_mon_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "melfa_mon_msgs/msg/detail/robot_info__struct.h"

/// Initialize msg/RobotInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * melfa_mon_msgs__msg__RobotInfo
 * )) before or use
 * melfa_mon_msgs__msg__RobotInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
bool
melfa_mon_msgs__msg__RobotInfo__init(melfa_mon_msgs__msg__RobotInfo * msg);

/// Finalize msg/RobotInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
void
melfa_mon_msgs__msg__RobotInfo__fini(melfa_mon_msgs__msg__RobotInfo * msg);

/// Create msg/RobotInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * melfa_mon_msgs__msg__RobotInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
melfa_mon_msgs__msg__RobotInfo *
melfa_mon_msgs__msg__RobotInfo__create();

/// Destroy msg/RobotInfo message.
/**
 * It calls
 * melfa_mon_msgs__msg__RobotInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
void
melfa_mon_msgs__msg__RobotInfo__destroy(melfa_mon_msgs__msg__RobotInfo * msg);

/// Check for msg/RobotInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
bool
melfa_mon_msgs__msg__RobotInfo__are_equal(const melfa_mon_msgs__msg__RobotInfo * lhs, const melfa_mon_msgs__msg__RobotInfo * rhs);

/// Copy a msg/RobotInfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
bool
melfa_mon_msgs__msg__RobotInfo__copy(
  const melfa_mon_msgs__msg__RobotInfo * input,
  melfa_mon_msgs__msg__RobotInfo * output);

/// Initialize array of msg/RobotInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * melfa_mon_msgs__msg__RobotInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
bool
melfa_mon_msgs__msg__RobotInfo__Sequence__init(melfa_mon_msgs__msg__RobotInfo__Sequence * array, size_t size);

/// Finalize array of msg/RobotInfo messages.
/**
 * It calls
 * melfa_mon_msgs__msg__RobotInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
void
melfa_mon_msgs__msg__RobotInfo__Sequence__fini(melfa_mon_msgs__msg__RobotInfo__Sequence * array);

/// Create array of msg/RobotInfo messages.
/**
 * It allocates the memory for the array and calls
 * melfa_mon_msgs__msg__RobotInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
melfa_mon_msgs__msg__RobotInfo__Sequence *
melfa_mon_msgs__msg__RobotInfo__Sequence__create(size_t size);

/// Destroy array of msg/RobotInfo messages.
/**
 * It calls
 * melfa_mon_msgs__msg__RobotInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
void
melfa_mon_msgs__msg__RobotInfo__Sequence__destroy(melfa_mon_msgs__msg__RobotInfo__Sequence * array);

/// Check for msg/RobotInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
bool
melfa_mon_msgs__msg__RobotInfo__Sequence__are_equal(const melfa_mon_msgs__msg__RobotInfo__Sequence * lhs, const melfa_mon_msgs__msg__RobotInfo__Sequence * rhs);

/// Copy an array of msg/RobotInfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_melfa_mon_msgs
bool
melfa_mon_msgs__msg__RobotInfo__Sequence__copy(
  const melfa_mon_msgs__msg__RobotInfo__Sequence * input,
  melfa_mon_msgs__msg__RobotInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MELFA_MON_MSGS__MSG__DETAIL__ROBOT_INFO__FUNCTIONS_H_
