// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vla:action/ActionVLA.idl
// generated code does not contain a copyright notice
#include "vla/action/detail/action_vla__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `req_id`
// Member `object`
// Member `target_location`
#include "rosidl_runtime_c/string_functions.h"

bool
vla__action__ActionVLA_Goal__init(vla__action__ActionVLA_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // req_id
  if (!rosidl_runtime_c__String__init(&msg->req_id)) {
    vla__action__ActionVLA_Goal__fini(msg);
    return false;
  }
  // gripper
  // object
  if (!rosidl_runtime_c__String__init(&msg->object)) {
    vla__action__ActionVLA_Goal__fini(msg);
    return false;
  }
  // target_type
  // target_location
  if (!rosidl_runtime_c__String__init(&msg->target_location)) {
    vla__action__ActionVLA_Goal__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_Goal__fini(vla__action__ActionVLA_Goal * msg)
{
  if (!msg) {
    return;
  }
  // req_id
  rosidl_runtime_c__String__fini(&msg->req_id);
  // gripper
  // object
  rosidl_runtime_c__String__fini(&msg->object);
  // target_type
  // target_location
  rosidl_runtime_c__String__fini(&msg->target_location);
}

bool
vla__action__ActionVLA_Goal__are_equal(const vla__action__ActionVLA_Goal * lhs, const vla__action__ActionVLA_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // req_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->req_id), &(rhs->req_id)))
  {
    return false;
  }
  // gripper
  if (lhs->gripper != rhs->gripper) {
    return false;
  }
  // object
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object), &(rhs->object)))
  {
    return false;
  }
  // target_type
  if (lhs->target_type != rhs->target_type) {
    return false;
  }
  // target_location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_location), &(rhs->target_location)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_Goal__copy(
  const vla__action__ActionVLA_Goal * input,
  vla__action__ActionVLA_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // req_id
  if (!rosidl_runtime_c__String__copy(
      &(input->req_id), &(output->req_id)))
  {
    return false;
  }
  // gripper
  output->gripper = input->gripper;
  // object
  if (!rosidl_runtime_c__String__copy(
      &(input->object), &(output->object)))
  {
    return false;
  }
  // target_type
  output->target_type = input->target_type;
  // target_location
  if (!rosidl_runtime_c__String__copy(
      &(input->target_location), &(output->target_location)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_Goal *
vla__action__ActionVLA_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Goal * msg = (vla__action__ActionVLA_Goal *)allocator.allocate(sizeof(vla__action__ActionVLA_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_Goal));
  bool success = vla__action__ActionVLA_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_Goal__destroy(vla__action__ActionVLA_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_Goal__Sequence__init(vla__action__ActionVLA_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Goal * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_Goal *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_Goal__fini(&data[i - 1]);
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
vla__action__ActionVLA_Goal__Sequence__fini(vla__action__ActionVLA_Goal__Sequence * array)
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
      vla__action__ActionVLA_Goal__fini(&array->data[i]);
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

vla__action__ActionVLA_Goal__Sequence *
vla__action__ActionVLA_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Goal__Sequence * array = (vla__action__ActionVLA_Goal__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_Goal__Sequence__destroy(vla__action__ActionVLA_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_Goal__Sequence__are_equal(const vla__action__ActionVLA_Goal__Sequence * lhs, const vla__action__ActionVLA_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_Goal__Sequence__copy(
  const vla__action__ActionVLA_Goal__Sequence * input,
  vla__action__ActionVLA_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_Goal * data =
      (vla__action__ActionVLA_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
vla__action__ActionVLA_Result__init(vla__action__ActionVLA_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_code
  // result_msg
  if (!rosidl_runtime_c__String__init(&msg->result_msg)) {
    vla__action__ActionVLA_Result__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_Result__fini(vla__action__ActionVLA_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_code
  // result_msg
  rosidl_runtime_c__String__fini(&msg->result_msg);
}

bool
vla__action__ActionVLA_Result__are_equal(const vla__action__ActionVLA_Result * lhs, const vla__action__ActionVLA_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_code
  if (lhs->result_code != rhs->result_code) {
    return false;
  }
  // result_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_msg), &(rhs->result_msg)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_Result__copy(
  const vla__action__ActionVLA_Result * input,
  vla__action__ActionVLA_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_code
  output->result_code = input->result_code;
  // result_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->result_msg), &(output->result_msg)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_Result *
vla__action__ActionVLA_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Result * msg = (vla__action__ActionVLA_Result *)allocator.allocate(sizeof(vla__action__ActionVLA_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_Result));
  bool success = vla__action__ActionVLA_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_Result__destroy(vla__action__ActionVLA_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_Result__Sequence__init(vla__action__ActionVLA_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Result * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_Result *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_Result__fini(&data[i - 1]);
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
vla__action__ActionVLA_Result__Sequence__fini(vla__action__ActionVLA_Result__Sequence * array)
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
      vla__action__ActionVLA_Result__fini(&array->data[i]);
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

vla__action__ActionVLA_Result__Sequence *
vla__action__ActionVLA_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Result__Sequence * array = (vla__action__ActionVLA_Result__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_Result__Sequence__destroy(vla__action__ActionVLA_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_Result__Sequence__are_equal(const vla__action__ActionVLA_Result__Sequence * lhs, const vla__action__ActionVLA_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_Result__Sequence__copy(
  const vla__action__ActionVLA_Result__Sequence * input,
  vla__action__ActionVLA_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_Result * data =
      (vla__action__ActionVLA_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
vla__action__ActionVLA_Feedback__init(vla__action__ActionVLA_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  // feedback_msg
  if (!rosidl_runtime_c__String__init(&msg->feedback_msg)) {
    vla__action__ActionVLA_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_Feedback__fini(vla__action__ActionVLA_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
  // feedback_msg
  rosidl_runtime_c__String__fini(&msg->feedback_msg);
}

bool
vla__action__ActionVLA_Feedback__are_equal(const vla__action__ActionVLA_Feedback * lhs, const vla__action__ActionVLA_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_msg), &(rhs->feedback_msg)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_Feedback__copy(
  const vla__action__ActionVLA_Feedback * input,
  vla__action__ActionVLA_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  output->progress = input->progress;
  // feedback_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_msg), &(output->feedback_msg)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_Feedback *
vla__action__ActionVLA_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Feedback * msg = (vla__action__ActionVLA_Feedback *)allocator.allocate(sizeof(vla__action__ActionVLA_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_Feedback));
  bool success = vla__action__ActionVLA_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_Feedback__destroy(vla__action__ActionVLA_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_Feedback__Sequence__init(vla__action__ActionVLA_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Feedback * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_Feedback *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_Feedback__fini(&data[i - 1]);
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
vla__action__ActionVLA_Feedback__Sequence__fini(vla__action__ActionVLA_Feedback__Sequence * array)
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
      vla__action__ActionVLA_Feedback__fini(&array->data[i]);
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

vla__action__ActionVLA_Feedback__Sequence *
vla__action__ActionVLA_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_Feedback__Sequence * array = (vla__action__ActionVLA_Feedback__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_Feedback__Sequence__destroy(vla__action__ActionVLA_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_Feedback__Sequence__are_equal(const vla__action__ActionVLA_Feedback__Sequence * lhs, const vla__action__ActionVLA_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_Feedback__Sequence__copy(
  const vla__action__ActionVLA_Feedback__Sequence * input,
  vla__action__ActionVLA_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_Feedback * data =
      (vla__action__ActionVLA_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "vla/action/detail/action_vla__functions.h"

bool
vla__action__ActionVLA_SendGoal_Request__init(vla__action__ActionVLA_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    vla__action__ActionVLA_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!vla__action__ActionVLA_Goal__init(&msg->goal)) {
    vla__action__ActionVLA_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_SendGoal_Request__fini(vla__action__ActionVLA_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  vla__action__ActionVLA_Goal__fini(&msg->goal);
}

bool
vla__action__ActionVLA_SendGoal_Request__are_equal(const vla__action__ActionVLA_SendGoal_Request * lhs, const vla__action__ActionVLA_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!vla__action__ActionVLA_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_SendGoal_Request__copy(
  const vla__action__ActionVLA_SendGoal_Request * input,
  vla__action__ActionVLA_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!vla__action__ActionVLA_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_SendGoal_Request *
vla__action__ActionVLA_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Request * msg = (vla__action__ActionVLA_SendGoal_Request *)allocator.allocate(sizeof(vla__action__ActionVLA_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_SendGoal_Request));
  bool success = vla__action__ActionVLA_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_SendGoal_Request__destroy(vla__action__ActionVLA_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_SendGoal_Request__Sequence__init(vla__action__ActionVLA_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Request * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_SendGoal_Request *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_SendGoal_Request__fini(&data[i - 1]);
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
vla__action__ActionVLA_SendGoal_Request__Sequence__fini(vla__action__ActionVLA_SendGoal_Request__Sequence * array)
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
      vla__action__ActionVLA_SendGoal_Request__fini(&array->data[i]);
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

vla__action__ActionVLA_SendGoal_Request__Sequence *
vla__action__ActionVLA_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Request__Sequence * array = (vla__action__ActionVLA_SendGoal_Request__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_SendGoal_Request__Sequence__destroy(vla__action__ActionVLA_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_SendGoal_Request__Sequence__are_equal(const vla__action__ActionVLA_SendGoal_Request__Sequence * lhs, const vla__action__ActionVLA_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_SendGoal_Request__Sequence__copy(
  const vla__action__ActionVLA_SendGoal_Request__Sequence * input,
  vla__action__ActionVLA_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_SendGoal_Request * data =
      (vla__action__ActionVLA_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
vla__action__ActionVLA_SendGoal_Response__init(vla__action__ActionVLA_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    vla__action__ActionVLA_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_SendGoal_Response__fini(vla__action__ActionVLA_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
vla__action__ActionVLA_SendGoal_Response__are_equal(const vla__action__ActionVLA_SendGoal_Response * lhs, const vla__action__ActionVLA_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_SendGoal_Response__copy(
  const vla__action__ActionVLA_SendGoal_Response * input,
  vla__action__ActionVLA_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_SendGoal_Response *
vla__action__ActionVLA_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Response * msg = (vla__action__ActionVLA_SendGoal_Response *)allocator.allocate(sizeof(vla__action__ActionVLA_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_SendGoal_Response));
  bool success = vla__action__ActionVLA_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_SendGoal_Response__destroy(vla__action__ActionVLA_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_SendGoal_Response__Sequence__init(vla__action__ActionVLA_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Response * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_SendGoal_Response *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_SendGoal_Response__fini(&data[i - 1]);
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
vla__action__ActionVLA_SendGoal_Response__Sequence__fini(vla__action__ActionVLA_SendGoal_Response__Sequence * array)
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
      vla__action__ActionVLA_SendGoal_Response__fini(&array->data[i]);
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

vla__action__ActionVLA_SendGoal_Response__Sequence *
vla__action__ActionVLA_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Response__Sequence * array = (vla__action__ActionVLA_SendGoal_Response__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_SendGoal_Response__Sequence__destroy(vla__action__ActionVLA_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_SendGoal_Response__Sequence__are_equal(const vla__action__ActionVLA_SendGoal_Response__Sequence * lhs, const vla__action__ActionVLA_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_SendGoal_Response__Sequence__copy(
  const vla__action__ActionVLA_SendGoal_Response__Sequence * input,
  vla__action__ActionVLA_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_SendGoal_Response * data =
      (vla__action__ActionVLA_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "vla/action/detail/action_vla__functions.h"

bool
vla__action__ActionVLA_SendGoal_Event__init(vla__action__ActionVLA_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    vla__action__ActionVLA_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!vla__action__ActionVLA_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    vla__action__ActionVLA_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!vla__action__ActionVLA_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    vla__action__ActionVLA_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_SendGoal_Event__fini(vla__action__ActionVLA_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  vla__action__ActionVLA_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  vla__action__ActionVLA_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
vla__action__ActionVLA_SendGoal_Event__are_equal(const vla__action__ActionVLA_SendGoal_Event * lhs, const vla__action__ActionVLA_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!vla__action__ActionVLA_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!vla__action__ActionVLA_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_SendGoal_Event__copy(
  const vla__action__ActionVLA_SendGoal_Event * input,
  vla__action__ActionVLA_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!vla__action__ActionVLA_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!vla__action__ActionVLA_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_SendGoal_Event *
vla__action__ActionVLA_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Event * msg = (vla__action__ActionVLA_SendGoal_Event *)allocator.allocate(sizeof(vla__action__ActionVLA_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_SendGoal_Event));
  bool success = vla__action__ActionVLA_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_SendGoal_Event__destroy(vla__action__ActionVLA_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_SendGoal_Event__Sequence__init(vla__action__ActionVLA_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Event * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_SendGoal_Event *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_SendGoal_Event__fini(&data[i - 1]);
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
vla__action__ActionVLA_SendGoal_Event__Sequence__fini(vla__action__ActionVLA_SendGoal_Event__Sequence * array)
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
      vla__action__ActionVLA_SendGoal_Event__fini(&array->data[i]);
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

vla__action__ActionVLA_SendGoal_Event__Sequence *
vla__action__ActionVLA_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_SendGoal_Event__Sequence * array = (vla__action__ActionVLA_SendGoal_Event__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_SendGoal_Event__Sequence__destroy(vla__action__ActionVLA_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_SendGoal_Event__Sequence__are_equal(const vla__action__ActionVLA_SendGoal_Event__Sequence * lhs, const vla__action__ActionVLA_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_SendGoal_Event__Sequence__copy(
  const vla__action__ActionVLA_SendGoal_Event__Sequence * input,
  vla__action__ActionVLA_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_SendGoal_Event * data =
      (vla__action__ActionVLA_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
vla__action__ActionVLA_GetResult_Request__init(vla__action__ActionVLA_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    vla__action__ActionVLA_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_GetResult_Request__fini(vla__action__ActionVLA_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
vla__action__ActionVLA_GetResult_Request__are_equal(const vla__action__ActionVLA_GetResult_Request * lhs, const vla__action__ActionVLA_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_GetResult_Request__copy(
  const vla__action__ActionVLA_GetResult_Request * input,
  vla__action__ActionVLA_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_GetResult_Request *
vla__action__ActionVLA_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Request * msg = (vla__action__ActionVLA_GetResult_Request *)allocator.allocate(sizeof(vla__action__ActionVLA_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_GetResult_Request));
  bool success = vla__action__ActionVLA_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_GetResult_Request__destroy(vla__action__ActionVLA_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_GetResult_Request__Sequence__init(vla__action__ActionVLA_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Request * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_GetResult_Request *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_GetResult_Request__fini(&data[i - 1]);
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
vla__action__ActionVLA_GetResult_Request__Sequence__fini(vla__action__ActionVLA_GetResult_Request__Sequence * array)
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
      vla__action__ActionVLA_GetResult_Request__fini(&array->data[i]);
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

vla__action__ActionVLA_GetResult_Request__Sequence *
vla__action__ActionVLA_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Request__Sequence * array = (vla__action__ActionVLA_GetResult_Request__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_GetResult_Request__Sequence__destroy(vla__action__ActionVLA_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_GetResult_Request__Sequence__are_equal(const vla__action__ActionVLA_GetResult_Request__Sequence * lhs, const vla__action__ActionVLA_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_GetResult_Request__Sequence__copy(
  const vla__action__ActionVLA_GetResult_Request__Sequence * input,
  vla__action__ActionVLA_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_GetResult_Request * data =
      (vla__action__ActionVLA_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "vla/action/detail/action_vla__functions.h"

bool
vla__action__ActionVLA_GetResult_Response__init(vla__action__ActionVLA_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!vla__action__ActionVLA_Result__init(&msg->result)) {
    vla__action__ActionVLA_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_GetResult_Response__fini(vla__action__ActionVLA_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  vla__action__ActionVLA_Result__fini(&msg->result);
}

bool
vla__action__ActionVLA_GetResult_Response__are_equal(const vla__action__ActionVLA_GetResult_Response * lhs, const vla__action__ActionVLA_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!vla__action__ActionVLA_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_GetResult_Response__copy(
  const vla__action__ActionVLA_GetResult_Response * input,
  vla__action__ActionVLA_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!vla__action__ActionVLA_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_GetResult_Response *
vla__action__ActionVLA_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Response * msg = (vla__action__ActionVLA_GetResult_Response *)allocator.allocate(sizeof(vla__action__ActionVLA_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_GetResult_Response));
  bool success = vla__action__ActionVLA_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_GetResult_Response__destroy(vla__action__ActionVLA_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_GetResult_Response__Sequence__init(vla__action__ActionVLA_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Response * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_GetResult_Response *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_GetResult_Response__fini(&data[i - 1]);
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
vla__action__ActionVLA_GetResult_Response__Sequence__fini(vla__action__ActionVLA_GetResult_Response__Sequence * array)
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
      vla__action__ActionVLA_GetResult_Response__fini(&array->data[i]);
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

vla__action__ActionVLA_GetResult_Response__Sequence *
vla__action__ActionVLA_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Response__Sequence * array = (vla__action__ActionVLA_GetResult_Response__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_GetResult_Response__Sequence__destroy(vla__action__ActionVLA_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_GetResult_Response__Sequence__are_equal(const vla__action__ActionVLA_GetResult_Response__Sequence * lhs, const vla__action__ActionVLA_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_GetResult_Response__Sequence__copy(
  const vla__action__ActionVLA_GetResult_Response__Sequence * input,
  vla__action__ActionVLA_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_GetResult_Response * data =
      (vla__action__ActionVLA_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "vla/action/detail/action_vla__functions.h"

bool
vla__action__ActionVLA_GetResult_Event__init(vla__action__ActionVLA_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    vla__action__ActionVLA_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!vla__action__ActionVLA_GetResult_Request__Sequence__init(&msg->request, 0)) {
    vla__action__ActionVLA_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!vla__action__ActionVLA_GetResult_Response__Sequence__init(&msg->response, 0)) {
    vla__action__ActionVLA_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_GetResult_Event__fini(vla__action__ActionVLA_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  vla__action__ActionVLA_GetResult_Request__Sequence__fini(&msg->request);
  // response
  vla__action__ActionVLA_GetResult_Response__Sequence__fini(&msg->response);
}

bool
vla__action__ActionVLA_GetResult_Event__are_equal(const vla__action__ActionVLA_GetResult_Event * lhs, const vla__action__ActionVLA_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!vla__action__ActionVLA_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!vla__action__ActionVLA_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_GetResult_Event__copy(
  const vla__action__ActionVLA_GetResult_Event * input,
  vla__action__ActionVLA_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!vla__action__ActionVLA_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!vla__action__ActionVLA_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_GetResult_Event *
vla__action__ActionVLA_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Event * msg = (vla__action__ActionVLA_GetResult_Event *)allocator.allocate(sizeof(vla__action__ActionVLA_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_GetResult_Event));
  bool success = vla__action__ActionVLA_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_GetResult_Event__destroy(vla__action__ActionVLA_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_GetResult_Event__Sequence__init(vla__action__ActionVLA_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Event * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_GetResult_Event *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_GetResult_Event__fini(&data[i - 1]);
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
vla__action__ActionVLA_GetResult_Event__Sequence__fini(vla__action__ActionVLA_GetResult_Event__Sequence * array)
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
      vla__action__ActionVLA_GetResult_Event__fini(&array->data[i]);
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

vla__action__ActionVLA_GetResult_Event__Sequence *
vla__action__ActionVLA_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_GetResult_Event__Sequence * array = (vla__action__ActionVLA_GetResult_Event__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_GetResult_Event__Sequence__destroy(vla__action__ActionVLA_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_GetResult_Event__Sequence__are_equal(const vla__action__ActionVLA_GetResult_Event__Sequence * lhs, const vla__action__ActionVLA_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_GetResult_Event__Sequence__copy(
  const vla__action__ActionVLA_GetResult_Event__Sequence * input,
  vla__action__ActionVLA_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_GetResult_Event * data =
      (vla__action__ActionVLA_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "vla/action/detail/action_vla__functions.h"

bool
vla__action__ActionVLA_FeedbackMessage__init(vla__action__ActionVLA_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    vla__action__ActionVLA_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!vla__action__ActionVLA_Feedback__init(&msg->feedback)) {
    vla__action__ActionVLA_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
vla__action__ActionVLA_FeedbackMessage__fini(vla__action__ActionVLA_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  vla__action__ActionVLA_Feedback__fini(&msg->feedback);
}

bool
vla__action__ActionVLA_FeedbackMessage__are_equal(const vla__action__ActionVLA_FeedbackMessage * lhs, const vla__action__ActionVLA_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!vla__action__ActionVLA_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
vla__action__ActionVLA_FeedbackMessage__copy(
  const vla__action__ActionVLA_FeedbackMessage * input,
  vla__action__ActionVLA_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!vla__action__ActionVLA_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

vla__action__ActionVLA_FeedbackMessage *
vla__action__ActionVLA_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_FeedbackMessage * msg = (vla__action__ActionVLA_FeedbackMessage *)allocator.allocate(sizeof(vla__action__ActionVLA_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__action__ActionVLA_FeedbackMessage));
  bool success = vla__action__ActionVLA_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__action__ActionVLA_FeedbackMessage__destroy(vla__action__ActionVLA_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__action__ActionVLA_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__action__ActionVLA_FeedbackMessage__Sequence__init(vla__action__ActionVLA_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_FeedbackMessage * data = NULL;

  if (size) {
    data = (vla__action__ActionVLA_FeedbackMessage *)allocator.zero_allocate(size, sizeof(vla__action__ActionVLA_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__action__ActionVLA_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__action__ActionVLA_FeedbackMessage__fini(&data[i - 1]);
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
vla__action__ActionVLA_FeedbackMessage__Sequence__fini(vla__action__ActionVLA_FeedbackMessage__Sequence * array)
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
      vla__action__ActionVLA_FeedbackMessage__fini(&array->data[i]);
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

vla__action__ActionVLA_FeedbackMessage__Sequence *
vla__action__ActionVLA_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__action__ActionVLA_FeedbackMessage__Sequence * array = (vla__action__ActionVLA_FeedbackMessage__Sequence *)allocator.allocate(sizeof(vla__action__ActionVLA_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__action__ActionVLA_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__action__ActionVLA_FeedbackMessage__Sequence__destroy(vla__action__ActionVLA_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__action__ActionVLA_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__action__ActionVLA_FeedbackMessage__Sequence__are_equal(const vla__action__ActionVLA_FeedbackMessage__Sequence * lhs, const vla__action__ActionVLA_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__action__ActionVLA_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__action__ActionVLA_FeedbackMessage__Sequence__copy(
  const vla__action__ActionVLA_FeedbackMessage__Sequence * input,
  vla__action__ActionVLA_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__action__ActionVLA_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__action__ActionVLA_FeedbackMessage * data =
      (vla__action__ActionVLA_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__action__ActionVLA_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__action__ActionVLA_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__action__ActionVLA_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
