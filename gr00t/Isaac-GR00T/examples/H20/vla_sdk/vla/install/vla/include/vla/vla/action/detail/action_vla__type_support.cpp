// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vla:action/ActionVLA.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vla/action/detail/action_vla__functions.h"
#include "vla/action/detail/action_vla__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_Goal(_init);
}

void ActionVLA_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_Goal *>(message_memory);
  typed_message->~ActionVLA_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_Goal_message_member_array[5] = {
  {
    "req_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Goal, req_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gripper",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Goal, gripper),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Goal, object),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Goal, target_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Goal, target_location),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_Goal_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_Goal",  // message name
  5,  // number of fields
  sizeof(vla::action::ActionVLA_Goal),
  false,  // has_any_key_member_
  ActionVLA_Goal_message_member_array,  // message members
  ActionVLA_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_Goal_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_Goal__get_type_hash,
  &vla__action__ActionVLA_Goal__get_type_description,
  &vla__action__ActionVLA_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_Goal>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_Goal)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_Result(_init);
}

void ActionVLA_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_Result *>(message_memory);
  typed_message->~ActionVLA_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_Result_message_member_array[2] = {
  {
    "result_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Result, result_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Result, result_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_Result_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_Result",  // message name
  2,  // number of fields
  sizeof(vla::action::ActionVLA_Result),
  false,  // has_any_key_member_
  ActionVLA_Result_message_member_array,  // message members
  ActionVLA_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_Result_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_Result__get_type_hash,
  &vla__action__ActionVLA_Result__get_type_description,
  &vla__action__ActionVLA_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_Result>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_Result)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_Feedback(_init);
}

void ActionVLA_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_Feedback *>(message_memory);
  typed_message->~ActionVLA_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_Feedback_message_member_array[2] = {
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Feedback, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_Feedback, feedback_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_Feedback_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_Feedback",  // message name
  2,  // number of fields
  sizeof(vla::action::ActionVLA_Feedback),
  false,  // has_any_key_member_
  ActionVLA_Feedback_message_member_array,  // message members
  ActionVLA_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_Feedback_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_Feedback__get_type_hash,
  &vla__action__ActionVLA_Feedback__get_type_description,
  &vla__action__ActionVLA_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_Feedback>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_Feedback)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_SendGoal_Request(_init);
}

void ActionVLA_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_SendGoal_Request *>(message_memory);
  typed_message->~ActionVLA_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_Goal>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_SendGoal_Request_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(vla::action::ActionVLA_SendGoal_Request),
  false,  // has_any_key_member_
  ActionVLA_SendGoal_Request_message_member_array,  // message members
  ActionVLA_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_SendGoal_Request__get_type_hash,
  &vla__action__ActionVLA_SendGoal_Request__get_type_description,
  &vla__action__ActionVLA_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Request>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_SendGoal_Request)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_SendGoal_Response(_init);
}

void ActionVLA_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_SendGoal_Response *>(message_memory);
  typed_message->~ActionVLA_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_SendGoal_Response_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(vla::action::ActionVLA_SendGoal_Response),
  false,  // has_any_key_member_
  ActionVLA_SendGoal_Response_message_member_array,  // message members
  ActionVLA_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_SendGoal_Response__get_type_hash,
  &vla__action__ActionVLA_SendGoal_Response__get_type_description,
  &vla__action__ActionVLA_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Response>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_SendGoal_Response)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_SendGoal_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_SendGoal_Event(_init);
}

void ActionVLA_SendGoal_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_SendGoal_Event *>(message_memory);
  typed_message->~ActionVLA_SendGoal_Event();
}

size_t size_function__ActionVLA_SendGoal_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vla::action::ActionVLA_SendGoal_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionVLA_SendGoal_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vla::action::ActionVLA_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionVLA_SendGoal_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vla::action::ActionVLA_SendGoal_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActionVLA_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vla::action::ActionVLA_SendGoal_Request *>(
    get_const_function__ActionVLA_SendGoal_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<vla::action::ActionVLA_SendGoal_Request *>(untyped_value);
  value = item;
}

void assign_function__ActionVLA_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vla::action::ActionVLA_SendGoal_Request *>(
    get_function__ActionVLA_SendGoal_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const vla::action::ActionVLA_SendGoal_Request *>(untyped_value);
  item = value;
}

void resize_function__ActionVLA_SendGoal_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vla::action::ActionVLA_SendGoal_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionVLA_SendGoal_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vla::action::ActionVLA_SendGoal_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionVLA_SendGoal_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vla::action::ActionVLA_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionVLA_SendGoal_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vla::action::ActionVLA_SendGoal_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActionVLA_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vla::action::ActionVLA_SendGoal_Response *>(
    get_const_function__ActionVLA_SendGoal_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<vla::action::ActionVLA_SendGoal_Response *>(untyped_value);
  value = item;
}

void assign_function__ActionVLA_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vla::action::ActionVLA_SendGoal_Response *>(
    get_function__ActionVLA_SendGoal_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const vla::action::ActionVLA_SendGoal_Response *>(untyped_value);
  item = value;
}

void resize_function__ActionVLA_SendGoal_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vla::action::ActionVLA_SendGoal_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionVLA_SendGoal_Event__request,  // size() function pointer
    get_const_function__ActionVLA_SendGoal_Event__request,  // get_const(index) function pointer
    get_function__ActionVLA_SendGoal_Event__request,  // get(index) function pointer
    fetch_function__ActionVLA_SendGoal_Event__request,  // fetch(index, &value) function pointer
    assign_function__ActionVLA_SendGoal_Event__request,  // assign(index, value) function pointer
    resize_function__ActionVLA_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vla::action::ActionVLA_SendGoal_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionVLA_SendGoal_Event__response,  // size() function pointer
    get_const_function__ActionVLA_SendGoal_Event__response,  // get_const(index) function pointer
    get_function__ActionVLA_SendGoal_Event__response,  // get(index) function pointer
    fetch_function__ActionVLA_SendGoal_Event__response,  // fetch(index, &value) function pointer
    assign_function__ActionVLA_SendGoal_Event__response,  // assign(index, value) function pointer
    resize_function__ActionVLA_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_SendGoal_Event_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(vla::action::ActionVLA_SendGoal_Event),
  false,  // has_any_key_member_
  ActionVLA_SendGoal_Event_message_member_array,  // message members
  ActionVLA_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_SendGoal_Event__get_type_hash,
  &vla__action__ActionVLA_SendGoal_Event__get_type_description,
  &vla__action__ActionVLA_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Event>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_SendGoal_Event)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ActionVLA_SendGoal_service_members = {
  "vla::action",  // service namespace
  "ActionVLA_SendGoal",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<vla::action::ActionVLA_SendGoal>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ActionVLA_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_SendGoal_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<vla::action::ActionVLA_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<vla::action::ActionVLA_SendGoal>,
  &vla__action__ActionVLA_SendGoal__get_type_hash,
  &vla__action__ActionVLA_SendGoal__get_type_description,
  &vla__action__ActionVLA_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vla::action::ActionVLA_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vla::action::ActionVLA_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vla::action::ActionVLA_SendGoal_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vla::action::ActionVLA_SendGoal_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<vla::action::ActionVLA_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_GetResult_Request(_init);
}

void ActionVLA_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_GetResult_Request *>(message_memory);
  typed_message->~ActionVLA_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_GetResult_Request_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(vla::action::ActionVLA_GetResult_Request),
  false,  // has_any_key_member_
  ActionVLA_GetResult_Request_message_member_array,  // message members
  ActionVLA_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_GetResult_Request__get_type_hash,
  &vla__action__ActionVLA_GetResult_Request__get_type_description,
  &vla__action__ActionVLA_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_GetResult_Request>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_GetResult_Request)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_GetResult_Response(_init);
}

void ActionVLA_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_GetResult_Response *>(message_memory);
  typed_message->~ActionVLA_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_Result>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_GetResult_Response_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(vla::action::ActionVLA_GetResult_Response),
  false,  // has_any_key_member_
  ActionVLA_GetResult_Response_message_member_array,  // message members
  ActionVLA_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_GetResult_Response__get_type_hash,
  &vla__action__ActionVLA_GetResult_Response__get_type_description,
  &vla__action__ActionVLA_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_GetResult_Response>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_GetResult_Response)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_GetResult_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_GetResult_Event(_init);
}

void ActionVLA_GetResult_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_GetResult_Event *>(message_memory);
  typed_message->~ActionVLA_GetResult_Event();
}

size_t size_function__ActionVLA_GetResult_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vla::action::ActionVLA_GetResult_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionVLA_GetResult_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vla::action::ActionVLA_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionVLA_GetResult_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vla::action::ActionVLA_GetResult_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActionVLA_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vla::action::ActionVLA_GetResult_Request *>(
    get_const_function__ActionVLA_GetResult_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<vla::action::ActionVLA_GetResult_Request *>(untyped_value);
  value = item;
}

void assign_function__ActionVLA_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vla::action::ActionVLA_GetResult_Request *>(
    get_function__ActionVLA_GetResult_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const vla::action::ActionVLA_GetResult_Request *>(untyped_value);
  item = value;
}

void resize_function__ActionVLA_GetResult_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vla::action::ActionVLA_GetResult_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionVLA_GetResult_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vla::action::ActionVLA_GetResult_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionVLA_GetResult_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vla::action::ActionVLA_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionVLA_GetResult_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vla::action::ActionVLA_GetResult_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActionVLA_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vla::action::ActionVLA_GetResult_Response *>(
    get_const_function__ActionVLA_GetResult_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<vla::action::ActionVLA_GetResult_Response *>(untyped_value);
  value = item;
}

void assign_function__ActionVLA_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vla::action::ActionVLA_GetResult_Response *>(
    get_function__ActionVLA_GetResult_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const vla::action::ActionVLA_GetResult_Response *>(untyped_value);
  item = value;
}

void resize_function__ActionVLA_GetResult_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vla::action::ActionVLA_GetResult_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_GetResult_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_GetResult_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vla::action::ActionVLA_GetResult_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionVLA_GetResult_Event__request,  // size() function pointer
    get_const_function__ActionVLA_GetResult_Event__request,  // get_const(index) function pointer
    get_function__ActionVLA_GetResult_Event__request,  // get(index) function pointer
    fetch_function__ActionVLA_GetResult_Event__request,  // fetch(index, &value) function pointer
    assign_function__ActionVLA_GetResult_Event__request,  // assign(index, value) function pointer
    resize_function__ActionVLA_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_GetResult_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vla::action::ActionVLA_GetResult_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionVLA_GetResult_Event__response,  // size() function pointer
    get_const_function__ActionVLA_GetResult_Event__response,  // get_const(index) function pointer
    get_function__ActionVLA_GetResult_Event__response,  // get(index) function pointer
    fetch_function__ActionVLA_GetResult_Event__response,  // fetch(index, &value) function pointer
    assign_function__ActionVLA_GetResult_Event__response,  // assign(index, value) function pointer
    resize_function__ActionVLA_GetResult_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_GetResult_Event_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(vla::action::ActionVLA_GetResult_Event),
  false,  // has_any_key_member_
  ActionVLA_GetResult_Event_message_member_array,  // message members
  ActionVLA_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_GetResult_Event__get_type_hash,
  &vla__action__ActionVLA_GetResult_Event__get_type_description,
  &vla__action__ActionVLA_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_GetResult_Event>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_GetResult_Event)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers ActionVLA_GetResult_service_members = {
  "vla::action",  // service namespace
  "ActionVLA_GetResult",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<vla::action::ActionVLA_GetResult>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t ActionVLA_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_GetResult_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_GetResult_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_GetResult_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<vla::action::ActionVLA_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<vla::action::ActionVLA_GetResult>,
  &vla__action__ActionVLA_GetResult__get_type_hash,
  &vla__action__ActionVLA_GetResult__get_type_description,
  &vla__action__ActionVLA_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vla::action::ActionVLA_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vla::action::ActionVLA_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vla::action::ActionVLA_GetResult_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vla::action::ActionVLA_GetResult_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<vla::action::ActionVLA_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vla/action/detail/action_vla__functions.h"
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vla
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void ActionVLA_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vla::action::ActionVLA_FeedbackMessage(_init);
}

void ActionVLA_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vla::action::ActionVLA_FeedbackMessage *>(message_memory);
  typed_message->~ActionVLA_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionVLA_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vla::action::ActionVLA_Feedback>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vla::action::ActionVLA_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionVLA_FeedbackMessage_message_members = {
  "vla::action",  // message namespace
  "ActionVLA_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(vla::action::ActionVLA_FeedbackMessage),
  false,  // has_any_key_member_
  ActionVLA_FeedbackMessage_message_member_array,  // message members
  ActionVLA_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionVLA_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionVLA_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionVLA_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &vla__action__ActionVLA_FeedbackMessage__get_type_hash,
  &vla__action__ActionVLA_FeedbackMessage__get_type_description,
  &vla__action__ActionVLA_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace vla


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vla::action::ActionVLA_FeedbackMessage>()
{
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vla, action, ActionVLA_FeedbackMessage)() {
  return &::vla::action::rosidl_typesupport_introspection_cpp::ActionVLA_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
