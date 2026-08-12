// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vla:srv/GetHandState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/get_hand_state.hpp"


#ifndef VLA__SRV__DETAIL__GET_HAND_STATE__STRUCT_HPP_
#define VLA__SRV__DETAIL__GET_HAND_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vla__srv__GetHandState_Request __attribute__((deprecated))
#else
# define DEPRECATED__vla__srv__GetHandState_Request __declspec(deprecated)
#endif

namespace vla
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHandState_Request_
{
  using Type = GetHandState_Request_<ContainerAllocator>;

  explicit GetHandState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req_id = "";
    }
  }

  explicit GetHandState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : req_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req_id = "";
    }
  }

  // field types and members
  using _req_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _req_id_type req_id;

  // setters for named parameter idiom
  Type & set__req_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->req_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::srv::GetHandState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::srv::GetHandState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::srv::GetHandState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::srv::GetHandState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::srv::GetHandState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::srv::GetHandState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::srv::GetHandState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::srv::GetHandState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::srv::GetHandState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::srv::GetHandState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__srv__GetHandState_Request
    std::shared_ptr<vla::srv::GetHandState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__srv__GetHandState_Request
    std::shared_ptr<vla::srv::GetHandState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHandState_Request_ & other) const
  {
    if (this->req_id != other.req_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHandState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHandState_Request_

// alias to use template instance with default allocator
using GetHandState_Request =
  vla::srv::GetHandState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vla


#ifndef _WIN32
# define DEPRECATED__vla__srv__GetHandState_Response __attribute__((deprecated))
#else
# define DEPRECATED__vla__srv__GetHandState_Response __declspec(deprecated)
#endif

namespace vla
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHandState_Response_
{
  using Type = GetHandState_Response_<ContainerAllocator>;

  explicit GetHandState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0l;
      this->result_msg = "";
      this->left_state = 0;
      this->right_state = 0;
      this->left_item = "";
      this->right_item = "";
    }
  }

  explicit GetHandState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_msg(_alloc),
    left_item(_alloc),
    right_item(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0l;
      this->result_msg = "";
      this->left_state = 0;
      this->right_state = 0;
      this->left_item = "";
      this->right_item = "";
    }
  }

  // field types and members
  using _result_code_type =
    int32_t;
  _result_code_type result_code;
  using _result_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_msg_type result_msg;
  using _left_state_type =
    uint8_t;
  _left_state_type left_state;
  using _right_state_type =
    uint8_t;
  _right_state_type right_state;
  using _left_item_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _left_item_type left_item;
  using _right_item_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _right_item_type right_item;

  // setters for named parameter idiom
  Type & set__result_code(
    const int32_t & _arg)
  {
    this->result_code = _arg;
    return *this;
  }
  Type & set__result_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_msg = _arg;
    return *this;
  }
  Type & set__left_state(
    const uint8_t & _arg)
  {
    this->left_state = _arg;
    return *this;
  }
  Type & set__right_state(
    const uint8_t & _arg)
  {
    this->right_state = _arg;
    return *this;
  }
  Type & set__left_item(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->left_item = _arg;
    return *this;
  }
  Type & set__right_item(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->right_item = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::srv::GetHandState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::srv::GetHandState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::srv::GetHandState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::srv::GetHandState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::srv::GetHandState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::srv::GetHandState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::srv::GetHandState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::srv::GetHandState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::srv::GetHandState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::srv::GetHandState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__srv__GetHandState_Response
    std::shared_ptr<vla::srv::GetHandState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__srv__GetHandState_Response
    std::shared_ptr<vla::srv::GetHandState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHandState_Response_ & other) const
  {
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->result_msg != other.result_msg) {
      return false;
    }
    if (this->left_state != other.left_state) {
      return false;
    }
    if (this->right_state != other.right_state) {
      return false;
    }
    if (this->left_item != other.left_item) {
      return false;
    }
    if (this->right_item != other.right_item) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHandState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHandState_Response_

// alias to use template instance with default allocator
using GetHandState_Response =
  vla::srv::GetHandState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vla


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__srv__GetHandState_Event __attribute__((deprecated))
#else
# define DEPRECATED__vla__srv__GetHandState_Event __declspec(deprecated)
#endif

namespace vla
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHandState_Event_
{
  using Type = GetHandState_Event_<ContainerAllocator>;

  explicit GetHandState_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetHandState_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<vla::srv::GetHandState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::srv::GetHandState_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<vla::srv::GetHandState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::srv::GetHandState_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<vla::srv::GetHandState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::srv::GetHandState_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<vla::srv::GetHandState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::srv::GetHandState_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::srv::GetHandState_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::srv::GetHandState_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::srv::GetHandState_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::srv::GetHandState_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::srv::GetHandState_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::srv::GetHandState_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::srv::GetHandState_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::srv::GetHandState_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::srv::GetHandState_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::srv::GetHandState_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__srv__GetHandState_Event
    std::shared_ptr<vla::srv::GetHandState_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__srv__GetHandState_Event
    std::shared_ptr<vla::srv::GetHandState_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHandState_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHandState_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHandState_Event_

// alias to use template instance with default allocator
using GetHandState_Event =
  vla::srv::GetHandState_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vla

namespace vla
{

namespace srv
{

struct GetHandState
{
  using Request = vla::srv::GetHandState_Request;
  using Response = vla::srv::GetHandState_Response;
  using Event = vla::srv::GetHandState_Event;
};

}  // namespace srv

}  // namespace vla

#endif  // VLA__SRV__DETAIL__GET_HAND_STATE__STRUCT_HPP_
