// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from melfa_mon_msgs:srv/ModeConfigure.idl
// generated code does not contain a copyright notice
#include "melfa_mon_msgs/srv/detail/mode_configure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
melfa_mon_msgs__srv__ModeConfigure_Request__init(melfa_mon_msgs__srv__ModeConfigure_Request * msg)
{
  if (!msg) {
    return false;
  }
  // general1_io_interface
  // general2_io_interface
  // user1_io_interface
  // user2_io_interface
  // user3_io_interface
  // user4_io_interface
  // user5_io_interface
  // user6_io_interface
  // user7_io_interface
  // user8_io_interface
  return true;
}

void
melfa_mon_msgs__srv__ModeConfigure_Request__fini(melfa_mon_msgs__srv__ModeConfigure_Request * msg)
{
  if (!msg) {
    return;
  }
  // general1_io_interface
  // general2_io_interface
  // user1_io_interface
  // user2_io_interface
  // user3_io_interface
  // user4_io_interface
  // user5_io_interface
  // user6_io_interface
  // user7_io_interface
  // user8_io_interface
}

bool
melfa_mon_msgs__srv__ModeConfigure_Request__are_equal(const melfa_mon_msgs__srv__ModeConfigure_Request * lhs, const melfa_mon_msgs__srv__ModeConfigure_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // general1_io_interface
  if (lhs->general1_io_interface != rhs->general1_io_interface) {
    return false;
  }
  // general2_io_interface
  if (lhs->general2_io_interface != rhs->general2_io_interface) {
    return false;
  }
  // user1_io_interface
  if (lhs->user1_io_interface != rhs->user1_io_interface) {
    return false;
  }
  // user2_io_interface
  if (lhs->user2_io_interface != rhs->user2_io_interface) {
    return false;
  }
  // user3_io_interface
  if (lhs->user3_io_interface != rhs->user3_io_interface) {
    return false;
  }
  // user4_io_interface
  if (lhs->user4_io_interface != rhs->user4_io_interface) {
    return false;
  }
  // user5_io_interface
  if (lhs->user5_io_interface != rhs->user5_io_interface) {
    return false;
  }
  // user6_io_interface
  if (lhs->user6_io_interface != rhs->user6_io_interface) {
    return false;
  }
  // user7_io_interface
  if (lhs->user7_io_interface != rhs->user7_io_interface) {
    return false;
  }
  // user8_io_interface
  if (lhs->user8_io_interface != rhs->user8_io_interface) {
    return false;
  }
  return true;
}

bool
melfa_mon_msgs__srv__ModeConfigure_Request__copy(
  const melfa_mon_msgs__srv__ModeConfigure_Request * input,
  melfa_mon_msgs__srv__ModeConfigure_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // general1_io_interface
  output->general1_io_interface = input->general1_io_interface;
  // general2_io_interface
  output->general2_io_interface = input->general2_io_interface;
  // user1_io_interface
  output->user1_io_interface = input->user1_io_interface;
  // user2_io_interface
  output->user2_io_interface = input->user2_io_interface;
  // user3_io_interface
  output->user3_io_interface = input->user3_io_interface;
  // user4_io_interface
  output->user4_io_interface = input->user4_io_interface;
  // user5_io_interface
  output->user5_io_interface = input->user5_io_interface;
  // user6_io_interface
  output->user6_io_interface = input->user6_io_interface;
  // user7_io_interface
  output->user7_io_interface = input->user7_io_interface;
  // user8_io_interface
  output->user8_io_interface = input->user8_io_interface;
  return true;
}

melfa_mon_msgs__srv__ModeConfigure_Request *
melfa_mon_msgs__srv__ModeConfigure_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__srv__ModeConfigure_Request * msg = (melfa_mon_msgs__srv__ModeConfigure_Request *)allocator.allocate(sizeof(melfa_mon_msgs__srv__ModeConfigure_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_mon_msgs__srv__ModeConfigure_Request));
  bool success = melfa_mon_msgs__srv__ModeConfigure_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_mon_msgs__srv__ModeConfigure_Request__destroy(melfa_mon_msgs__srv__ModeConfigure_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_mon_msgs__srv__ModeConfigure_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__init(melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__srv__ModeConfigure_Request * data = NULL;

  if (size) {
    data = (melfa_mon_msgs__srv__ModeConfigure_Request *)allocator.zero_allocate(size, sizeof(melfa_mon_msgs__srv__ModeConfigure_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_mon_msgs__srv__ModeConfigure_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_mon_msgs__srv__ModeConfigure_Request__fini(&data[i - 1]);
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
melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__fini(melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * array)
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
      melfa_mon_msgs__srv__ModeConfigure_Request__fini(&array->data[i]);
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

melfa_mon_msgs__srv__ModeConfigure_Request__Sequence *
melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * array = (melfa_mon_msgs__srv__ModeConfigure_Request__Sequence *)allocator.allocate(sizeof(melfa_mon_msgs__srv__ModeConfigure_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__destroy(melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__are_equal(const melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * lhs, const melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_mon_msgs__srv__ModeConfigure_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_mon_msgs__srv__ModeConfigure_Request__Sequence__copy(
  const melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * input,
  melfa_mon_msgs__srv__ModeConfigure_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_mon_msgs__srv__ModeConfigure_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_mon_msgs__srv__ModeConfigure_Request * data =
      (melfa_mon_msgs__srv__ModeConfigure_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_mon_msgs__srv__ModeConfigure_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_mon_msgs__srv__ModeConfigure_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_mon_msgs__srv__ModeConfigure_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
melfa_mon_msgs__srv__ModeConfigure_Response__init(melfa_mon_msgs__srv__ModeConfigure_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
melfa_mon_msgs__srv__ModeConfigure_Response__fini(melfa_mon_msgs__srv__ModeConfigure_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
melfa_mon_msgs__srv__ModeConfigure_Response__are_equal(const melfa_mon_msgs__srv__ModeConfigure_Response * lhs, const melfa_mon_msgs__srv__ModeConfigure_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
melfa_mon_msgs__srv__ModeConfigure_Response__copy(
  const melfa_mon_msgs__srv__ModeConfigure_Response * input,
  melfa_mon_msgs__srv__ModeConfigure_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

melfa_mon_msgs__srv__ModeConfigure_Response *
melfa_mon_msgs__srv__ModeConfigure_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__srv__ModeConfigure_Response * msg = (melfa_mon_msgs__srv__ModeConfigure_Response *)allocator.allocate(sizeof(melfa_mon_msgs__srv__ModeConfigure_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(melfa_mon_msgs__srv__ModeConfigure_Response));
  bool success = melfa_mon_msgs__srv__ModeConfigure_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
melfa_mon_msgs__srv__ModeConfigure_Response__destroy(melfa_mon_msgs__srv__ModeConfigure_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    melfa_mon_msgs__srv__ModeConfigure_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__init(melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__srv__ModeConfigure_Response * data = NULL;

  if (size) {
    data = (melfa_mon_msgs__srv__ModeConfigure_Response *)allocator.zero_allocate(size, sizeof(melfa_mon_msgs__srv__ModeConfigure_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = melfa_mon_msgs__srv__ModeConfigure_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        melfa_mon_msgs__srv__ModeConfigure_Response__fini(&data[i - 1]);
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
melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__fini(melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * array)
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
      melfa_mon_msgs__srv__ModeConfigure_Response__fini(&array->data[i]);
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

melfa_mon_msgs__srv__ModeConfigure_Response__Sequence *
melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * array = (melfa_mon_msgs__srv__ModeConfigure_Response__Sequence *)allocator.allocate(sizeof(melfa_mon_msgs__srv__ModeConfigure_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__destroy(melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__are_equal(const melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * lhs, const melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!melfa_mon_msgs__srv__ModeConfigure_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
melfa_mon_msgs__srv__ModeConfigure_Response__Sequence__copy(
  const melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * input,
  melfa_mon_msgs__srv__ModeConfigure_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(melfa_mon_msgs__srv__ModeConfigure_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    melfa_mon_msgs__srv__ModeConfigure_Response * data =
      (melfa_mon_msgs__srv__ModeConfigure_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!melfa_mon_msgs__srv__ModeConfigure_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          melfa_mon_msgs__srv__ModeConfigure_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!melfa_mon_msgs__srv__ModeConfigure_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
