// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vla:srv/DebugSaveCameraImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/debug_save_camera_image.hpp"


#ifndef VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__TRAITS_HPP_
#define VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vla/srv/detail/debug_save_camera_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vla
{

namespace srv
{

inline void to_flow_style_yaml(
  const DebugSaveCameraImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: req_id
  {
    out << "req_id: ";
    rosidl_generator_traits::value_to_yaml(msg.req_id, out);
    out << ", ";
  }

  // member: head_image_file
  {
    out << "head_image_file: ";
    rosidl_generator_traits::value_to_yaml(msg.head_image_file, out);
    out << ", ";
  }

  // member: left_wrist_image_file
  {
    out << "left_wrist_image_file: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wrist_image_file, out);
    out << ", ";
  }

  // member: right_wrist_image_file
  {
    out << "right_wrist_image_file: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wrist_image_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugSaveCameraImage_Request & msg,
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

  // member: head_image_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_image_file: ";
    rosidl_generator_traits::value_to_yaml(msg.head_image_file, out);
    out << "\n";
  }

  // member: left_wrist_image_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_wrist_image_file: ";
    rosidl_generator_traits::value_to_yaml(msg.left_wrist_image_file, out);
    out << "\n";
  }

  // member: right_wrist_image_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_wrist_image_file: ";
    rosidl_generator_traits::value_to_yaml(msg.right_wrist_image_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugSaveCameraImage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::srv::DebugSaveCameraImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::srv::to_yaml() instead")]]
inline std::string to_yaml(const vla::srv::DebugSaveCameraImage_Request & msg)
{
  return vla::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vla::srv::DebugSaveCameraImage_Request>()
{
  return "vla::srv::DebugSaveCameraImage_Request";
}

template<>
inline const char * name<vla::srv::DebugSaveCameraImage_Request>()
{
  return "vla/srv/DebugSaveCameraImage_Request";
}

template<>
struct has_fixed_size<vla::srv::DebugSaveCameraImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::srv::DebugSaveCameraImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vla::srv::DebugSaveCameraImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vla
{

namespace srv
{

inline void to_flow_style_yaml(
  const DebugSaveCameraImage_Response & msg,
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
  const DebugSaveCameraImage_Response & msg,
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

inline std::string to_yaml(const DebugSaveCameraImage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::srv::DebugSaveCameraImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::srv::to_yaml() instead")]]
inline std::string to_yaml(const vla::srv::DebugSaveCameraImage_Response & msg)
{
  return vla::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vla::srv::DebugSaveCameraImage_Response>()
{
  return "vla::srv::DebugSaveCameraImage_Response";
}

template<>
inline const char * name<vla::srv::DebugSaveCameraImage_Response>()
{
  return "vla/srv/DebugSaveCameraImage_Response";
}

template<>
struct has_fixed_size<vla::srv::DebugSaveCameraImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::srv::DebugSaveCameraImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vla::srv::DebugSaveCameraImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace vla
{

namespace srv
{

inline void to_flow_style_yaml(
  const DebugSaveCameraImage_Event & msg,
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
  const DebugSaveCameraImage_Event & msg,
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

inline std::string to_yaml(const DebugSaveCameraImage_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vla

namespace rosidl_generator_traits
{

[[deprecated("use vla::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vla::srv::DebugSaveCameraImage_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  vla::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vla::srv::to_yaml() instead")]]
inline std::string to_yaml(const vla::srv::DebugSaveCameraImage_Event & msg)
{
  return vla::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vla::srv::DebugSaveCameraImage_Event>()
{
  return "vla::srv::DebugSaveCameraImage_Event";
}

template<>
inline const char * name<vla::srv::DebugSaveCameraImage_Event>()
{
  return "vla/srv/DebugSaveCameraImage_Event";
}

template<>
struct has_fixed_size<vla::srv::DebugSaveCameraImage_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vla::srv::DebugSaveCameraImage_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<vla::srv::DebugSaveCameraImage_Request>::value && has_bounded_size<vla::srv::DebugSaveCameraImage_Response>::value> {};

template<>
struct is_message<vla::srv::DebugSaveCameraImage_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vla::srv::DebugSaveCameraImage>()
{
  return "vla::srv::DebugSaveCameraImage";
}

template<>
inline const char * name<vla::srv::DebugSaveCameraImage>()
{
  return "vla/srv/DebugSaveCameraImage";
}

template<>
struct has_fixed_size<vla::srv::DebugSaveCameraImage>
  : std::integral_constant<
    bool,
    has_fixed_size<vla::srv::DebugSaveCameraImage_Request>::value &&
    has_fixed_size<vla::srv::DebugSaveCameraImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<vla::srv::DebugSaveCameraImage>
  : std::integral_constant<
    bool,
    has_bounded_size<vla::srv::DebugSaveCameraImage_Request>::value &&
    has_bounded_size<vla::srv::DebugSaveCameraImage_Response>::value
  >
{
};

template<>
struct is_service<vla::srv::DebugSaveCameraImage>
  : std::true_type
{
};

template<>
struct is_service_request<vla::srv::DebugSaveCameraImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vla::srv::DebugSaveCameraImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__TRAITS_HPP_
