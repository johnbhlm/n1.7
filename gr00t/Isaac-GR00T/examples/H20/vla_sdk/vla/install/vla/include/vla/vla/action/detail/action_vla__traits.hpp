// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vla:action/ActionVLA.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/action/action_vla.hpp"


#ifndef VLA__ACTION__DETAIL__ACTION_VLA__TRAITS_HPP_
#define VLA__ACTION__DETAIL__ACTION_VLA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vla/action/detail/action_vla__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: req_id
  {
    out << "req_id: ";
    rosidl_generator_traits::value_to_yaml(msg.req_id, out);
    out << ", ";
  }

  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << ", ";
  }

  // member: object
  {
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << ", ";
  }

  // member: target_type
  {
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << ", ";
  }

  // member: target_location
  {
    out << "target_location: ";
    rosidl_generator_traits::value_to_yaml(msg.target_location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: req_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "req_id: ";
    rosidl_generator_traits::value_to_yaml(msg.req_id, out);
    out << "\n";
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }

  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object: ";
    rosidl_generator_traits::value_to_yaml(msg.object, out);
    out << "\n";
  }

  // member: target_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_type: ";
    rosidl_generator_traits::value_to_yaml(msg.target_type, out);
    out << "\n";
  }

  // member: target_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_location: ";
    rosidl_generator_traits::value_to_yaml(msg.target_location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_Goal & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_Goal>()
{
  return "vla::action::ActionVLA_Goal";
}

template<>
inline const char * name<vla::action::ActionVLA_Goal>()
{
  return "vla/action/ActionVLA_Goal";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vla::action::ActionVLA_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result_code
  {
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << ", ";
  }

  // member: result_msg
  {
    out << "result_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_code: ";
    rosidl_generator_traits::value_to_yaml(msg.result_code, out);
    out << "\n";
  }

  // member: result_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.result_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_Result & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_Result>()
{
  return "vla::action::ActionVLA_Result";
}

template<>
inline const char * name<vla::action::ActionVLA_Result>()
{
  return "vla/action/ActionVLA_Result";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vla::action::ActionVLA_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: feedback_msg
  {
    out << "feedback_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: feedback_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_Feedback & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_Feedback>()
{
  return "vla::action::ActionVLA_Feedback";
}

template<>
inline const char * name<vla::action::ActionVLA_Feedback>()
{
  return "vla/action/ActionVLA_Feedback";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vla::action::ActionVLA_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "vla/action/detail/action_vla__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_SendGoal_Request & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_SendGoal_Request>()
{
  return "vla::action::ActionVLA_SendGoal_Request";
}

template<>
inline const char * name<vla::action::ActionVLA_SendGoal_Request>()
{
  return "vla/action/ActionVLA_SendGoal_Request";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<vla::action::ActionVLA_Goal>::value> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<vla::action::ActionVLA_Goal>::value> {};

template<>
struct is_message<vla::action::ActionVLA_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_SendGoal_Response & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_SendGoal_Response>()
{
  return "vla::action::ActionVLA_SendGoal_Response";
}

template<>
inline const char * name<vla::action::ActionVLA_SendGoal_Response>()
{
  return "vla/action/ActionVLA_SendGoal_Response";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<vla::action::ActionVLA_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_SendGoal_Event & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_SendGoal_Event>()
{
  return "vla::action::ActionVLA_SendGoal_Event";
}

template<>
inline const char * name<vla::action::ActionVLA_SendGoal_Event>()
{
  return "vla/action/ActionVLA_SendGoal_Event";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<vla::action::ActionVLA_SendGoal_Request>::value && has_bounded_size<vla::action::ActionVLA_SendGoal_Response>::value> {};

template<>
struct is_message<vla::action::ActionVLA_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vla::action::ActionVLA_SendGoal>()
{
  return "vla::action::ActionVLA_SendGoal";
}

template<>
inline const char * name<vla::action::ActionVLA_SendGoal>()
{
  return "vla/action/ActionVLA_SendGoal";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<vla::action::ActionVLA_SendGoal_Request>::value &&
    has_fixed_size<vla::action::ActionVLA_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<vla::action::ActionVLA_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<vla::action::ActionVLA_SendGoal_Request>::value &&
    has_bounded_size<vla::action::ActionVLA_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<vla::action::ActionVLA_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<vla::action::ActionVLA_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vla::action::ActionVLA_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_GetResult_Request & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_GetResult_Request>()
{
  return "vla::action::ActionVLA_GetResult_Request";
}

template<>
inline const char * name<vla::action::ActionVLA_GetResult_Request>()
{
  return "vla/action/ActionVLA_GetResult_Request";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<vla::action::ActionVLA_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "vla/action/detail/action_vla__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_GetResult_Response & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_GetResult_Response>()
{
  return "vla::action::ActionVLA_GetResult_Response";
}

template<>
inline const char * name<vla::action::ActionVLA_GetResult_Response>()
{
  return "vla/action/ActionVLA_GetResult_Response";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<vla::action::ActionVLA_Result>::value> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<vla::action::ActionVLA_Result>::value> {};

template<>
struct is_message<vla::action::ActionVLA_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_GetResult_Event & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_GetResult_Event>()
{
  return "vla::action::ActionVLA_GetResult_Event";
}

template<>
inline const char * name<vla::action::ActionVLA_GetResult_Event>()
{
  return "vla/action/ActionVLA_GetResult_Event";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<vla::action::ActionVLA_GetResult_Request>::value && has_bounded_size<vla::action::ActionVLA_GetResult_Response>::value> {};

template<>
struct is_message<vla::action::ActionVLA_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vla::action::ActionVLA_GetResult>()
{
  return "vla::action::ActionVLA_GetResult";
}

template<>
inline const char * name<vla::action::ActionVLA_GetResult>()
{
  return "vla/action/ActionVLA_GetResult";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<vla::action::ActionVLA_GetResult_Request>::value &&
    has_fixed_size<vla::action::ActionVLA_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<vla::action::ActionVLA_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<vla::action::ActionVLA_GetResult_Request>::value &&
    has_bounded_size<vla::action::ActionVLA_GetResult_Response>::value
  >
{
};

template<>
struct is_service<vla::action::ActionVLA_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<vla::action::ActionVLA_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vla::action::ActionVLA_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "vla/action/detail/action_vla__traits.hpp"

namespace vla
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionVLA_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionVLA_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionVLA_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::action::ActionVLA_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::action::to_yaml() instead")]]
inline std::string to_yaml(const vla::action::ActionVLA_FeedbackMessage & msg)
{
  return vla::action::to_yaml(msg);
}

template<>
inline const char * data_type<vla::action::ActionVLA_FeedbackMessage>()
{
  return "vla::action::ActionVLA_FeedbackMessage";
}

template<>
inline const char * name<vla::action::ActionVLA_FeedbackMessage>()
{
  return "vla/action/ActionVLA_FeedbackMessage";
}

template<>
struct has_fixed_size<vla::action::ActionVLA_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<vla::action::ActionVLA_Feedback>::value> {};

template<>
struct has_bounded_size<vla::action::ActionVLA_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<vla::action::ActionVLA_Feedback>::value> {};

template<>
struct is_message<vla::action::ActionVLA_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<vla::action::ActionVLA>
  : std::true_type
{
};

template<>
struct is_action_goal<vla::action::ActionVLA_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<vla::action::ActionVLA_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<vla::action::ActionVLA_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // VLA__ACTION__DETAIL__ACTION_VLA__TRAITS_HPP_
