
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to vla__action__ActionVLA_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_Goal {
    /// 目标：VLA执行指令参数
    /// 请求ID
    pub req_id: std::string::String,

    /// 使用手（ 0:任意手，1:left_hand, 2:right_hand）
    pub gripper: i32,

    /// 操作对象（如"apple"）
    pub object: std::string::String,

    /// 目标枚举类型：0-物品，1-人
    pub target_type: i32,

    /// 位置描述
    pub target_location: std::string::String,

}



impl Default for ActionVLA_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_Goal {
  type RmwMsg = super::action::rmw::ActionVLA_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        req_id: msg.req_id.as_str().into(),
        gripper: msg.gripper,
        object: msg.object.as_str().into(),
        target_type: msg.target_type,
        target_location: msg.target_location.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        req_id: msg.req_id.as_str().into(),
      gripper: msg.gripper,
        object: msg.object.as_str().into(),
      target_type: msg.target_type,
        target_location: msg.target_location.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      req_id: msg.req_id.to_string(),
      gripper: msg.gripper,
      object: msg.object.to_string(),
      target_type: msg.target_type,
      target_location: msg.target_location.to_string(),
    }
  }
}


// Corresponds to vla__action__ActionVLA_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_Result {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: std::string::String,

}



impl Default for ActionVLA_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_Result {
  type RmwMsg = super::action::rmw::ActionVLA_Result;

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


// Corresponds to vla__action__ActionVLA_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_Feedback {
    /// 进度（0.0~1.0）
    pub progress: f32,

    /// 进度说明
    pub feedback_msg: std::string::String,

}



impl Default for ActionVLA_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_Feedback {
  type RmwMsg = super::action::rmw::ActionVLA_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        progress: msg.progress,
        feedback_msg: msg.feedback_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      progress: msg.progress,
        feedback_msg: msg.feedback_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      progress: msg.progress,
      feedback_msg: msg.feedback_msg.to_string(),
    }
  }
}


// Corresponds to vla__action__ActionVLA_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ActionVLA_Feedback,

}



impl Default for ActionVLA_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_FeedbackMessage {
  type RmwMsg = super::action::rmw::ActionVLA_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ActionVLA_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ActionVLA_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ActionVLA_Feedback::from_rmw_message(msg.feedback),
    }
  }
}


// Corresponds to vla__action__ResetVLA_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub req_id: std::string::String,

}



impl Default for ResetVLA_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_Goal {
  type RmwMsg = super::action::rmw::ResetVLA_Goal;

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


// Corresponds to vla__action__ResetVLA_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_Result {
    /// 0为成功，其它为错误码
    pub result_code: i32,

    /// 失败原因
    pub result_msg: std::string::String,

}



impl Default for ResetVLA_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_Result::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_Result {
  type RmwMsg = super::action::rmw::ResetVLA_Result;

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


// Corresponds to vla__action__ResetVLA_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_Feedback {
    /// 进度（0.0~1.0）
    pub progress: f32,

    /// 进度说明
    pub feedback_msg: std::string::String,

}



impl Default for ResetVLA_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_Feedback {
  type RmwMsg = super::action::rmw::ResetVLA_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        progress: msg.progress,
        feedback_msg: msg.feedback_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      progress: msg.progress,
        feedback_msg: msg.feedback_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      progress: msg.progress,
      feedback_msg: msg.feedback_msg.to_string(),
    }
  }
}


// Corresponds to vla__action__ResetVLA_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::ResetVLA_Feedback,

}



impl Default for ResetVLA_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_FeedbackMessage {
  type RmwMsg = super::action::rmw::ResetVLA_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::ResetVLA_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::ResetVLA_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::ResetVLA_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to vla__action__ActionVLA_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ActionVLA_Goal,

}



impl Default for ActionVLA_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_SendGoal_Request {
  type RmwMsg = super::action::rmw::ActionVLA_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ActionVLA_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ActionVLA_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ActionVLA_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to vla__action__ActionVLA_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ActionVLA_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_SendGoal_Response {
  type RmwMsg = super::action::rmw::ActionVLA_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to vla__action__ActionVLA_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ActionVLA_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_GetResult_Request {
  type RmwMsg = super::action::rmw::ActionVLA_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to vla__action__ActionVLA_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ActionVLA_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ActionVLA_Result,

}



impl Default for ActionVLA_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ActionVLA_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ActionVLA_GetResult_Response {
  type RmwMsg = super::action::rmw::ActionVLA_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ActionVLA_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ActionVLA_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ActionVLA_Result::from_rmw_message(msg.result),
    }
  }
}


// Corresponds to vla__action__ResetVLA_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::ResetVLA_Goal,

}



impl Default for ResetVLA_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_SendGoal_Request {
  type RmwMsg = super::action::rmw::ResetVLA_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::ResetVLA_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::ResetVLA_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::ResetVLA_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to vla__action__ResetVLA_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for ResetVLA_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_SendGoal_Response {
  type RmwMsg = super::action::rmw::ResetVLA_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to vla__action__ResetVLA_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for ResetVLA_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_GetResult_Request {
  type RmwMsg = super::action::rmw::ResetVLA_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to vla__action__ResetVLA_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResetVLA_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::ResetVLA_Result,

}



impl Default for ResetVLA_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::ResetVLA_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ResetVLA_GetResult_Response {
  type RmwMsg = super::action::rmw::ResetVLA_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::ResetVLA_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::ResetVLA_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::ResetVLA_Result::from_rmw_message(msg.result),
    }
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






#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__vla__action__ActionVLA() -> *const std::ffi::c_void;
}

// Corresponds to vla__action__ActionVLA
#[allow(missing_docs, non_camel_case_types)]
pub struct ActionVLA;

impl rosidl_runtime_rs::Action for ActionVLA {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ActionVLA_Goal;

  /// The result message defined in the action definition.
  type Result = ActionVLA_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ActionVLA_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ActionVLA_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ActionVLA_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ActionVLA_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__vla__action__ActionVLA() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ActionVLA_Goal,
  ) -> super::action::rmw::ActionVLA_SendGoal_Request {
   super::action::rmw::ActionVLA_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ActionVLA_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ActionVLA_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ActionVLA_SendGoal_Response {
   super::action::rmw::ActionVLA_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ActionVLA_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ActionVLA_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ActionVLA_Feedback,
  ) -> super::action::rmw::ActionVLA_FeedbackMessage {
    let mut message = super::action::rmw::ActionVLA_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ActionVLA_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ActionVLA_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ActionVLA_GetResult_Request {
   super::action::rmw::ActionVLA_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ActionVLA_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ActionVLA_Result,
  ) -> super::action::rmw::ActionVLA_GetResult_Response {
   super::action::rmw::ActionVLA_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ActionVLA_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ActionVLA_Result,
  ) {
    (response.status, response.result)
  }
}




#[link(name = "vla__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__vla__action__ResetVLA() -> *const std::ffi::c_void;
}

// Corresponds to vla__action__ResetVLA
#[allow(missing_docs, non_camel_case_types)]
pub struct ResetVLA;

impl rosidl_runtime_rs::Action for ResetVLA {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = ResetVLA_Goal;

  /// The result message defined in the action definition.
  type Result = ResetVLA_Result;

  /// The feedback message defined in the action definition.
  type Feedback = ResetVLA_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::ResetVLA_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::ResetVLA_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::ResetVLA_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__vla__action__ResetVLA() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::ResetVLA_Goal,
  ) -> super::action::rmw::ResetVLA_SendGoal_Request {
   super::action::rmw::ResetVLA_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::ResetVLA_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::ResetVLA_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::ResetVLA_SendGoal_Response {
   super::action::rmw::ResetVLA_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::ResetVLA_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::ResetVLA_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::ResetVLA_Feedback,
  ) -> super::action::rmw::ResetVLA_FeedbackMessage {
    let mut message = super::action::rmw::ResetVLA_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::ResetVLA_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::ResetVLA_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::ResetVLA_GetResult_Request {
   super::action::rmw::ResetVLA_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::ResetVLA_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::ResetVLA_Result,
  ) -> super::action::rmw::ResetVLA_GetResult_Response {
   super::action::rmw::ResetVLA_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::ResetVLA_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::ResetVLA_Result,
  ) {
    (response.status, response.result)
  }
}


