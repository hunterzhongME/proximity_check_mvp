// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from melfa_mon_msgs:msg/GpioCommand.idl
// generated code does not contain a copyright notice
#include "melfa_mon_msgs/msg/detail/gpio_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
melfa_mon_msgs__msg__GpioCommand__init(melfa_mon_msgs__msg__GpioCommand * msg)
{
  if (!msg) {
    return false;
  }
  // input_addrr
  // output_addrr
  return true;
}

void
melfa_mon_msgs__msg__GpioCommand__fini(melfa_mon_msgs__msg__GpioCommand * msg)
{
  if (!msg) {
    return;
  }
  // input_addrr
  // output_addrr
}

bool
melfa_mon_msgs__msg__GpioCommand__are_equal(const melfa_mon_msgs__msg__GpioCommand * lhs, const melfa_mon_msgs__msg__GpioCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_addrr
  if (lhs->input_addrr != rhs->input_addrr) {
    return false;
  }
  // output_addrr
  if (lhs->output_addrr != rhs->output_addrr) {
    return false;
  }
  return true;
}

bool
melfa_mon_msgs__msg__GpioCommand__copy(
  const melfa_mon_msgs__msg__GpioCommand * input,
  melfa_mon_msgs__msg__GpioCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // input_addrr
  output->input_addrr = input->input_addrr;
  // output_addrr
  output->output_addrr = input->output_addrr;
  return true;
}

melfa_mon_msgs__msg__GpioCommand *
melfa_mon_msgs__msg__GpioCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__msg__GpioCommand * msg = (melfa_mon_msgs__msg__GpioCommand *)allocator.allocate(sizeof(melfa_mon_msgs__msg__GpioCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_mon_msgs__msg__GpioCommand));
  bool success = melfa_mon_msgs__msg__GpioCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_mon_msgs__msg__GpioCommand__destroy(melfa_mon_msgs__msg__GpioCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_mon_msgs__msg__GpioCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_mon_msgs__msg__GpioCommand__Sequence__init(melfa_mon_msgs__msg__GpioCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__msg__GpioCommand * data = NULL;

  if (size) {
    data = (melfa_mon_msgs__msg__GpioCommand *)allocator.zero_allocate(size, sizeof(melfa_mon_msgs__msg__GpioCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_mon_msgs__msg__GpioCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_mon_msgs__msg__GpioCommand__fini(&data[i - 1]);
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
melfa_mon_msgs__msg__GpioCommand__Sequence__fini(melfa_mon_msgs__msg__GpioCommand__Sequence * array)
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
      melfa_mon_msgs__msg__GpioCommand__fini(&array->data[i]);
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

melfa_mon_msgs__msg__GpioCommand__Sequence *
melfa_mon_msgs__msg__GpioCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__msg__GpioCommand__Sequence * array = (melfa_mon_msgs__msg__GpioCommand__Sequence *)allocator.allocate(sizeof(melfa_mon_msgs__msg__GpioCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_mon_msgs__msg__GpioCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_mon_msgs__msg__GpioCommand__Sequence__destroy(melfa_mon_msgs__msg__GpioCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_mon_msgs__msg__GpioCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_mon_msgs__msg__GpioCommand__Sequence__are_equal(const melfa_mon_msgs__msg__GpioCommand__Sequence * lhs, const melfa_mon_msgs__msg__GpioCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_mon_msgs__msg__GpioCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_mon_msgs__msg__GpioCommand__Sequence__copy(
  const melfa_mon_msgs__msg__GpioCommand__Sequence * input,
  melfa_mon_msgs__msg__GpioCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_mon_msgs__msg__GpioCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_mon_msgs__msg__GpioCommand * data =
      (melfa_mon_msgs__msg__GpioCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_mon_msgs__msg__GpioCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_mon_msgs__msg__GpioCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_mon_msgs__msg__GpioCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
