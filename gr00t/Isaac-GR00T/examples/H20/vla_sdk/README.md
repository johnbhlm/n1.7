## 接收指令工程类(action_command_node)说明

vla_action_ros 文件夹内是与指令工程通信的 ros 消息文件，其中 ActionVLA.action 是指令工程下发指令的消息，ResetVLA.action 为指令工程重置指令的消息（如：休息一下）。VLAStatus 是 vla 上报给指令工程当前状态的消息。

### ActionVLA.action

指令工程的指令定义为：

```
# ActionVLA.action
# 目标：VLA执行指令参数
int32 action_id        # 步骤序号
string action_type     # 动作类型（如"pick", "place", "navigation", "task_complete"）
string target_object   # 操作对象（如"apple"）
string target_location # 操作位置
string gripper_hand    # 使用手（"left_hand"或"right_hand"）
uint8 fixed_hand       # 指定手是否强制使用，0-不强制，1-强制使用指定手
---
# 结果：执行完成返回信息
bool success           # 执行结果状态
int32 final_state      # 最终状态
int32 error_code       # 错误码
string result_msg      # 结果描述
---
# 反馈：执行过程实时状态
float32 progress       # 进度（0.0~1.0）
int32 current_state    # 实时状态
string feedback_msg    # 过程描述
```

执行失败会将错误码返回给指令工程，错误码定义：

ERROR_OK = 0 # 无错误
ERROR_ITEM_IN_HAND = -1 # 物品不在手中
ERROR_ITEM_NOT_MATCH = -2 # 指定物品与手中的不相符
ERROR_NO_EMPTY_HAND = -3 # 两只手都有物品，无法再抓取
ERROR_INPUT = -4 # 输入错误
ERROR_MOVE_TORSO_FAILED = -5 # 移动 torso 失败
ERROR_CAPTURE_HEAD_IMAGE_FAILED = -6 # 抓取头部图片失败
ERROR_NOT_FOUND_OBJECT = -7 # 未找到指定物品
ERROR_MOVE_UPPER_BODY_FAILED = -8 # 移动上半身失败
ERROR_CAPTURE_HAND_IMAGE_FAILED = -9 # 抓取头部图片失败
ERROR_MOVE_GRIPPER_FAILED = -10 # 移动夹爪失败
ERROR_VLA_IS_BUSY = -11 # vla 有指令正在执行
ERROR_NOT_FOUND_EMPTY_PLACE = -12 # 未找到可以放置物品的地方
ERROR_EXCEPTION = -13 # VLA 异常报错
ERROR_CANCEL = -14 # 任务已取消
ERROR_CANT_CATCH = -15 # 物品无法抓取到
ERROR_WRONG_POSITION = -16 # 位置不正确，（如指令要求去桌子上抓取东西，实际运行到了沙发前，会报此错）

### ResetVLA.action

重置消息定义：

```
---
# 结果：执行完成返回信息
bool success           # 执行结果状态
int32 final_state      # 最终状态
string result_msg      # 结果描述
---
# 反馈：执行过程实时状态
float32 progress       # 进度（0.0~1.0）
int32 current_state    # 实时状态
string feedback_msg    # 过程描述
```

### VLAStatus.msg

vla 上报状态消息：

```
std_msgs/Header header
uint8 status # 0: not initialized, 1: ready, 2: running
uint8 left_state    #左手状态 0-未持有物品，1-持有物品
uint8 right_state    #右手状态 0-未持有物品，1-持有物品
string left_item    #左手持有物品名称
string right_item    #右手持有物品名称
```

### action_command_node

action_command_node 为与指令工程通信类，其中 grasp_state_mechine 类为 vla 逻辑处理类，主要负责接收指令工程指令执行指令。调用的 grasp_state_mechine 主要接口有：

self.\_grasp_state_mechine.agent_command_exec(goal_handle.request)　# 执行指令
self.\_grasp_state_mechine.get_task_state() # 获取当前任务状态
self.\_grasp_state_mechine.command_reset()　# reset 任务状态
self.\_grasp_state_mechine.reset_robot()　# 重置任务
self.\_grasp_state_mechine.command_cancel()　# 取消任务
self.\_grasp_state_mechine.get_hand_state() # 获取手状态，（是否抓有东西以及什么东西)

## 相机类 RemoteCamera

相机子类为 RemoteCamera，头部相机为 HeadCamera，腕部相机为 HandCamera，初始化时会将各相机 topic 及各标定文件传入进行初始化：

```
head_camera_node = HeadCamera(
    "headCamera", "/head_camera_pointcloud_capture", "./camera_config/head_camera/camera_mtx.txt", "./camera_config/head_camera/T_cam_in_head.txt")
left_cam_node = HandCamera(
    "leftCamera", "left_camera", "./camera_config/hand_camera/camera_mtx.txt")
```

### 获取相机图片

相机通过接口 get_image 来获取相机 rgb 图，深度图及点云

## 驱动类 DriverNode

DriverNode 用于连接底层驱动与上层任务逻辑，其核心功能是发布 `LowCmd` 控制指令并订阅 `LowState` 状态反馈。

### LowCmd.msg

控制指令 `LowCmd` 定义为：

```
MotorCmd[16] motor_cmd
BaseCmd base_cmd
ElevatorCmd elevator_cmd
GripperCmd[2] gripper_cmd
PCUCmd pcu_cmd
uint32[4] reserved
uint32 crc
```

### LowState.msg

状态反馈 `LowState` 定义为：

```
uint32[2] version
uint32 tick
MotorState[16] motor_state
IMUState imu_state
BaseState base_state
ElevatorState elevator_state
GripperState[2] gripper_state
PCUState pcu_state
BatteryState battery_state
int32 time_seconds
uint8 is_data_valid
int32 error_code
int32 warning_code
uint32[4] reserved
uint32 crc
```

### 发布/订阅接口

DriverNode 在初始化时指定节点名称并创建 `LowCmd` 发布者和 `LowState` 订阅者，存储最新的 `LowState` 数据。主要接口有：
- `get_low_cmd_subscriber_count()`：获取 `LowCmd` 订阅者数量。
- `write_low_cmd(low_cmd)`: 发布 `LowCmd` 指令，参数为 `LowCmd` 类型消息。
- `get_low_state_publisher_count()`: 获取 `LowState` 发布者数量。
- `read_low_state()`: 返回最新的 `LowState` 数据， 返回值为 `LowState` 类型消息。

```python
# Create driver_node
driver_node = DriverNode('driver_node')

# Publish low_cmd
low_cmd = LowCmd()
driver_node.write_low_cmd(low_cmd)

# Subscribe low_state
low_state = driver_node.read_low_state()
```
