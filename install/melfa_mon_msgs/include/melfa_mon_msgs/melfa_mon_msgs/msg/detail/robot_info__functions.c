// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from melfa_mon_msgs:msg/RobotInfo.idl
// generated code does not contain a copyright notice
#include "melfa_mon_msgs/msg/detail/robot_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `program_number`
#include "rosidl_runtime_c/string_functions.h"

bool
melfa_mon_msgs__msg__RobotInfo__init(melfa_mon_msgs__msg__RobotInfo * msg)
{
  if (!msg) {
    return false;
  }
  // tool_point_speed_feedback
  // remaining_distance_feedback
  // tool_point_speed_command
  // remaining_distance_command
  // gap_of_command_and_feedback
  // transport_factor_command
  // acceleration_state_command
  // step_number
  // program_number
  if (!rosidl_runtime_c__String__init(&msg->program_number)) {
    melfa_mon_msgs__msg__RobotInfo__fini(msg);
    return false;
  }
  // controller_temperature
  // monitoring_counter
  return true;
}

void
melfa_mon_msgs__msg__RobotInfo__fini(melfa_mon_msgs__msg__RobotInfo * msg)
{
  if (!msg) {
    return;
  }
  // tool_point_speed_feedback
  // remaining_distance_feedback
  // tool_point_speed_command
  // remaining_distance_command
  // gap_of_command_and_feedback
  // transport_factor_command
  // acceleration_state_command
  // step_number
  // program_number
  rosidl_runtime_c__String__fini(&msg->program_number);
  // controller_temperature
  // monitoring_counter
}

bool
melfa_mon_msgs__msg__RobotInfo__are_equal(const melfa_mon_msgs__msg__RobotInfo * lhs, const melfa_mon_msgs__msg__RobotInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tool_point_speed_feedback
  if (lhs->tool_point_speed_feedback != rhs->tool_point_speed_feedback) {
    return false;
  }
  // remaining_distance_feedback
  if (lhs->remaining_distance_feedback != rhs->remaining_distance_feedback) {
    return false;
  }
  // tool_point_speed_command
  if (lhs->tool_point_speed_command != rhs->tool_point_speed_command) {
    return false;
  }
  // remaining_distance_command
  if (lhs->remaining_distance_command != rhs->remaining_distance_command) {
    return false;
  }
  // gap_of_command_and_feedback
  if (lhs->gap_of_command_and_feedback != rhs->gap_of_command_and_feedback) {
    return false;
  }
  // transport_factor_command
  if (lhs->transport_factor_command != rhs->transport_factor_command) {
    return false;
  }
  // acceleration_state_command
  if (lhs->acceleration_state_command != rhs->acceleration_state_command) {
    return false;
  }
  // step_number
  if (lhs->step_number != rhs->step_number) {
    return false;
  }
  // program_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->program_number), &(rhs->program_number)))
  {
    return false;
  }
  // controller_temperature
  if (lhs->controller_temperature != rhs->controller_temperature) {
    return false;
  }
  // monitoring_counter
  if (lhs->monitoring_counter != rhs->monitoring_counter) {
    return false;
  }
  return true;
}

bool
melfa_mon_msgs__msg__RobotInfo__copy(
  const melfa_mon_msgs__msg__RobotInfo * input,
  melfa_mon_msgs__msg__RobotInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // tool_point_speed_feedback
  output->tool_point_speed_feedback = input->tool_point_speed_feedback;
  // remaining_distance_feedback
  output->remaining_distance_feedback = input->remaining_distance_feedback;
  // tool_point_speed_command
  output->tool_point_speed_command = input->tool_point_speed_command;
  // remaining_distance_command
  output->remaining_distance_command = input->remaining_distance_command;
  // gap_of_command_and_feedback
  output->gap_of_command_and_feedback = input->gap_of_command_and_feedback;
  // transport_factor_command
  output->transport_factor_command = input->transport_factor_command;
  // acceleration_state_command
  output->acceleration_state_command = input->acceleration_state_command;
  // step_number
  output->step_number = input->step_number;
  // program_number
  if (!rosidl_runtime_c__String__copy(
      &(input->program_number), &(output->program_number)))
  {
    return false;
  }
  // controller_temperature
  output->controller_temperature = input->controller_temperature;
  // monitoring_counter
  output->monitoring_counter = input->monitoring_counter;
  return true;
}

melfa_mon_msgs__msg__RobotInfo *
melfa_mon_msgs__msg__RobotInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__msg__RobotInfo * msg = (melfa_mon_msgs__msg__RobotInfo *)allocator.allocate(sizeof(melfa_mon_msgs__msg__RobotInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_mon_msgs__msg__RobotInfo));
  bool success = melfa_mon_msgs__msg__RobotInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_mon_msgs__msg__RobotInfo__destroy(melfa_mon_msgs__msg__RobotInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_mon_msgs__msg__RobotInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_mon_msgs__msg__RobotInfo__Sequence__init(melfa_mon_msgs__msg__RobotInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__msg__RobotInfo * data = NULL;

  if (size) {
    data = (melfa_mon_msgs__msg__RobotInfo *)allocator.zero_allocate(size, sizeof(melfa_mon_msgs__msg__RobotInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_mon_msgs__msg__RobotInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_mon_msgs__msg__RobotInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
melfa_mon_msgs__msg__RobotInfo__Sequence__fini(melfa_mon_msgs__msg__RobotInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      melfa_mon_msgs__msg__RobotInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

melfa_mon_msgs__msg__RobotInfo__Sequence *
melfa_mon_msgs__msg__RobotInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__msg__RobotInfo__Sequence * array = (melfa_mon_msgs__msg__RobotInfo__Sequence *)allocator.allocate(sizeof(melfa_mon_msgs__msg__RobotInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_mon_msgs__msg__RobotInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_mon_msgs__msg__RobotInfo__Sequence__destroy(melfa_mon_msgs__msg__RobotInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_mon_msgs__msg__RobotInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_mon_msgs__msg__RobotInfo__Sequence__are_equal(const melfa_mon_msgs__msg__RobotInfo__Sequence * lhs, const melfa_mon_msgs__msg__RobotInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_mon_msgs__msg__RobotInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_mon_msgs__msg__RobotInfo__Sequence__copy(
  const melfa_mon_msgs__msg__RobotInfo__Sequence * input,
  melfa_mon_msgs__msg__RobotInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_mon_msgs__msg__RobotInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_mon_msgs__msg__RobotInfo * data =
      (melfa_mon_msgs__msg__RobotInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_mon_msgs__msg__RobotInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_mon_msgs__msg__RobotInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_mon_msgs__msg__RobotInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
