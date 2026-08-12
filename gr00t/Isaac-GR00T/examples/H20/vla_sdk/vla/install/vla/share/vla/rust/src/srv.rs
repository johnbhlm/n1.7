#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to vla__srv__GetHandState_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandState_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub req_id: std::string::String,

}



impl Default for GetHandState_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetHandState_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetHandState_Request {
  type RmwMsg = super::srv::rmw::GetHandState_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        req_id: msg.req_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        req_id: msg.req_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      req_id: msg.req_id.to_string(),
    }
  }
}


// Corresponds to vla__srv__GetHandState_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetHandState_Response {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: std::string::String,

    /// 左手状态
    pub left_state: u8,

    /// 右手状态
    pub right_state: u8,

    /// 左手物品
    pub left_item: std::string::String,

    /// 右手物品
    pub right_item: std::string::String,

}



impl Default for GetHandState_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetHandState_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetHandState_Response {
  type RmwMsg = super::srv::rmw::GetHandState_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result_code: msg.result_code,
        result_msg: msg.result_msg.as_str().into(),
        left_state: msg.left_state,
        right_state: msg.right_state,
        left_item: msg.left_item.as_str().into(),
        right_item: msg.right_item.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result_code: msg.result_code,
        result_msg: msg.result_msg.as_str().into(),
      left_state: msg.left_state,
      right_state: msg.right_state,
        left_item: msg.left_item.as_str().into(),
        right_item: msg.right_item.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result_code: msg.result_code,
      result_msg: msg.result_msg.to_string(),
      left_state: msg.left_state,
      right_state: msg.right_state,
      left_item: msg.left_item.to_string(),
      right_item: msg.right_item.to_string(),
    }
  }
}


// Corresponds to vla__srv__DebugSaveCameraImage_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugSaveCameraImage_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub req_id: i32,

    /// 相机照片保存文件名
    pub head_image_file: std::string::String,

    /// 相机照片保存文件名
    pub left_wrist_image_file: std::string::String,

    /// 相机照片保存文件名
    pub right_wrist_image_file: std::string::String,

}



impl Default for DebugSaveCameraImage_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DebugSaveCameraImage_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DebugSaveCameraImage_Request {
  type RmwMsg = super::srv::rmw::DebugSaveCameraImage_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        req_id: msg.req_id,
        head_image_file: msg.head_image_file.as_str().into(),
        left_wrist_image_file: msg.left_wrist_image_file.as_str().into(),
        right_wrist_image_file: msg.right_wrist_image_file.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      req_id: msg.req_id,
        head_image_file: msg.head_image_file.as_str().into(),
        left_wrist_image_file: msg.left_wrist_image_file.as_str().into(),
        right_wrist_image_file: msg.right_wrist_image_file.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      req_id: msg.req_id,
      head_image_file: msg.head_image_file.to_string(),
      left_wrist_image_file: msg.left_wrist_image_file.to_string(),
      right_wrist_image_file: msg.right_wrist_image_file.to_string(),
    }
  }
}


// Corresponds to vla__srv__DebugSaveCameraImage_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DebugSaveCameraImage_Response {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: std::string::String,

}



impl Default for DebugSaveCameraImage_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DebugSaveCameraImage_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DebugSaveCameraImage_Response {
  type RmwMsg = super::srv::rmw::DebugSaveCameraImage_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        result_code: msg.result_code,
        result_msg: msg.result_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      result_code: msg.result_code,
        result_msg: msg.result_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      result_code: msg.result_code,
      result_msg: msg.result_msg.to_string(),
    }
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


