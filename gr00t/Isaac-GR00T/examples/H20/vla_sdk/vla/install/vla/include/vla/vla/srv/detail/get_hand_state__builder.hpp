// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vla:srv/GetHandState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/get_hand_state.hpp"


#ifndef VLA__SRV__DETAIL__GET_HAND_STATE__BUILDER_HPP_
#define VLA__SRV__DETAIL__GET_HAND_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vla/srv/detail/get_hand_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vla
{

namespace srv
{

namespace builder
{

class Init_GetHandState_Request_req_id
{
public:
  Init_GetHandState_Request_req_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vla::srv::GetHandState_Request req_id(::vla::srv::GetHandState_Request::_req_id_type arg)
  {
    msg_.req_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vla::srv::GetHandState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vla::srv::GetHandState_Request>()
{
  return vla::srv::builder::Init_GetHandState_Request_req_id();
}

}  // namespace vla


namespace vla
{

namespace srv
{

namespace builder
{

class Init_GetHandState_Response_right_item
{
public:
  explicit Init_GetHandState_Response_right_item(::vla::srv::GetHandState_Response & msg)
  : msg_(msg)
  {}
  ::vla::srv::GetHandState_Response right_item(::vla::srv::GetHandState_Response::_right_item_type arg)
  {
    msg_.right_item = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vla::srv::GetHandState_Response msg_;
};

class Init_GetHandState_Response_left_item
{
public:
  explicit Init_GetHandState_Response_left_item(::vla::srv::GetHandState_Response & msg)
  : msg_(msg)
  {}
  Init_GetHandState_Response_right_item left_item(::vla::srv::GetHandState_Response::_left_item_type arg)
  {
    msg_.left_item = std::move(arg);
    return Init_GetHandState_Response_right_item(msg_);
  }

private:
  ::vla::srv::GetHandState_Response msg_;
};

class Init_GetHandState_Response_right_state
{
public:
  explicit Init_GetHandState_Response_right_state(::vla::srv::GetHandState_Response & msg)
  : msg_(msg)
  {}
  Init_GetHandState_Response_left_item right_state(::vla::srv::GetHandState_Response::_right_state_type arg)
  {
    msg_.right_state = std::move(arg);
    return Init_GetHandState_Response_left_item(msg_);
  }

private:
  ::vla::srv::GetHandState_Response msg_;
};

class Init_GetHandState_Response_left_state
{
public:
  explicit Init_GetHandState_Response_left_state(::vla::srv::GetHandState_Response & msg)
  : msg_(msg)
  {}
  Init_GetHandState_Response_right_state left_state(::vla::srv::GetHandState_Response::_left_state_type arg)
  {
    msg_.left_state = std::move(arg);
    return Init_GetHandState_Response_right_state(msg_);
  }

private:
  ::vla::srv::GetHandState_Response msg_;
};

class Init_GetHandState_Response_result_msg
{
public:
  explicit Init_GetHandState_Response_result_msg(::vla::srv::GetHandState_Response & msg)
  : msg_(msg)
  {}
  Init_GetHandState_Response_left_state result_msg(::vla::srv::GetHandState_Response::_result_msg_type arg)
  {
    msg_.result_msg = std::move(arg);
    return Init_GetHandState_Response_left_state(msg_);
  }

private:
  ::vla::srv::GetHandState_Response msg_;
};

class Init_GetHandState_Response_result_code
{
public:
  Init_GetHandState_Response_result_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHandState_Response_result_msg result_code(::vla::srv::GetHandState_Response::_result_code_type arg)
  {
    msg_.result_code = std::move(arg);
    return Init_GetHandState_Response_result_msg(msg_);
  }

private:
  ::vla::srv::GetHandState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vla::srv::GetHandState_Response>()
{
  return vla::srv::builder::Init_GetHandState_Response_result_code();
}

}  // namespace vla


namespace vla
{

namespace srv
{

namespace builder
{

class Init_GetHandState_Event_response
{
public:
  explicit Init_GetHandState_Event_response(::vla::srv::GetHandState_Event & msg)
  : msg_(msg)
  {}
  ::vla::srv::GetHandState_Event response(::vla::srv::GetHandState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vla::srv::GetHandState_Event msg_;
};

class Init_GetHandState_Event_request
{
public:
  explicit Init_GetHandState_Event_request(::vla::srv::GetHandState_Event & msg)
  : msg_(msg)
  {}
  Init_GetHandState_Event_response request(::vla::srv::GetHandState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetHandState_Event_response(msg_);
  }

private:
  ::vla::srv::GetHandState_Event msg_;
};

class Init_GetHandState_Event_info
{
public:
  Init_GetHandState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHandState_Event_request info(::vla::srv::GetHandState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetHandState_Event_request(msg_);
  }

private:
  ::vla::srv::GetHandState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vla::srv::GetHandState_Event>()
{
  return vla::srv::builder::Init_GetHandState_Event_info();
}

}  // namespace vla

#endif  // VLA__SRV__DETAIL__GET_HAND_STATE__BUILDER_HPP_
