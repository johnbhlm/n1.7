// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vla:srv/DebugSaveCameraImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/debug_save_camera_image.h"


#ifndef VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__STRUCT_H_
#define VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'head_image_file'
// Member 'left_wrist_image_file'
// Member 'right_wrist_image_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DebugSaveCameraImage in the package vla.
typedef struct vla__srv__DebugSaveCameraImage_Request
{
  int32_t req_id;
  /// 相机照片保存文件名
  rosidl_runtime_c__String head_image_file;
  /// 相机照片保存文件名
  rosidl_runtime_c__String left_wrist_image_file;
  /// 相机照片保存文件名
  rosidl_runtime_c__String right_wrist_image_file;
} vla__srv__DebugSaveCameraImage_Request;

// Struct for a sequence of vla__srv__DebugSaveCameraImage_Request.
typedef struct vla__srv__DebugSaveCameraImage_Request__Sequence
{
  vla__srv__DebugSaveCameraImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__srv__DebugSaveCameraImage_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DebugSaveCameraImage in the package vla.
typedef struct vla__srv__DebugSaveCameraImage_Response
{
  /// 0为成功，其它为错误码
  int32_t result_code;
  /// 失败原因
  rosidl_runtime_c__String result_msg;
} vla__srv__DebugSaveCameraImage_Response;

// Struct for a sequence of vla__srv__DebugSaveCameraImage_Response.
typedef struct vla__srv__DebugSaveCameraImage_Response__Sequence
{
  vla__srv__DebugSaveCameraImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__srv__DebugSaveCameraImage_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vla__srv__DebugSaveCameraImage_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vla__srv__DebugSaveCameraImage_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DebugSaveCameraImage in the package vla.
typedef struct vla__srv__DebugSaveCameraImage_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vla__srv__DebugSaveCameraImage_Request__Sequence request;
  vla__srv__DebugSaveCameraImage_Response__Sequence response;
} vla__srv__DebugSaveCameraImage_Event;

// Struct for a sequence of vla__srv__DebugSaveCameraImage_Event.
typedef struct vla__srv__DebugSaveCameraImage_Event__Sequence
{
  vla__srv__DebugSaveCameraImage_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__srv__DebugSaveCameraImage_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__STRUCT_H_
