
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_Goal() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_Goal__init(msg: *mut ActionVLA_Goal) -> bool;
    fn vla__action__ActionVLA_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Goal>, size: usize) -> bool;
    fn vla__action__ActionVLA_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Goal>);
    fn vla__action__ActionVLA_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Goal>) -> bool;
}

// Corresponds to vla__action__ActionVLA_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_Goal {
    /// 目标：VLA执行指令参数
    /// 请求ID
    pub req_id: rosidl_runtime_rs::String,

    /// 使用手（ 0:任意手，1:left_hand, 2:right_hand）
    pub gripper: i32,

    /// 操作对象（如"apple"）
    pub object: rosidl_runtime_rs::String,

    /// 目标枚举类型：0-物品，1-人
    pub target_type: i32,

    /// 位置描述
    pub target_location: rosidl_runtime_rs::String,

}



impl Default for ActionVLA_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_Goal__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_Goal() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_Result() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_Result__init(msg: *mut ActionVLA_Result) -> bool;
    fn vla__action__ActionVLA_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Result>, size: usize) -> bool;
    fn vla__action__ActionVLA_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Result>);
    fn vla__action__ActionVLA_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Result>) -> bool;
}

// Corresponds to vla__action__ActionVLA_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_Result {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: rosidl_runtime_rs::String,

}



impl Default for ActionVLA_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_Result__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_Result where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_Result() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_Feedback__init(msg: *mut ActionVLA_Feedback) -> bool;
    fn vla__action__ActionVLA_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Feedback>, size: usize) -> bool;
    fn vla__action__ActionVLA_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Feedback>);
    fn vla__action__ActionVLA_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_Feedback>) -> bool;
}

// Corresponds to vla__action__ActionVLA_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_Feedback {
    /// 进度（0.0~1.0）
    pub progress: f32,

    /// 进度说明
    pub feedback_msg: rosidl_runtime_rs::String,

}



impl Default for ActionVLA_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_Feedback__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_Feedback() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_FeedbackMessage__init(msg: *mut ActionVLA_FeedbackMessage) -> bool;
    fn vla__action__ActionVLA_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_FeedbackMessage>, size: usize) -> bool;
    fn vla__action__ActionVLA_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_FeedbackMessage>);
    fn vla__action__ActionVLA_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_FeedbackMessage>) -> bool;
}

// Corresponds to vla__action__ActionVLA_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ActionVLA_Feedback,

}



impl Default for ActionVLA_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_FeedbackMessage() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_Goal() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_Goal__init(msg: *mut ResetVLA_Goal) -> bool;
    fn vla__action__ResetVLA_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Goal>, size: usize) -> bool;
    fn vla__action__ResetVLA_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Goal>);
    fn vla__action__ResetVLA_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Goal>) -> bool;
}

// Corresponds to vla__action__ResetVLA_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub req_id: rosidl_runtime_rs::String,

}



impl Default for ResetVLA_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_Goal__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_Goal() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_Result() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_Result__init(msg: *mut ResetVLA_Result) -> bool;
    fn vla__action__ResetVLA_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Result>, size: usize) -> bool;
    fn vla__action__ResetVLA_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Result>);
    fn vla__action__ResetVLA_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Result>) -> bool;
}

// Corresponds to vla__action__ResetVLA_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_Result {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: rosidl_runtime_rs::String,

}



impl Default for ResetVLA_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_Result__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_Result where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_Result() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_Feedback__init(msg: *mut ResetVLA_Feedback) -> bool;
    fn vla__action__ResetVLA_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Feedback>, size: usize) -> bool;
    fn vla__action__ResetVLA_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Feedback>);
    fn vla__action__ResetVLA_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_Feedback>) -> bool;
}

// Corresponds to vla__action__ResetVLA_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_Feedback {
    /// 进度（0.0~1.0）
    pub progress: f32,

    /// 进度说明
    pub feedback_msg: rosidl_runtime_rs::String,

}



impl Default for ResetVLA_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_Feedback__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_Feedback() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_FeedbackMessage__init(msg: *mut ResetVLA_FeedbackMessage) -> bool;
    fn vla__action__ResetVLA_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_FeedbackMessage>, size: usize) -> bool;
    fn vla__action__ResetVLA_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_FeedbackMessage>);
    fn vla__action__ResetVLA_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_FeedbackMessage>) -> bool;
}

// Corresponds to vla__action__ResetVLA_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::ResetVLA_Feedback,

}



impl Default for ResetVLA_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_FeedbackMessage() }
  }
}




#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_SendGoal_Request__init(msg: *mut ActionVLA_SendGoal_Request) -> bool;
    fn vla__action__ActionVLA_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Request>, size: usize) -> bool;
    fn vla__action__ActionVLA_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Request>);
    fn vla__action__ActionVLA_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Request>) -> bool;
}

// Corresponds to vla__action__ActionVLA_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ActionVLA_Goal,

}



impl Default for ActionVLA_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_SendGoal_Request() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_SendGoal_Response__init(msg: *mut ActionVLA_SendGoal_Response) -> bool;
    fn vla__action__ActionVLA_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Response>, size: usize) -> bool;
    fn vla__action__ActionVLA_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Response>);
    fn vla__action__ActionVLA_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_SendGoal_Response>) -> bool;
}

// Corresponds to vla__action__ActionVLA_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ActionVLA_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_SendGoal_Response() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_GetResult_Request__init(msg: *mut ActionVLA_GetResult_Request) -> bool;
    fn vla__action__ActionVLA_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Request>, size: usize) -> bool;
    fn vla__action__ActionVLA_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Request>);
    fn vla__action__ActionVLA_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Request>) -> bool;
}

// Corresponds to vla__action__ActionVLA_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ActionVLA_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_GetResult_Request() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ActionVLA_GetResult_Response__init(msg: *mut ActionVLA_GetResult_Response) -> bool;
    fn vla__action__ActionVLA_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Response>, size: usize) -> bool;
    fn vla__action__ActionVLA_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Response>);
    fn vla__action__ActionVLA_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ActionVLA_GetResult_Response>) -> bool;
}

// Corresponds to vla__action__ActionVLA_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ActionVLA_Result,

}



impl Default for ActionVLA_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ActionVLA_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ActionVLA_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ActionVLA_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ActionVLA_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ActionVLA_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ActionVLA_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ActionVLA_GetResult_Response() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_SendGoal_Request__init(msg: *mut ResetVLA_SendGoal_Request) -> bool;
    fn vla__action__ResetVLA_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Request>, size: usize) -> bool;
    fn vla__action__ResetVLA_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Request>);
    fn vla__action__ResetVLA_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Request>) -> bool;
}

// Corresponds to vla__action__ResetVLA_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::ResetVLA_Goal,

}



impl Default for ResetVLA_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_SendGoal_Request() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_SendGoal_Response__init(msg: *mut ResetVLA_SendGoal_Response) -> bool;
    fn vla__action__ResetVLA_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Response>, size: usize) -> bool;
    fn vla__action__ResetVLA_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Response>);
    fn vla__action__ResetVLA_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_SendGoal_Response>) -> bool;
}

// Corresponds to vla__action__ResetVLA_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ResetVLA_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_SendGoal_Response() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_GetResult_Request__init(msg: *mut ResetVLA_GetResult_Request) -> bool;
    fn vla__action__ResetVLA_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Request>, size: usize) -> bool;
    fn vla__action__ResetVLA_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Request>);
    fn vla__action__ResetVLA_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Request>) -> bool;
}

// Corresponds to vla__action__ResetVLA_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for ResetVLA_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_GetResult_Request() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__action__ResetVLA_GetResult_Response__init(msg: *mut ResetVLA_GetResult_Response) -> bool;
    fn vla__action__ResetVLA_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Response>, size: usize) -> bool;
    fn vla__action__ResetVLA_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Response>);
    fn vla__action__ResetVLA_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ResetVLA_GetResult_Response>) -> bool;
}

// Corresponds to vla__action__ResetVLA_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::ResetVLA_Result,

}



impl Default for ResetVLA_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__action__ResetVLA_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to vla__action__ResetVLA_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResetVLA_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__action__ResetVLA_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResetVLA_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vla/action/ResetVLA_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__action__ResetVLA_GetResult_Response() }
  }
}






#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vla__action__ActionVLA_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to vla__action__ActionVLA_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ActionVLA_SendGoal;

impl rosidl_runtime_rs::Service for ActionVLA_SendGoal {
    type Request = ActionVLA_SendGoal_Request;
    type Response = ActionVLA_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vla__action__ActionVLA_SendGoal() }
    }
}




#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vla__action__ActionVLA_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to vla__action__ActionVLA_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ActionVLA_GetResult;

impl rosidl_runtime_rs::Service for ActionVLA_GetResult {
    type Request = ActionVLA_GetResult_Request;
    type Response = ActionVLA_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vla__action__ActionVLA_GetResult() }
    }
}




#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vla__action__ResetVLA_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to vla__action__ResetVLA_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetVLA_SendGoal;

impl rosidl_runtime_rs::Service for ResetVLA_SendGoal {
    type Request = ResetVLA_SendGoal_Request;
    type Response = ResetVLA_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vla__action__ResetVLA_SendGoal() }
    }
}




#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vla__action__ResetVLA_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to vla__action__ResetVLA_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetVLA_GetResult;

impl rosidl_runtime_rs::Service for ResetVLA_GetResult {
    type Request = ResetVLA_GetResult_Request;
    type Response = ResetVLA_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vla__action__ResetVLA_GetResult() }
    }
}


