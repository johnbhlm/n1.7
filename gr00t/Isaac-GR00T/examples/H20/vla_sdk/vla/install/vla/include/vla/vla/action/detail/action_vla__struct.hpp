// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vla:action/ActionVLA.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/action/action_vla.hpp"


#ifndef VLA__ACTION__DETAIL__ACTION_VLA__STRUCT_HPP_
#define VLA__ACTION__DETAIL__ACTION_VLA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_Goal __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_Goal __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_Goal_
{
  using Type = ActionVLA_Goal_<ContainerAllocator>;

  explicit ActionVLA_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req_id = "";
      this->gripper = 0l;
      this->object = "";
      this->target_type = 0l;
      this->target_location = "";
    }
  }

  explicit ActionVLA_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : req_id(_alloc),
    object(_alloc),
    target_location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->req_id = "";
      this->gripper = 0l;
      this->object = "";
      this->target_type = 0l;
      this->target_location = "";
    }
  }

  // field types and members
  using _req_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _req_id_type req_id;
  using _gripper_type =
    int32_t;
  _gripper_type gripper;
  using _object_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_type object;
  using _target_type_type =
    int32_t;
  _target_type_type target_type;
  using _target_location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_location_type target_location;

  // setters for named parameter idiom
  Type & set__req_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->req_id = _arg;
    return *this;
  }
  Type & set__gripper(
    const int32_t & _arg)
  {
    this->gripper = _arg;
    return *this;
  }
  Type & set__object(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__target_type(
    const int32_t & _arg)
  {
    this->target_type = _arg;
    return *this;
  }
  Type & set__target_location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_Goal
    std::shared_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_Goal
    std::shared_ptr<vla::action::ActionVLA_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_Goal_ & other) const
  {
    if (this->req_id != other.req_id) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    if (this->object != other.object) {
      return false;
    }
    if (this->target_type != other.target_type) {
      return false;
    }
    if (this->target_location != other.target_location) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_Goal_

// alias to use template instance with default allocator
using ActionVLA_Goal =
  vla::action::ActionVLA_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_Result __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_Result __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_Result_
{
  using Type = ActionVLA_Result_<ContainerAllocator>;

  explicit ActionVLA_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0l;
      this->result_msg = "";
    }
  }

  explicit ActionVLA_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_code = 0l;
      this->result_msg = "";
    }
  }

  // field types and members
  using _result_code_type =
    int32_t;
  _result_code_type result_code;
  using _result_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_msg_type result_msg;

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

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_Result
    std::shared_ptr<vla::action::ActionVLA_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_Result
    std::shared_ptr<vla::action::ActionVLA_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_Result_ & other) const
  {
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->result_msg != other.result_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_Result_

// alias to use template instance with default allocator
using ActionVLA_Result =
  vla::action::ActionVLA_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_Feedback __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_Feedback_
{
  using Type = ActionVLA_Feedback_<ContainerAllocator>;

  explicit ActionVLA_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
      this->feedback_msg = "";
    }
  }

  explicit ActionVLA_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->progress = 0.0f;
      this->feedback_msg = "";
    }
  }

  // field types and members
  using _progress_type =
    float;
  _progress_type progress;
  using _feedback_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_msg_type feedback_msg;

  // setters for named parameter idiom
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__feedback_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_Feedback
    std::shared_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_Feedback
    std::shared_ptr<vla::action::ActionVLA_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_Feedback_ & other) const
  {
    if (this->progress != other.progress) {
      return false;
    }
    if (this->feedback_msg != other.feedback_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_Feedback_

// alias to use template instance with default allocator
using ActionVLA_Feedback =
  vla::action::ActionVLA_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "vla/action/detail/action_vla__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_SendGoal_Request __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_SendGoal_Request_
{
  using Type = ActionVLA_SendGoal_Request_<ContainerAllocator>;

  explicit ActionVLA_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ActionVLA_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    vla::action::ActionVLA_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const vla::action::ActionVLA_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_SendGoal_Request
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_SendGoal_Request
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_SendGoal_Request_

// alias to use template instance with default allocator
using ActionVLA_SendGoal_Request =
  vla::action::ActionVLA_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_SendGoal_Response __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_SendGoal_Response_
{
  using Type = ActionVLA_SendGoal_Response_<ContainerAllocator>;

  explicit ActionVLA_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ActionVLA_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_SendGoal_Response
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_SendGoal_Response
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_SendGoal_Response_

// alias to use template instance with default allocator
using ActionVLA_SendGoal_Response =
  vla::action::ActionVLA_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_SendGoal_Event __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_SendGoal_Event_
{
  using Type = ActionVLA_SendGoal_Event_<ContainerAllocator>;

  explicit ActionVLA_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActionVLA_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_SendGoal_Event
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_SendGoal_Event
    std::shared_ptr<vla::action::ActionVLA_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_SendGoal_Event_ & other) const
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
  bool operator!=(const ActionVLA_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_SendGoal_Event_

// alias to use template instance with default allocator
using ActionVLA_SendGoal_Event =
  vla::action::ActionVLA_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla

namespace vla
{

namespace action
{

struct ActionVLA_SendGoal
{
  using Request = vla::action::ActionVLA_SendGoal_Request;
  using Response = vla::action::ActionVLA_SendGoal_Response;
  using Event = vla::action::ActionVLA_SendGoal_Event;
};

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_GetResult_Request __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_GetResult_Request_
{
  using Type = ActionVLA_GetResult_Request_<ContainerAllocator>;

  explicit ActionVLA_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ActionVLA_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_GetResult_Request
    std::shared_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_GetResult_Request
    std::shared_ptr<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_GetResult_Request_

// alias to use template instance with default allocator
using ActionVLA_GetResult_Request =
  vla::action::ActionVLA_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'result'
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_GetResult_Response __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_GetResult_Response_
{
  using Type = ActionVLA_GetResult_Response_<ContainerAllocator>;

  explicit ActionVLA_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActionVLA_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    vla::action::ActionVLA_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const vla::action::ActionVLA_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_GetResult_Response
    std::shared_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_GetResult_Response
    std::shared_ptr<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_GetResult_Response_

// alias to use template instance with default allocator
using ActionVLA_GetResult_Response =
  vla::action::ActionVLA_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_GetResult_Event __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_GetResult_Event_
{
  using Type = ActionVLA_GetResult_Event_<ContainerAllocator>;

  explicit ActionVLA_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActionVLA_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vla::action::ActionVLA_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_GetResult_Event
    std::shared_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_GetResult_Event
    std::shared_ptr<vla::action::ActionVLA_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_GetResult_Event_ & other) const
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
  bool operator!=(const ActionVLA_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_GetResult_Event_

// alias to use template instance with default allocator
using ActionVLA_GetResult_Event =
  vla::action::ActionVLA_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla

namespace vla
{

namespace action
{

struct ActionVLA_GetResult
{
  using Request = vla::action::ActionVLA_GetResult_Request;
  using Response = vla::action::ActionVLA_GetResult_Response;
  using Event = vla::action::ActionVLA_GetResult_Event;
};

}  // namespace action

}  // namespace vla


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "vla/action/detail/action_vla__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vla__action__ActionVLA_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__vla__action__ActionVLA_FeedbackMessage __declspec(deprecated)
#endif

namespace vla
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionVLA_FeedbackMessage_
{
  using Type = ActionVLA_FeedbackMessage_<ContainerAllocator>;

  explicit ActionVLA_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ActionVLA_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    vla::action::ActionVLA_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const vla::action::ActionVLA_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vla__action__ActionVLA_FeedbackMessage
    std::shared_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vla__action__ActionVLA_FeedbackMessage
    std::shared_ptr<vla::action::ActionVLA_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionVLA_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionVLA_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionVLA_FeedbackMessage_

// alias to use template instance with default allocator
using ActionVLA_FeedbackMessage =
  vla::action::ActionVLA_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace vla

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace vla
{

namespace action
{

struct ActionVLA
{
  /// The goal message defined in the action definition.
  using Goal = vla::action::ActionVLA_Goal;
  /// The result message defined in the action definition.
  using Result = vla::action::ActionVLA_Result;
  /// The feedback message defined in the action definition.
  using Feedback = vla::action::ActionVLA_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = vla::action::ActionVLA_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = vla::action::ActionVLA_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = vla::action::ActionVLA_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ActionVLA ActionVLA;

}  // namespace action

}  // namespace vla

#endif  // VLA__ACTION__DETAIL__ACTION_VLA__STRUCT_HPP_
