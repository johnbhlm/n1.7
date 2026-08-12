#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__srv__GetHandState_Request() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__srv__GetHandState_Request__init(msg: *mut GetHandState_Request) -> bool;
    fn vla__srv__GetHandState_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetHandState_Request>, size: usize) -> bool;
    fn vla__srv__GetHandState_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetHandState_Request>);
    fn vla__srv__GetHandState_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetHandState_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetHandState_Request>) -> bool;
}

// Corresponds to vla__srv__GetHandState_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub req_id: rosidl_runtime_rs::String,

}



impl Default for GetHandState_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__srv__GetHandState_Request__init(&mut msg as *mut _) {
        panic!("Call to vla__srv__GetHandState_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetHandState_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__GetHandState_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__GetHandState_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__GetHandState_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetHandState_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetHandState_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vla/srv/GetHandState_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__srv__GetHandState_Request() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__srv__GetHandState_Response() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__srv__GetHandState_Response__init(msg: *mut GetHandState_Response) -> bool;
    fn vla__srv__GetHandState_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetHandState_Response>, size: usize) -> bool;
    fn vla__srv__GetHandState_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetHandState_Response>);
    fn vla__srv__GetHandState_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetHandState_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetHandState_Response>) -> bool;
}

// Corresponds to vla__srv__GetHandState_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandState_Response {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: rosidl_runtime_rs::String,

    /// 左手状态
    pub left_state: u8,

    /// 右手状态
    pub right_state: u8,

    /// 左手物品
    pub left_item: rosidl_runtime_rs::String,

    /// 右手物品
    pub right_item: rosidl_runtime_rs::String,

}



impl Default for GetHandState_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__srv__GetHandState_Response__init(&mut msg as *mut _) {
        panic!("Call to vla__srv__GetHandState_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetHandState_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__GetHandState_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__GetHandState_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__GetHandState_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetHandState_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetHandState_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vla/srv/GetHandState_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__srv__GetHandState_Response() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__srv__DebugSaveCameraImage_Request() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__srv__DebugSaveCameraImage_Request__init(msg: *mut DebugSaveCameraImage_Request) -> bool;
    fn vla__srv__DebugSaveCameraImage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Request>, size: usize) -> bool;
    fn vla__srv__DebugSaveCameraImage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Request>);
    fn vla__srv__DebugSaveCameraImage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Request>) -> bool;
}

// Corresponds to vla__srv__DebugSaveCameraImage_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugSaveCameraImage_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub req_id: i32,

    /// 相机照片保存文件名
    pub head_image_file: rosidl_runtime_rs::String,

    /// 相机照片保存文件名
    pub left_wrist_image_file: rosidl_runtime_rs::String,

    /// 相机照片保存文件名
    pub right_wrist_image_file: rosidl_runtime_rs::String,

}



impl Default for DebugSaveCameraImage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__srv__DebugSaveCameraImage_Request__init(&mut msg as *mut _) {
        panic!("Call to vla__srv__DebugSaveCameraImage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugSaveCameraImage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__DebugSaveCameraImage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__DebugSaveCameraImage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__DebugSaveCameraImage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugSaveCameraImage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugSaveCameraImage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "vla/srv/DebugSaveCameraImage_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__srv__DebugSaveCameraImage_Request() }
  }
}


#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__vla__srv__DebugSaveCameraImage_Response() -> *const std::ffi::c_void;
}

#[link(name = "vla__rosidl_generator_c")]
extern "C" {
    fn vla__srv__DebugSaveCameraImage_Response__init(msg: *mut DebugSaveCameraImage_Response) -> bool;
    fn vla__srv__DebugSaveCameraImage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Response>, size: usize) -> bool;
    fn vla__srv__DebugSaveCameraImage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Response>);
    fn vla__srv__DebugSaveCameraImage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DebugSaveCameraImage_Response>) -> bool;
}

// Corresponds to vla__srv__DebugSaveCameraImage_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugSaveCameraImage_Response {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: rosidl_runtime_rs::String,

}



impl Default for DebugSaveCameraImage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !vla__srv__DebugSaveCameraImage_Response__init(&mut msg as *mut _) {
        panic!("Call to vla__srv__DebugSaveCameraImage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DebugSaveCameraImage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__DebugSaveCameraImage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__DebugSaveCameraImage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { vla__srv__DebugSaveCameraImage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DebugSaveCameraImage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DebugSaveCameraImage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "vla/srv/DebugSaveCameraImage_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__vla__srv__DebugSaveCameraImage_Response() }
  }
}






#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vla__srv__GetHandState() -> *const std::ffi::c_void;
}

// Corresponds to vla__srv__GetHandState
#[allow(missing_docs, non_camel_case_types)]
pub struct GetHandState;

impl rosidl_runtime_rs::Service for GetHandState {
    type Request = GetHandState_Request;
    type Response = GetHandState_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vla__srv__GetHandState() }
    }
}




#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__vla__srv__DebugSaveCameraImage() -> *const std::ffi::c_void;
}

// Corresponds to vla__srv__DebugSaveCameraImage
#[allow(missing_docs, non_camel_case_types)]
pub struct DebugSaveCameraImage;

impl rosidl_runtime_rs::Service for DebugSaveCameraImage {
    type Request = DebugSaveCameraImage_Request;
    type Response = DebugSaveCameraImage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__vla__srv__DebugSaveCameraImage() }
    }
}


