// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vla:srv/GetHandState.idl
// generated code does not contain a copyright notice
#include "vla/srv/detail/get_hand_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `req_id`
#include "rosidl_runtime_c/string_functions.h"

bool
vla__srv__GetHandState_Request__init(vla__srv__GetHandState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // req_id
  if (!rosidl_runtime_c__String__init(&msg->req_id)) {
    vla__srv__GetHandState_Request__fini(msg);
    return false;
  }
  return true;
}

void
vla__srv__GetHandState_Request__fini(vla__srv__GetHandState_Request * msg)
{
  if (!msg) {
    return;
  }
  // req_id
  rosidl_runtime_c__String__fini(&msg->req_id);
}

bool
vla__srv__GetHandState_Request__are_equal(const vla__srv__GetHandState_Request * lhs, const vla__srv__GetHandState_Request * rhs)
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
  return true;
}

bool
vla__srv__GetHandState_Request__copy(
  const vla__srv__GetHandState_Request * input,
  vla__srv__GetHandState_Request * output)
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
  return true;
}

vla__srv__GetHandState_Request *
vla__srv__GetHandState_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Request * msg = (vla__srv__GetHandState_Request *)allocator.allocate(sizeof(vla__srv__GetHandState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__srv__GetHandState_Request));
  bool success = vla__srv__GetHandState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__srv__GetHandState_Request__destroy(vla__srv__GetHandState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__srv__GetHandState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__srv__GetHandState_Request__Sequence__init(vla__srv__GetHandState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Request * data = NULL;

  if (size) {
    data = (vla__srv__GetHandState_Request *)allocator.zero_allocate(size, sizeof(vla__srv__GetHandState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__srv__GetHandState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__srv__GetHandState_Request__fini(&data[i - 1]);
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
vla__srv__GetHandState_Request__Sequence__fini(vla__srv__GetHandState_Request__Sequence * array)
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
      vla__srv__GetHandState_Request__fini(&array->data[i]);
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

vla__srv__GetHandState_Request__Sequence *
vla__srv__GetHandState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Request__Sequence * array = (vla__srv__GetHandState_Request__Sequence *)allocator.allocate(sizeof(vla__srv__GetHandState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__srv__GetHandState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__srv__GetHandState_Request__Sequence__destroy(vla__srv__GetHandState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__srv__GetHandState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__srv__GetHandState_Request__Sequence__are_equal(const vla__srv__GetHandState_Request__Sequence * lhs, const vla__srv__GetHandState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__srv__GetHandState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__srv__GetHandState_Request__Sequence__copy(
  const vla__srv__GetHandState_Request__Sequence * input,
  vla__srv__GetHandState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__srv__GetHandState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__srv__GetHandState_Request * data =
      (vla__srv__GetHandState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__srv__GetHandState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__srv__GetHandState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__srv__GetHandState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_msg`
// Member `left_item`
// Member `right_item`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
vla__srv__GetHandState_Response__init(vla__srv__GetHandState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result_code
  // result_msg
  if (!rosidl_runtime_c__String__init(&msg->result_msg)) {
    vla__srv__GetHandState_Response__fini(msg);
    return false;
  }
  // left_state
  // right_state
  // left_item
  if (!rosidl_runtime_c__String__init(&msg->left_item)) {
    vla__srv__GetHandState_Response__fini(msg);
    return false;
  }
  // right_item
  if (!rosidl_runtime_c__String__init(&msg->right_item)) {
    vla__srv__GetHandState_Response__fini(msg);
    return false;
  }
  return true;
}

void
vla__srv__GetHandState_Response__fini(vla__srv__GetHandState_Response * msg)
{
  if (!msg) {
    return;
  }
  // result_code
  // result_msg
  rosidl_runtime_c__String__fini(&msg->result_msg);
  // left_state
  // right_state
  // left_item
  rosidl_runtime_c__String__fini(&msg->left_item);
  // right_item
  rosidl_runtime_c__String__fini(&msg->right_item);
}

bool
vla__srv__GetHandState_Response__are_equal(const vla__srv__GetHandState_Response * lhs, const vla__srv__GetHandState_Response * rhs)
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
  // left_state
  if (lhs->left_state != rhs->left_state) {
    return false;
  }
  // right_state
  if (lhs->right_state != rhs->right_state) {
    return false;
  }
  // left_item
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->left_item), &(rhs->left_item)))
  {
    return false;
  }
  // right_item
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->right_item), &(rhs->right_item)))
  {
    return false;
  }
  return true;
}

bool
vla__srv__GetHandState_Response__copy(
  const vla__srv__GetHandState_Response * input,
  vla__srv__GetHandState_Response * output)
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
  // left_state
  output->left_state = input->left_state;
  // right_state
  output->right_state = input->right_state;
  // left_item
  if (!rosidl_runtime_c__String__copy(
      &(input->left_item), &(output->left_item)))
  {
    return false;
  }
  // right_item
  if (!rosidl_runtime_c__String__copy(
      &(input->right_item), &(output->right_item)))
  {
    return false;
  }
  return true;
}

vla__srv__GetHandState_Response *
vla__srv__GetHandState_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Response * msg = (vla__srv__GetHandState_Response *)allocator.allocate(sizeof(vla__srv__GetHandState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__srv__GetHandState_Response));
  bool success = vla__srv__GetHandState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__srv__GetHandState_Response__destroy(vla__srv__GetHandState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__srv__GetHandState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__srv__GetHandState_Response__Sequence__init(vla__srv__GetHandState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Response * data = NULL;

  if (size) {
    data = (vla__srv__GetHandState_Response *)allocator.zero_allocate(size, sizeof(vla__srv__GetHandState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__srv__GetHandState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__srv__GetHandState_Response__fini(&data[i - 1]);
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
vla__srv__GetHandState_Response__Sequence__fini(vla__srv__GetHandState_Response__Sequence * array)
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
      vla__srv__GetHandState_Response__fini(&array->data[i]);
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

vla__srv__GetHandState_Response__Sequence *
vla__srv__GetHandState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Response__Sequence * array = (vla__srv__GetHandState_Response__Sequence *)allocator.allocate(sizeof(vla__srv__GetHandState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__srv__GetHandState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__srv__GetHandState_Response__Sequence__destroy(vla__srv__GetHandState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__srv__GetHandState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__srv__GetHandState_Response__Sequence__are_equal(const vla__srv__GetHandState_Response__Sequence * lhs, const vla__srv__GetHandState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__srv__GetHandState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__srv__GetHandState_Response__Sequence__copy(
  const vla__srv__GetHandState_Response__Sequence * input,
  vla__srv__GetHandState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__srv__GetHandState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__srv__GetHandState_Response * data =
      (vla__srv__GetHandState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__srv__GetHandState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__srv__GetHandState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__srv__GetHandState_Response__copy(
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
// #include "vla/srv/detail/get_hand_state__functions.h"

bool
vla__srv__GetHandState_Event__init(vla__srv__GetHandState_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    vla__srv__GetHandState_Event__fini(msg);
    return false;
  }
  // request
  if (!vla__srv__GetHandState_Request__Sequence__init(&msg->request, 0)) {
    vla__srv__GetHandState_Event__fini(msg);
    return false;
  }
  // response
  if (!vla__srv__GetHandState_Response__Sequence__init(&msg->response, 0)) {
    vla__srv__GetHandState_Event__fini(msg);
    return false;
  }
  return true;
}

void
vla__srv__GetHandState_Event__fini(vla__srv__GetHandState_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  vla__srv__GetHandState_Request__Sequence__fini(&msg->request);
  // response
  vla__srv__GetHandState_Response__Sequence__fini(&msg->response);
}

bool
vla__srv__GetHandState_Event__are_equal(const vla__srv__GetHandState_Event * lhs, const vla__srv__GetHandState_Event * rhs)
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
  if (!vla__srv__GetHandState_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!vla__srv__GetHandState_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
vla__srv__GetHandState_Event__copy(
  const vla__srv__GetHandState_Event * input,
  vla__srv__GetHandState_Event * output)
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
  if (!vla__srv__GetHandState_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!vla__srv__GetHandState_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

vla__srv__GetHandState_Event *
vla__srv__GetHandState_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Event * msg = (vla__srv__GetHandState_Event *)allocator.allocate(sizeof(vla__srv__GetHandState_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vla__srv__GetHandState_Event));
  bool success = vla__srv__GetHandState_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vla__srv__GetHandState_Event__destroy(vla__srv__GetHandState_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vla__srv__GetHandState_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vla__srv__GetHandState_Event__Sequence__init(vla__srv__GetHandState_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Event * data = NULL;

  if (size) {
    data = (vla__srv__GetHandState_Event *)allocator.zero_allocate(size, sizeof(vla__srv__GetHandState_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vla__srv__GetHandState_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vla__srv__GetHandState_Event__fini(&data[i - 1]);
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
vla__srv__GetHandState_Event__Sequence__fini(vla__srv__GetHandState_Event__Sequence * array)
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
      vla__srv__GetHandState_Event__fini(&array->data[i]);
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

vla__srv__GetHandState_Event__Sequence *
vla__srv__GetHandState_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vla__srv__GetHandState_Event__Sequence * array = (vla__srv__GetHandState_Event__Sequence *)allocator.allocate(sizeof(vla__srv__GetHandState_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vla__srv__GetHandState_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vla__srv__GetHandState_Event__Sequence__destroy(vla__srv__GetHandState_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vla__srv__GetHandState_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vla__srv__GetHandState_Event__Sequence__are_equal(const vla__srv__GetHandState_Event__Sequence * lhs, const vla__srv__GetHandState_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vla__srv__GetHandState_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vla__srv__GetHandState_Event__Sequence__copy(
  const vla__srv__GetHandState_Event__Sequence * input,
  vla__srv__GetHandState_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vla__srv__GetHandState_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vla__srv__GetHandState_Event * data =
      (vla__srv__GetHandState_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vla__srv__GetHandState_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vla__srv__GetHandState_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vla__srv__GetHandState_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
