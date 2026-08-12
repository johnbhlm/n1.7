// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vla:srv/DebugSaveCameraImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vla/srv/detail/debug_save_camera_image__rosidl_typesupport_introspection_c.h"
#include "vla/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vla/srv/detail/debug_save_camera_image__functions.h"
#include "vla/srv/detail/debug_save_camera_image__struct.h"


// Include directives for member types
// Member `head_image_file`
// Member `left_wrist_image_file`
// Member `right_wrist_image_file`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vla__srv__DebugSaveCameraImage_Request__init(message_memory);
}

void vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_fini_function(void * message_memory)
{
  vla__srv__DebugSaveCameraImage_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_member_array[4] = {
  {
    "req_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Request, req_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "head_image_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Request, head_image_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_wrist_image_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Request, left_wrist_image_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_wrist_image_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Request, right_wrist_image_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_members = {
  "vla__srv",  // message namespace
  "DebugSaveCameraImage_Request",  // message name
  4,  // number of fields
  sizeof(vla__srv__DebugSaveCameraImage_Request),
  false,  // has_any_key_member_
  vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_member_array,  // message members
  vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_type_support_handle = {
  0,
  &vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_members,
  get_message_typesupport_handle_function,
  &vla__srv__DebugSaveCameraImage_Request__get_type_hash,
  &vla__srv__DebugSaveCameraImage_Request__get_type_description,
  &vla__srv__DebugSaveCameraImage_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vla
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Request)() {
  if (!vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_type_support_handle.typesupport_identifier) {
    vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vla/srv/detail/debug_save_camera_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vla/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vla/srv/detail/debug_save_camera_image__functions.h"
// already included above
// #include "vla/srv/detail/debug_save_camera_image__struct.h"


// Include directives for member types
// Member `result_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vla__srv__DebugSaveCameraImage_Response__init(message_memory);
}

void vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_fini_function(void * message_memory)
{
  vla__srv__DebugSaveCameraImage_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_member_array[2] = {
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Response, result_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Response, result_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_members = {
  "vla__srv",  // message namespace
  "DebugSaveCameraImage_Response",  // message name
  2,  // number of fields
  sizeof(vla__srv__DebugSaveCameraImage_Response),
  false,  // has_any_key_member_
  vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_member_array,  // message members
  vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle = {
  0,
  &vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_members,
  get_message_typesupport_handle_function,
  &vla__srv__DebugSaveCameraImage_Response__get_type_hash,
  &vla__srv__DebugSaveCameraImage_Response__get_type_description,
  &vla__srv__DebugSaveCameraImage_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vla
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Response)() {
  if (!vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle.typesupport_identifier) {
    vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vla/srv/detail/debug_save_camera_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vla/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vla/srv/detail/debug_save_camera_image__functions.h"
// already included above
// #include "vla/srv/detail/debug_save_camera_image__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "vla/srv/debug_save_camera_image.h"
// Member `request`
// Member `response`
// already included above
// #include "vla/srv/detail/debug_save_camera_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vla__srv__DebugSaveCameraImage_Event__init(message_memory);
}

void vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_fini_function(void * message_memory)
{
  vla__srv__DebugSaveCameraImage_Event__fini(message_memory);
}

size_t vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__size_function__DebugSaveCameraImage_Event__request(
  const void * untyped_member)
{
  const vla__srv__DebugSaveCameraImage_Request__Sequence * member =
    (const vla__srv__DebugSaveCameraImage_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_const_function__DebugSaveCameraImage_Event__request(
  const void * untyped_member, size_t index)
{
  const vla__srv__DebugSaveCameraImage_Request__Sequence * member =
    (const vla__srv__DebugSaveCameraImage_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_function__DebugSaveCameraImage_Event__request(
  void * untyped_member, size_t index)
{
  vla__srv__DebugSaveCameraImage_Request__Sequence * member =
    (vla__srv__DebugSaveCameraImage_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__fetch_function__DebugSaveCameraImage_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vla__srv__DebugSaveCameraImage_Request * item =
    ((const vla__srv__DebugSaveCameraImage_Request *)
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_const_function__DebugSaveCameraImage_Event__request(untyped_member, index));
  vla__srv__DebugSaveCameraImage_Request * value =
    (vla__srv__DebugSaveCameraImage_Request *)(untyped_value);
  *value = *item;
}

void vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__assign_function__DebugSaveCameraImage_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vla__srv__DebugSaveCameraImage_Request * item =
    ((vla__srv__DebugSaveCameraImage_Request *)
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_function__DebugSaveCameraImage_Event__request(untyped_member, index));
  const vla__srv__DebugSaveCameraImage_Request * value =
    (const vla__srv__DebugSaveCameraImage_Request *)(untyped_value);
  *item = *value;
}

bool vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__resize_function__DebugSaveCameraImage_Event__request(
  void * untyped_member, size_t size)
{
  vla__srv__DebugSaveCameraImage_Request__Sequence * member =
    (vla__srv__DebugSaveCameraImage_Request__Sequence *)(untyped_member);
  vla__srv__DebugSaveCameraImage_Request__Sequence__fini(member);
  return vla__srv__DebugSaveCameraImage_Request__Sequence__init(member, size);
}

size_t vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__size_function__DebugSaveCameraImage_Event__response(
  const void * untyped_member)
{
  const vla__srv__DebugSaveCameraImage_Response__Sequence * member =
    (const vla__srv__DebugSaveCameraImage_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_const_function__DebugSaveCameraImage_Event__response(
  const void * untyped_member, size_t index)
{
  const vla__srv__DebugSaveCameraImage_Response__Sequence * member =
    (const vla__srv__DebugSaveCameraImage_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_function__DebugSaveCameraImage_Event__response(
  void * untyped_member, size_t index)
{
  vla__srv__DebugSaveCameraImage_Response__Sequence * member =
    (vla__srv__DebugSaveCameraImage_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__fetch_function__DebugSaveCameraImage_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vla__srv__DebugSaveCameraImage_Response * item =
    ((const vla__srv__DebugSaveCameraImage_Response *)
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_const_function__DebugSaveCameraImage_Event__response(untyped_member, index));
  vla__srv__DebugSaveCameraImage_Response * value =
    (vla__srv__DebugSaveCameraImage_Response *)(untyped_value);
  *value = *item;
}

void vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__assign_function__DebugSaveCameraImage_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vla__srv__DebugSaveCameraImage_Response * item =
    ((vla__srv__DebugSaveCameraImage_Response *)
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_function__DebugSaveCameraImage_Event__response(untyped_member, index));
  const vla__srv__DebugSaveCameraImage_Response * value =
    (const vla__srv__DebugSaveCameraImage_Response *)(untyped_value);
  *item = *value;
}

bool vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__resize_function__DebugSaveCameraImage_Event__response(
  void * untyped_member, size_t size)
{
  vla__srv__DebugSaveCameraImage_Response__Sequence * member =
    (vla__srv__DebugSaveCameraImage_Response__Sequence *)(untyped_member);
  vla__srv__DebugSaveCameraImage_Response__Sequence__fini(member);
  return vla__srv__DebugSaveCameraImage_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Event, request),  // bytes offset in struct
    NULL,  // default value
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__size_function__DebugSaveCameraImage_Event__request,  // size() function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_const_function__DebugSaveCameraImage_Event__request,  // get_const(index) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_function__DebugSaveCameraImage_Event__request,  // get(index) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__fetch_function__DebugSaveCameraImage_Event__request,  // fetch(index, &value) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__assign_function__DebugSaveCameraImage_Event__request,  // assign(index, value) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__resize_function__DebugSaveCameraImage_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vla__srv__DebugSaveCameraImage_Event, response),  // bytes offset in struct
    NULL,  // default value
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__size_function__DebugSaveCameraImage_Event__response,  // size() function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_const_function__DebugSaveCameraImage_Event__response,  // get_const(index) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__get_function__DebugSaveCameraImage_Event__response,  // get(index) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__fetch_function__DebugSaveCameraImage_Event__response,  // fetch(index, &value) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__assign_function__DebugSaveCameraImage_Event__response,  // assign(index, value) function pointer
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__resize_function__DebugSaveCameraImage_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_members = {
  "vla__srv",  // message namespace
  "DebugSaveCameraImage_Event",  // message name
  3,  // number of fields
  sizeof(vla__srv__DebugSaveCameraImage_Event),
  false,  // has_any_key_member_
  vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_member_array,  // message members
  vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_type_support_handle = {
  0,
  &vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_members,
  get_message_typesupport_handle_function,
  &vla__srv__DebugSaveCameraImage_Event__get_type_hash,
  &vla__srv__DebugSaveCameraImage_Event__get_type_description,
  &vla__srv__DebugSaveCameraImage_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vla
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Event)() {
  vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Request)();
  vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Response)();
  if (!vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_type_support_handle.typesupport_identifier) {
    vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vla/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vla/srv/detail/debug_save_camera_image__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_members = {
  "vla__srv",  // service namespace
  "DebugSaveCameraImage",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_type_support_handle,
  NULL,  // response message
  // vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle
  NULL  // event_message
  // vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle
};


static rosidl_service_type_support_t vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_type_support_handle = {
  0,
  &vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_members,
  get_service_typesupport_handle_function,
  &vla__srv__DebugSaveCameraImage_Request__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Request_message_type_support_handle,
  &vla__srv__DebugSaveCameraImage_Response__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Response_message_type_support_handle,
  &vla__srv__DebugSaveCameraImage_Event__rosidl_typesupport_introspection_c__DebugSaveCameraImage_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vla,
    srv,
    DebugSaveCameraImage
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vla,
    srv,
    DebugSaveCameraImage
  ),
  &vla__srv__DebugSaveCameraImage__get_type_hash,
  &vla__srv__DebugSaveCameraImage__get_type_description,
  &vla__srv__DebugSaveCameraImage__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vla
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage)(void) {
  if (!vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_type_support_handle.typesupport_identifier) {
    vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vla, srv, DebugSaveCameraImage_Event)()->data;
  }

  return &vla__srv__detail__debug_save_camera_image__rosidl_typesupport_introspection_c__DebugSaveCameraImage_service_type_support_handle;
}
