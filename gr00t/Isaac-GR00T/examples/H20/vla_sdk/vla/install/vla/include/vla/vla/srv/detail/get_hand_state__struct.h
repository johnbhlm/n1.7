// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vla:srv/GetHandState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/get_hand_state.h"


#ifndef VLA__SRV__DETAIL__GET_HAND_STATE__STRUCT_H_
#define VLA__SRV__DETAIL__GET_HAND_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'req_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetHandState in the package vla.
typedef struct vla__srv__GetHandState_Request
{
  rosidl_runtime_c__String req_id;
} vla__srv__GetHandState_Request;

// Struct for a sequence of vla__srv__GetHandState_Request.
typedef struct vla__srv__GetHandState_Request__Sequence
{
  vla__srv__GetHandState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__srv__GetHandState_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_msg'
// Member 'left_item'
// Member 'right_item'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetHandState in the package vla.
typedef struct vla__srv__GetHandState_Response
{
  /// 0为成功，其它为错误码
  int32_t result_code;
  /// 失败原因
  rosidl_runtime_c__String result_msg;
  /// 左手状态
  uint8_t left_state;
  /// 右手状态
  uint8_t right_state;
  /// 左手物品
  rosidl_runtime_c__String left_item;
  /// 右手物品
  rosidl_runtime_c__String right_item;
} vla__srv__GetHandState_Response;

// Struct for a sequence of vla__srv__GetHandState_Response.
typedef struct vla__srv__GetHandState_Response__Sequence
{
  vla__srv__GetHandState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__srv__GetHandState_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vla__srv__GetHandState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vla__srv__GetHandState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetHandState in the package vla.
typedef struct vla__srv__GetHandState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vla__srv__GetHandState_Request__Sequence request;
  vla__srv__GetHandState_Response__Sequence response;
} vla__srv__GetHandState_Event;

// Struct for a sequence of vla__srv__GetHandState_Event.
typedef struct vla__srv__GetHandState_Event__Sequence
{
  vla__srv__GetHandState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__srv__GetHandState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VLA__SRV__DETAIL__GET_HAND_STATE__STRUCT_H_
