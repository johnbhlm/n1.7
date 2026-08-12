// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vla:srv/DebugSaveCameraImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/debug_save_camera_image.hpp"


#ifndef VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__BUILDER_HPP_
#define VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vla/srv/detail/debug_save_camera_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vla
{

namespace srv
{

namespace builder
{

class Init_DebugSaveCameraImage_Request_right_wrist_image_file
{
public:
  explicit Init_DebugSaveCameraImage_Request_right_wrist_image_file(::vla::srv::DebugSaveCameraImage_Request & msg)
  : msg_(msg)
  {}
  ::vla::srv::DebugSaveCameraImage_Request right_wrist_image_file(::vla::srv::DebugSaveCameraImage_Request::_right_wrist_image_file_type arg)
  {
    msg_.right_wrist_image_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Request msg_;
};

class Init_DebugSaveCameraImage_Request_left_wrist_image_file
{
public:
  explicit Init_DebugSaveCameraImage_Request_left_wrist_image_file(::vla::srv::DebugSaveCameraImage_Request & msg)
  : msg_(msg)
  {}
  Init_DebugSaveCameraImage_Request_right_wrist_image_file left_wrist_image_file(::vla::srv::DebugSaveCameraImage_Request::_left_wrist_image_file_type arg)
  {
    msg_.left_wrist_image_file = std::move(arg);
    return Init_DebugSaveCameraImage_Request_right_wrist_image_file(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Request msg_;
};

class Init_DebugSaveCameraImage_Request_head_image_file
{
public:
  explicit Init_DebugSaveCameraImage_Request_head_image_file(::vla::srv::DebugSaveCameraImage_Request & msg)
  : msg_(msg)
  {}
  Init_DebugSaveCameraImage_Request_left_wrist_image_file head_image_file(::vla::srv::DebugSaveCameraImage_Request::_head_image_file_type arg)
  {
    msg_.head_image_file = std::move(arg);
    return Init_DebugSaveCameraImage_Request_left_wrist_image_file(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Request msg_;
};

class Init_DebugSaveCameraImage_Request_req_id
{
public:
  Init_DebugSaveCameraImage_Request_req_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugSaveCameraImage_Request_head_image_file req_id(::vla::srv::DebugSaveCameraImage_Request::_req_id_type arg)
  {
    msg_.req_id = std::move(arg);
    return Init_DebugSaveCameraImage_Request_head_image_file(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vla::srv::DebugSaveCameraImage_Request>()
{
  return vla::srv::builder::Init_DebugSaveCameraImage_Request_req_id();
}

}  // namespace vla


namespace vla
{

namespace srv
{

namespace builder
{

class Init_DebugSaveCameraImage_Response_result_msg
{
public:
  explicit Init_DebugSaveCameraImage_Response_result_msg(::vla::srv::DebugSaveCameraImage_Response & msg)
  : msg_(msg)
  {}
  ::vla::srv::DebugSaveCameraImage_Response result_msg(::vla::srv::DebugSaveCameraImage_Response::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Response msg_;
};

class Init_DebugSaveCameraImage_Response_result_code
{
public:
  Init_DebugSaveCameraImage_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugSaveCameraImage_Response_result_msg result_code(::vla::srv::DebugSaveCameraImage_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_DebugSaveCameraImage_Response_result_msg(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vla::srv::DebugSaveCameraImage_Response>()
{
  return vla::srv::builder::Init_DebugSaveCameraImage_Response_result_code();
}

}  // namespace vla


namespace vla
{

namespace srv
{

namespace builder
{

class Init_DebugSaveCameraImage_Event_response
{
public:
  explicit Init_DebugSaveCameraImage_Event_response(::vla::srv::DebugSaveCameraImage_Event & msg)
  : msg_(msg)
  {}
  ::vla::srv::DebugSaveCameraImage_Event response(::vla::srv::DebugSaveCameraImage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Event msg_;
};

class Init_DebugSaveCameraImage_Event_request
{
public:
  explicit Init_DebugSaveCameraImage_Event_request(::vla::srv::DebugSaveCameraImage_Event & msg)
  : msg_(msg)
  {}
  Init_DebugSaveCameraImage_Event_response request(::vla::srv::DebugSaveCameraImage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DebugSaveCameraImage_Event_response(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Event msg_;
};

class Init_DebugSaveCameraImage_Event_info
{
public:
  Init_DebugSaveCameraImage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugSaveCameraImage_Event_request info(::vla::srv::DebugSaveCameraImage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DebugSaveCameraImage_Event_request(msg_);
  }

private:
  ::vla::srv::DebugSaveCameraImage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vla::srv::DebugSaveCameraImage_Event>()
{
  return vla::srv::builder::Init_DebugSaveCameraImage_Event_info();
}

}  // namespace vla

#endif  // VLA__SRV__DETAIL__DEBUG_SAVE_CAMERA_IMAGE__BUILDER_HPP_
