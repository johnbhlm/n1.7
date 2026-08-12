// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vla:action/ResetVLA.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/action/reset_vla.h"


#ifndef VLA__ACTION__DETAIL__RESET_VLA__STRUCT_H_
#define VLA__ACTION__DETAIL__RESET_VLA__STRUCT_H_

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

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_Goal
{
  rosidl_runtime_c__String req_id;
} vla__action__ResetVLA_Goal;

// Struct for a sequence of vla__action__ResetVLA_Goal.
typedef struct vla__action__ResetVLA_Goal__Sequence
{
  vla__action__ResetVLA_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_Result
{
  /// 0为成功，其它为错误码
  int32_t result_code;
  /// 失败原因
  rosidl_runtime_c__String result_msg;
} vla__action__ResetVLA_Result;

// Struct for a sequence of vla__action__ResetVLA_Result.
typedef struct vla__action__ResetVLA_Result__Sequence
{
  vla__action__ResetVLA_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'feedback_msg'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_Feedback
{
  /// 进度（0.0~1.0）
  float progress;
  /// 进度说明
  rosidl_runtime_c__String feedback_msg;
} vla__action__ResetVLA_Feedback;

// Struct for a sequence of vla__action__ResetVLA_Feedback.
typedef struct vla__action__ResetVLA_Feedback__Sequence
{
  vla__action__ResetVLA_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "vla/action/detail/reset_vla__struct.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  vla__action__ResetVLA_Goal goal;
} vla__action__ResetVLA_SendGoal_Request;

// Struct for a sequence of vla__action__ResetVLA_SendGoal_Request.
typedef struct vla__action__ResetVLA_SendGoal_Request__Sequence
{
  vla__action__ResetVLA_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} vla__action__ResetVLA_SendGoal_Response;

// Struct for a sequence of vla__action__ResetVLA_SendGoal_Response.
typedef struct vla__action__ResetVLA_SendGoal_Response__Sequence
{
  vla__action__ResetVLA_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vla__action__ResetVLA_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vla__action__ResetVLA_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vla__action__ResetVLA_SendGoal_Request__Sequence request;
  vla__action__ResetVLA_SendGoal_Response__Sequence response;
} vla__action__ResetVLA_SendGoal_Event;

// Struct for a sequence of vla__action__ResetVLA_SendGoal_Event.
typedef struct vla__action__ResetVLA_SendGoal_Event__Sequence
{
  vla__action__ResetVLA_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} vla__action__ResetVLA_GetResult_Request;

// Struct for a sequence of vla__action__ResetVLA_GetResult_Request.
typedef struct vla__action__ResetVLA_GetResult_Request__Sequence
{
  vla__action__ResetVLA_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "vla/action/detail/reset_vla__struct.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_GetResult_Response
{
  int8_t status;
  vla__action__ResetVLA_Result result;
} vla__action__ResetVLA_GetResult_Response;

// Struct for a sequence of vla__action__ResetVLA_GetResult_Response.
typedef struct vla__action__ResetVLA_GetResult_Response__Sequence
{
  vla__action__ResetVLA_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vla__action__ResetVLA_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vla__action__ResetVLA_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vla__action__ResetVLA_GetResult_Request__Sequence request;
  vla__action__ResetVLA_GetResult_Response__Sequence response;
} vla__action__ResetVLA_GetResult_Event;

// Struct for a sequence of vla__action__ResetVLA_GetResult_Event.
typedef struct vla__action__ResetVLA_GetResult_Event__Sequence
{
  vla__action__ResetVLA_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "vla/action/detail/reset_vla__struct.h"

/// Struct defined in action/ResetVLA in the package vla.
typedef struct vla__action__ResetVLA_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  vla__action__ResetVLA_Feedback feedback;
} vla__action__ResetVLA_FeedbackMessage;

// Struct for a sequence of vla__action__ResetVLA_FeedbackMessage.
typedef struct vla__action__ResetVLA_FeedbackMessage__Sequence
{
  vla__action__ResetVLA_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vla__action__ResetVLA_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VLA__ACTION__DETAIL__RESET_VLA__STRUCT_H_
