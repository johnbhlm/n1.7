#pragma once

#include <array>
#include <tuple>
#include <string>
#include <cstdint>
#include <vector>

namespace humanoid::h10w {

inline constexpr const char* ROBOT_MODEL = "h10w";

/**
 * \~Chinese
 * @brief H10w 关节索引与 int 的映射关系
 * @details
 *   - JOINT_INDEX_UNKNOWN = 0
 *   - L_ARM_JOINT1 = 1
 *   - L_ARM_JOINT2 = 2
 *   - L_ARM_JOINT3 = 3
 *   - L_ARM_JOINT4 = 4
 *   - L_ARM_JOINT5 = 5
 *   - L_ARM_JOINT6 = 6
 *   - L_ARM_JOINT7 = 7
 *   - R_ARM_JOINT1 = 8
 *   - R_ARM_JOINT2 = 9
 *   - R_ARM_JOINT3 = 10
 *   - R_ARM_JOINT4 = 11
 *   - R_ARM_JOINT5 = 12
 *   - R_ARM_JOINT6 = 13
 *   - R_ARM_JOINT7 = 14
 *   - HEAD_YAW = 15
 *   - HEAD_PITCH = 16
 *   - EMPTY_INDEX_1 = 17
 *   - ELEVATOR_MOTOR = 18
 *   - EMPTY_INDEX_2 = 19
 *   - EMPTY_INDEX_3 = 20
 *   - EMPTY_INDEX_4 = 21
 * \~English
 * @brief Mapping between H10w joint indexes and int values
 * @details
 *   - JOINT_INDEX_UNKNOWN = 0
 *   - L_ARM_JOINT1 = 1
 *   - L_ARM_JOINT2 = 2
 *   - L_ARM_JOINT3 = 3
 *   - L_ARM_JOINT4 = 4
 *   - L_ARM_JOINT5 = 5
 *   - L_ARM_JOINT6 = 6
 *   - L_ARM_JOINT7 = 7
 *   - R_ARM_JOINT1 = 8
 *   - R_ARM_JOINT2 = 9
 *   - R_ARM_JOINT3 = 10
 *   - R_ARM_JOINT4 = 11
 *   - R_ARM_JOINT5 = 12
 *   - R_ARM_JOINT6 = 13
 *   - R_ARM_JOINT7 = 14
 *   - HEAD_YAW = 15
 *   - HEAD_PITCH = 16
 *   - EMPTY_INDEX_1 = 17
 *   - ELEVATOR_MOTOR = 18
 *   - EMPTY_INDEX_2 = 19
 *   - EMPTY_INDEX_3 = 20
 *   - EMPTY_INDEX_4 = 21
 */
namespace JointIndexValue {
inline constexpr int JOINT_INDEX_UNKNOWN = 0;
inline constexpr int L_ARM_JOINT1 = 1;
inline constexpr int L_ARM_JOINT2 = 2;
inline constexpr int L_ARM_JOINT3 = 3;
inline constexpr int L_ARM_JOINT4 = 4;
inline constexpr int L_ARM_JOINT5 = 5;
inline constexpr int L_ARM_JOINT6 = 6;
inline constexpr int L_ARM_JOINT7 = 7;
inline constexpr int R_ARM_JOINT1 = 8;
inline constexpr int R_ARM_JOINT2 = 9;
inline constexpr int R_ARM_JOINT3 = 10;
inline constexpr int R_ARM_JOINT4 = 11;
inline constexpr int R_ARM_JOINT5 = 12;
inline constexpr int R_ARM_JOINT6 = 13;
inline constexpr int R_ARM_JOINT7 = 14;
inline constexpr int HEAD_YAW = 15;
inline constexpr int HEAD_PITCH = 16;
inline constexpr int EMPTY_INDEX_1 = 17;
inline constexpr int ELEVATOR_MOTOR = 18;
inline constexpr int EMPTY_INDEX_2 = 19;
inline constexpr int EMPTY_INDEX_3 = 20;
inline constexpr int EMPTY_INDEX_4 = 21;
// inline constexpr int L_GRIPPER_MOTOR = 22;
// inline constexpr int R_GRIPPER_MOTOR = 23;
}  // namespace JointIndexValue

/**
 * \~Chinese
 * @brief 表示笛卡尔坐标系下工具中心点的枚举类型
 * @details
 *      - UNKNOWN_CART: 未知工具中心点
 *      - LEFT_ARM: 左臂工具中心点
 *      - RIGHT_ARM: 右臂工具中心点
 *      - TORSO: 躯干工具中心点
 * \~English
 * @brief Represents the enumeration type of tool center point in Cartesian
 * coordinate system
 * @details
 *      - UNKNOWN_CART: Unknown tool center point
 *      - LEFT_ARM: Left arm tool center point
 *      - RIGHT_ARM: Right arm tool center point
 *      - TORSO: Torso tool center point
 */
enum class CartIndex { UNKNOWN_CART = 0, LEFT_ARM, RIGHT_ARM, TORSO, SIZE };

/**
 * \~Chinese
 * @brief 实时指令关节运动控制参数结构体
 * @details
 *       - left_arm: 左臂7个关节角度（弧度），当left_arm_valid=1时有效
 *       - left_arm_valid: 左臂数据有效标志：1-执行运动，0-保持当前位置
 *       - right_arm: 右臂7个关节角度（弧度），当right_arm_valid=1时有效
 *       - right_arm_valid: 右臂数据有效标志：1-执行运动，0-保持当前位置
 *       - torso: 躯干3个关节角度（弧度），当torso_valid=1时有效
 *       - torso_valid: 躯干数据有效标志：1-执行运动，0-保持当前位置
 *       - time: 运动控制周期,间隔多长时间发送一次指令(单位：秒)
 * \~English
 * @brief Realtime joint motion control parameters structure
 * @details
 *       - left_arm: 7 joint angles of left arm (radians), valid when
 * left_arm_valid=1
 *       - left_arm_valid: Left arm data validity flag: 1-execute motion,
 * 0-maintain current position
 *       - right_arm: 7 joint angles of right arm (radians), valid when
 * right_arm_valid=1
 *       - right_arm_valid: Right arm data validity flag: 1-execute motion,
 * 0-maintain current position
 *       - torso: 3 joint angles of torso (radians), valid when torso_valid=1
 *       - torso_valid: Torso data validity flag: 1-execute motion, 0-maintain
 * current position
 *       - time: Motion control period (seconds)
 */
struct RealtimeJointsParams {
  double left_arm[7];     // Left arm 7 joint angles (rad), active when
                          // left_arm_valid=1
  int8_t left_arm_valid;  // Left arm data validity flag: 1-execute motion,
                          // 0-maintain current position

  double right_arm[7];     // Right arm 7 joint angles (rad), active when
                           // right_arm_valid=1
  int8_t right_arm_valid;  // Right arm data validity flag: 1-execute motion,
                           // 0-maintain current position

  double torso[3];     // Torso 3 joint angles (rad), active when torso_valid=1
  int8_t torso_valid;  // Torso data validity flag: 1-execute motion, 0-maintain
                       // current position

  double time;  // Motion duration/timestamp (seconds)
};

/**
 * \~Chinese
 * @brief 实时指令末端位姿运动控制参数结构体
 * @details
 *      - left_arm: 左臂末端TCP位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 *      - left_arm_valid: 左臂数据有效标志：1-执行运动，0-保持当前位置
 *      - right_arm: 右臂末端TCP位姿：[x, y, z, roll, pitch,
 * yaw]，单位：米和弧度
 *      - right_arm_valid: 右臂数据有效标志：1-执行运动，0-保持当前位置
 *      - torso: 躯干末端TCP位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 *      - torso_valid: 躯干数据有效标志：1-执行运动，0-保持当前位置
 *       - time: 运动控制周期,间隔多长时间发送一次指令(单位：秒)
 * \~English
 * @brief Realtime TCP motion control parameters structure
 * @details
 *      - left_arm: Left arm TCP pose: [x, y, z, roll, pitch, yaw] in meters
 *    and radians
 *      - left_arm_valid: Left arm data validity: 1-execute motion, 0-maintain
 * current pose (meters and radians)
 *      - right_arm: Right arm TCP pose: [x, y, z, roll, pitch, yaw] in meters
 *    and radians
 *      - right_arm_valid: Right arm data validity: 1-execute motion, 0-maintain
 * current pose (meters and radians)
 *      - torso: Torso TCP pose: [x, y, z, roll, pitch, yaw] in meters and
 *    radians
 *      - torso_valid: Torso data validity: 1-execute motion, 0-maintain current
 *    pose (meters and radians)
 *      - time: Motion control period (seconds)
 */
struct RealtimeTcpParams {
  double left_arm[6];     // Left arm TCP pose: [x, y, z, roll, pitch, yaw] in
                          // meters and radians
  int8_t left_arm_valid;  // Left arm data validity: 1-execute motion,
                          // 0-maintain current pose

  double right_arm[6];     // Right arm TCP pose: [x, y, z, roll, pitch, yaw] in
                           // meters and radians
  int8_t right_arm_valid;  // Right arm data validity: 1-execute motion,
                           // 0-maintain current pose

  double torso[6];     // Torso pose: [x, y, z, roll, pitch, yaw] in meters and
                       // radians
  int8_t torso_valid;  // Torso data validity: 1-execute motion, 0-maintain
                       // current pose

  double time;  // Motion duration/timestamp (seconds)
};

/**
 * \~Chinese
 * @brief 末端直线运动控制参数结构体
 * @details
 *      - type: 笛卡尔坐标系末端类型，1-左臂 2-右臂 3-躯干
 *      - pose: 笛卡尔末端位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 *      - velocityPercent: 末端速度百分比，(0-1]
 *      - accelerationPercent: 末端加速度百分比，(0-1]
 * \~English
 * @brief TCP linear motion control parameters structure
 * @details
 *      - type: Cartesian coordinate system end type, 1-left arm 2-right arm
 * 3-torso
 *      - pose: Cartesian end pose: [x, y, z, roll, pitch, yaw] in meters and
 *    radians
 *      - velocityPercent: End velocity percentage, (0-1]
 *      - accelerationPercent: End acceleration percentage, (0-1]
 */
struct LinearTarget {
  CartIndex type;              // 1 left 2 right 3 torso
  double pose[6];              // x,y,z,rx,ry,rz
  double velocityPercent;      //(0-1]
  double accelerationPercent;  //(0-1]
};

/**
 * \~Chinese
 * @brief 末端位姿参数结构体
 * @details
 *      - type: 笛卡尔坐标系末端类型，1-左臂 2-右臂 3-躯干
 *      - pose: 笛卡尔末端位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 * \~English
 * @brief TCP pose parameters structure
 * @details
 *      - type: Cartesian coordinate system end type, 1-left arm 2-right arm
 * 3-torso
 *      - pose: Cartesian end pose: [x, y, z, roll, pitch, yaw] in meters and
 *    radians
 */
struct TcpPoseParams {
  CartIndex type;  // 1 left 2 right 3 torso
  double pose[6];  // x,y,z,rx,ry,rz
};

/**
 * \~Chinese
 * @brief 运动状态参数结构体
 * @details
 *       - state: 运动状态， 0-Idle 1-Running 2-Paused 3-Error
 *       - position: 关节位置，单位：弧度
 *       - velocity: 关节速度，单位：弧度/秒
 *       - tcp_pose: 末端位姿，单位：米和弧度
 *       - task_id: 指令任务 ID，标识当前正在执行的指令
 * \~English
 * @brief Motion state parameters structure
 * @details
 *       - state: Motion state, 0-Idle 1-Running 2-Paused 3-Error
 *       - position: Joint position, in radians
 *       - velocity: Joint velocity, in radians/second
 *       - tcp_pose: End pose, in meters and radians
 *       - task_id: Instruction task id, identifies the current instruction
 */
struct MoveMessageParams {
  uint8_t state;
  std::vector<double> position;
  std::vector<double> velocity;
  std::vector<TcpPoseParams> tcp_pose;
  uint8_t robot_mode;
  uint32_t task_id;
};
/**
 * \~Chinese
 * @brief 错误信息参数结构体
 * @details
 *       - id: 错误ID
 *       - level: 错误级别
 *       - module: 错误模块级别，1-算法模块 2-控制器模块 3-驱动模块 4-固件模块
 *       - error_code: 错误码
 *       - msg: 错误信息
 * \~English
 * @brief Error message parameters structure
 * @details
 *       - id: Error ID
 *       - level: Error level
 *       - module: Error module level, 1-Algorithm 2-Controller 3-Driver
 * 4-Firmware
 *       - error_code: Error code
 *       - msg: Error message
 */
struct ErrorMessageParams {
  uint32_t id;
  uint8_t level;
  uint8_t module;
  int32_t error_code;
  std::string msg;
};

#pragma pack(push, 1)  // 设置为1字节对齐
/**
 * \~Chinese
 * @brief 全身电机控制（机械臂+头部电机）参数结构体
 * @details
 *     - mode: 控制模式，0-禁用控模式 1-启用模式
 *     - op_mode: 工作模式，0-力位混控模式（臂+头部）
 * 1-同步位置控制模式（升降机构）
 *     - q: 关节目标位置，单位: rad
 *     - dq: 关节目标速度，单位: rad/s
 *     - tau: 关节前反馈力矩，单位: N・m
 *     - kp: 关节刚度系数
 *     - kd: 关节阻尼系数
 * \~English
 * @brief Full-body motor control (arm + head) command parameters structure
 * @details
 *     - mode: Control mode, 0-disabled 1-enabled
 *     - op_mode: Operating mode, 0-hybrid position/force (arms + head)
 * 1-synchronous position (elevator)
 *     - q: Target joint position, rad
 *     - dq: Target joint velocity, rad/s
 *     - tau: Feedforward joint torque, N·m
 *     - kp: Joint stiffness
 *     - kd: Joint damping
 */
struct JointMotorCmd {
  uint8_t mode{};
  uint8_t op_mode{};
  float q{};
  float dq{};
  float tau{};
  float kp{};
  float kd{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 轮电机运动控制参数结构体
 * @details
 *    - mode: 控制模式，0-禁用模式 1-启用模式
 *    - op_mode: 工作模式，2-同步速度模式
 *    - v: 轮线速度，单位 m/s
 * \~English
 * @brief Wheel motor motion control parameters structure
 * @details
 *    - mode: Control mode, 0-disabled 1-enabled
 *    - op_mode: Operating mode, 2-synchronous velocity
 *    - v: Wheel linear velocity, m/s
 */
struct WheelMotorCmd {
  uint8_t mode{};
  uint8_t op_mode{};
  float v{};
  std::array<uint32_t, 4> reserved;
};

// /**
//  * \~Chinese
//  * @brief 升降电机控制参数结构体
//  * @details
//  *    - mode: 控制使能，0-禁用控制 1-启用控制
//  *    - position: 升降电机位置，单位：m
//  *    - velocity: 升降电机速度，单位：m/s
//  * \~English
//  * @brief Elevator control parameters structure
//  * @details
//  *    - mode: Control enable, 0-disable control 1-enable control
//  *    - position: Elevator motor position, in m
//  *    - velocity: Elevator motor velocity, in m/s
//  */
// struct ElevatorCmd {
//   uint8_t mode{};
//   float position{};
//   float velocity{};
//   std::array<uint32_t, 4> reserved;
// };

// /**
//  * \~Chinese
//  * @brief 夹爪控制参数结构体
//  * @details
//  *    - mode: 控制使能，0-禁用控制 1-启用控制
//  *    - position: 目标位置，单位：m
//  *    - force: 目标夹持力，单位：N
//  *    - velocity: 夹爪速度，单位：m/s
//  * \~English
//  * @brief Gripper control parameters structure
//  * @details
//  *    - mode: Control enable, 0-disable control 1-enable control
//  *    - position: target position, in m
//  *    - force: Gripper force, in N
//  *    - velocity: Gripper velocity, in m/s
//  */
// struct GripperCmd {
//   uint8_t mode{};
//   float position{};
//   float force{};
//   float velocity{};
//   std::array<uint32_t, 4> reserved;
// };

// /**
//  * \~Chinese
//  * @brief PCU控制参数结构体
//  * @details
//  *    - mode: 三色灯是否启用
//  *    - led_r: RGB-R 控制信息
//  *    - led_g: RGB-G 控制信息
//  *    - led_b: RGB-B 控制信息
//  *    - led_mode: 三色灯闪烁模式
//  *    - led_frequency: 三色灯闪烁频率
//  * \~English
//  * @brief PCU control parameters structure
//  * @details
//  *    - mode: Whether the tricolor light is enabled
//  *    - led_r: RGB-R control information
//  *    - led_g: RGB-G control information
//  *    - led_b: RGB-B control information
//  *    - led_mode: Tricolor light flashing mode
//  *    - led_frequency: Tricolor light flashing frequency
//  */
// struct PCUCmd {
//   uint8_t mode{};
//   uint8_t led_r{};
//   uint8_t led_g{};
//   uint8_t led_b{};
//   uint8_t led_mode{};
//   uint8_t led_frequency{};
// };

/**
 * \~Chinese
 * @brief 全身电机状态参数结构体
 * @details
 *    - mode: 控制模式，0-禁用模式 1-启用模式
 *    - op_mode: 工作模式，0-力位混控模式（臂+头部）
 * 1-同步位置控制模式（升降机构）
 *    - q: 关节反馈位置，单位: rad
 *    - dq: 关节反馈速度，单位: rad/s
 *    - ddq: 关节反馈加速度，单位： rad/s²
 *    - cur: 关节反馈电流，单位 A
 *    - vol: 电机端电压，单位 V
 *    - tau_est: 关节反馈力矩，单位: N・m
 *    - temp: 电机温度
 *    - kp: 关节刚度系数
 *    - kd: 关节阻尼系数
 *    - enable_state: 使能状态,1：使能，0：失能
 *    - error_code: 错误码
 *    - warning_code: 警告码
 * \~English
 * @brief Whole-body motor state parameters structure
 * @details
 *    - mode: Control mode, 0-disabled 1-enabled
 *    - op_mode: Operating mode, 0-hybrid position/force (arms + head)
 * 1-synchronous position (elevator)
 *    - q: Measured joint position, rad
 *    - dq: Measured joint velocity, rad/s
 *    - ddq: Measured joint acceleration, rad/s²
 *    - cur: Motor current, A
 *    - vol: Motor terminal voltage, V
 *    - tau_est: Estimated joint torque, N·m
 *    - temp: Motor temperatures (e.g. housing and winding), °C
 *    - kp: Joint stiffness
 *    - kd: Joint damping
 *    - enable_state: Enable state, 1-enabled 0-disabled
 *    - error_code: Error code
 *    - warning_code: Warning code
 */
struct JointMotorState {
  uint8_t mode{};
  uint8_t op_mode{};
  float q{};
  float dq{};
  float ddq{};
  float tau_est{};
  float cur{};
  float vol{};
  std::array<int16_t, 2> temp;
  float kp{};
  float kd{};
  uint8_t enable_state{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief IMU状态参数结构体
 * @details
 *    - gyroscope: 设备绕三个坐标轴（x,y,z）的角速度值，单位: rad/s
 *    - accelerometer: 设备在三个坐标轴（x,y,z）上的加速度值，单位：m/s²
 *    - temp: IMU传感器温度，单位℃
 *    - error_code: 错误码
 *    - warning_code: 警告码
 * \~English
 * @brief IMU state parameters structure
 * @details
 *    - gyroscope: Angular rates about x, y, z, rad/s
 *    - accelerometer: Linear acceleration along x, y, z, m/s²
 *    - temp: IMU sensor temperature, °C
 *    - error_code: Error code
 *    - warning_code: Warning code
 */
struct IMUState {
  std::array<float, 3> gyroscope;
  std::array<float, 3> accelerometer;
  int16_t temp{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 轮电机状态参数结构体
 * @details
 *    - mode: 控制模式,0-禁用模式 1-启用模式
 *    - op_mode: 工作模式,2-同步速度模式
 *    - velocity: 线速度，单位 m/s
 *    - tau_est: 转矩，单位: N・m
 *    - cur: 电流，单位 A
 *    - vol: 电压，单位 V
 *    - temp: 电机温度，外壳和绕组温度，单位℃
 *    - enable_state: 使能状态,1：使能，0：失能
 *    - error_code: 错误码
 *    - warning_code: 警告码
 * \~English
 * @brief Wheel motor state parameters structure
 * @details
 *    - mode: Control mode, 0-disabled 1-enabled
 *    - op_mode: Operating mode, 2-synchronous velocity
 *    - velocity: Linear velocity, m/s
 *    - tau_est: Torque, N·m
 *    - cur: Current, A
 *    - vol: Voltage, V
 *    - temp: Motor temperatures (e.g. housing and winding), °C
 *    - enable_state: Enable state, 1-enabled 0-disabled
 *    - error_code: Error code
 *    - warning_code: Warning code
 */
struct WheelMotorState {
  uint8_t mode{};
  uint8_t op_mode{};
  float v{};
  float tau_est{};
  float cur{};
  float vol{};
  std::array<int16_t, 2> temp;
  uint8_t enable_state{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

// /**
//  * \~Chinese
//  * @brief 升降电机状态参数结构体
//  * @details
//  *   - mode: 控制模式
//  *   - position: 升降电机位置，单位：m
//  *   - velocity: 升降电机速度，单位：m/s
//  *   - brake_state: 制动状态，1-开抱闸，0-关抱闸
//  *   - error_code: 错误码
//  *   - warning_code: 警告码
//  * \~English
//  * @brief Elevator state parameters structure
//  * @details
//  *   - mode: Control mode
//  *   - position: Elevator motor position, in meters
//  *   - velocity: Elevator motor velocity, in meters/second
//  *   - brake_state: Brake state, 0-release 1-brake
//  *   - error_code: Error code
//  *   - warning_code: Warning code
//  */
// struct ElevatorState {
//   uint8_t mode{};
//   float position{};
//   float velocity{};
//   uint8_t brake_state{};
//   int32_t error_code{};
//   int32_t warning_code{};
//   std::array<uint32_t, 4> reserved;
// };

// /**
//  * \~Chinese
//  * @brief 夹爪状态参数结构体
//  * @details
//  *   - mode: 控制模式, 0-禁用控制 1-启用控制
//  *   - position: 当前夹爪位置，单位: m
//  *   - force: 夹爪夹持力，单位: N
//  *   - error_code: 错误码
//  *   - warning_code: 警告码
//  * \~English
//  * @brief Gripper state parameters structure
//  * @details
//  *   - mode: Control mode, 0-disable control 1-enable control
//  *   - position: Current gripper position, in m
//  *   - force: Gripper force, in N
//  *   - error_code: Error code
//  *   - warning_code: Warning code
//  */
// struct GripperState {
//   uint8_t mode{};
//   float position{};
//   float force{};
//   int32_t error_code{};
//   int32_t warning_code{};
//   std::array<uint32_t, 4> reserved;
// };

/**
 * \~Chinese
 * @brief PCU状态参数结构体
 * @details
 *   - power_state: 上电状态，0-待机状态 1-软起状态 2-上电状态 3-下电状态
 * 4-错误状态
 *   - bumper_switch_state: 触边开关状态 0：碰撞，1：安全
 *   - emergency_stop_state: 急停，0：急停，1：安全
 *   - soft_emergency_stop_state: 软急停，0：软急停，1：安全
 *   - error_code: 错误码
 *   - warning_code: 警告码
 * \~English
 * @brief PCU state parameters structure
 * @details
 *   - power_state: Power state, 0-standby 1-soft-start 2-powered-on
 * 3-powered-off 4-error
 *   - bumper_switch_state: Bumper switch, per channel: 0-collision 1-safe
 *   - emergency_stop_state: Hardware E-stop, 0-active 1-safe
 *   - soft_emergency_stop_state: Soft E-stop, 0-active 1-safe
 *   - error_code: Error code
 *   - warning_code: Warning code
 */
struct PCUState {
  uint8_t power_state{};
  std::array<uint8_t, 8> bumper_switch_state;
  uint8_t emergency_stop_state{};
  uint8_t soft_emergency_stop_state{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 使能状态参数结构体
 * @details
 *   - upper_enable_state: 上半身使能状态，0：全部失能，1：全部使能，2：部分使能
 *   - base_enable_state: 电底盘使能状态，0：失能、1：使能
 * \~English
 * @brief Enable state parameters structure
 * @details
 *   - upper_enable_state: Upper-body enable, 0-all disabled 1-all enabled
 * 2-partially enabled
 *   - base_enable_state: Powered-base enable, 0-disabled 1-enabled
 */
struct EnableState {
  uint8_t upper_enable_state{};
  uint8_t base_enable_state{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 底层控制参数结构体
 * @details
 *   - joint_motor_cmd: 全身电机控制参数数组
 *   - wheel_motor_cmd: 轮电机运动控制参数数组
 * \~English
 * @brief Low-level control command structure
 * @details
 *   - joint_motor_cmd: Full-body joint motor commands
 *   - wheel_motor_cmd: Wheel motor commands
 */
struct LowCmd {
  std::array<JointMotorCmd, 21> joint_motor_cmd;
  std::array<WheelMotorCmd, 4> wheel_motor_cmd;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 底层状态参数结构体
 * @details
 *   - version: 软件版本信息
 *   - tick: 计时器
 *   - data_valid: 数据有效标志，0：全部无效，1：部分有效，2：全部有效
 *   - joint_motor_state: 全身电机状态参数数组
 *   - wheel_motor_state: 轮电机状态参数
 *   - imu_state: IMU状态参数
 *   - pcu_state: PCU状态参数
 *   - enable_state: 使能状态参数
 *   - time_seconds: 累计时间，单位：s
 *   - error_code: 错误码,0：无错误、-2000~-2999：驱动层软件错误、-1：固件层错误
 *   - warning_code: 警告码
 * \~English
 * @brief Low-level state structure
 * @details
 *   - version: Software version
 *   - tick: Monotonic tick counter
 *   - data_valid: Data validity, 0-none 1-partial 2-all valid
 *   - joint_motor_state: Full-body joint motor states
 *   - wheel_motor_state: Wheel motor states
 *   - imu_state: IMU state
 *   - pcu_state: PCU state
 *   - enable_state: Enable state
 *   - time_seconds: Elapsed time, s
 *   - error_code: Error code, 0-none, -2000..-2999 driver software,
 * -1 firmware
 *   - warning_code: Warning code
 */
struct LowState {
  std::array<uint32_t, 2> version;
  uint32_t tick;
  uint8_t data_valid;
  std::array<JointMotorState, 21> joint_motor_state;
  std::array<WheelMotorState, 4> wheel_motor_state;
  IMUState imu_state;
  PCUState pcu_state;
  EnableState enable_state;
  int32_t time_seconds;
  int32_t error_code;
  int32_t warning_code;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 灯环控制参数结构体
 * @details
 *    - mode: 灯环使能控制，0-禁用 1-启用
 *    - led_r: RGB-R 通道亮度 (0~255)
 *    - led_g: RGB-G 通道亮度 (0~255)
 *    - led_b: RGB-B 通道亮度 (0~255)
 *    - led_mode: LED 模式
 *      - 0: 常闭
 *      - 1: 常亮
 *      - 2: 闪烁
 *      - 3: 呼吸
 *      - 4: 眨眼
 *      - 5: 左闪
 *      - 6: 右闪
 *      - 7: 前闪
 *      - 8: 后闪
 *    - led_frequency: 闪烁/呼吸周期 (单位: Hz)
 * \~English
 * @brief Lamp ring control parameters structure
 * @details
 *    - mode: Lamp ring enable control, 0-disable 1-enable
 *    - led_r: RGB-R channel brightness (0~255)
 *    - led_g: RGB-G channel brightness (0~255)
 *    - led_b: RGB-B channel brightness (0~255)
 *    - led_mode: LED mode
 *      - 0: off
 *      - 1: constant
 *      - 2: blink
 *      - 3: breathing
 *      - 4: wink
 *      - 5: left flash
 *      - 6: right flash
 *      - 7: front flash
 *      - 8: rear flash
 *    - led_frequency: Blink/breathing cycle period (unit: Hz)
 */
typedef struct {
  uint8_t mode;
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
  uint8_t led_mode;
  uint8_t led_frequency;
  std::array<uint32_t, 4> reserved;
} LRCUCmd;

/**
 * \~Chinese
 * @brief 灯环状态参数结构体
 * @details
 *    - mode: 灯环使能状态，0-禁用 1-启用
 *    - led_r: 当前 RGB-R 通道亮度 (0~255)
 *    - led_g: 当前 RGB-G 通道亮度 (0~255)
 *    - led_b: 当前 RGB-B 通道亮度 (0~255)
 *    - led_mode: 当前 LED 模式
 *      - 0: 常闭
 *      - 1: 常亮
 *      - 2: 闪烁
 *      - 3: 呼吸
 *      - 4: 眨眼
 *      - 5: 左闪
 *      - 6: 右闪
 *      - 7: 前闪
 *      - 8: 后闪
 *    - led_frequency: 当前闪烁/呼吸周期
 * \~English
 * @brief Lamp ring state parameters structure
 * @details
 *    - mode: Lamp ring enable state, 0-disable 1-enable
 *    - led_r: Current RGB-R channel brightness (0~255)
 *    - led_g: Current RGB-G channel brightness (0~255)
 *    - led_b: Current RGB-B channel brightness (0~255)
 *    - led_mode: Current LED mode
 *      - 0: off
 *      - 1: constant
 *      - 2: blink
 *      - 3: breathing
 *      - 4: wink
 *      - 5: left flash
 *      - 6: right flash
 *      - 7: front flash
 *      - 8: rear flash
 *    - led_frequency: Current blink/breathing cycle period
 */
typedef struct {
  uint8_t mode;
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
  uint8_t led_mode;
  uint8_t led_frequency;
  std::array<uint32_t, 4> reserved;
} LRCUState;

/**
 * \~Chinese
 * @brief BMS电池状态参数结构体
 * @details
 *    - power_mode: 供电方式
 *      - 0: 外接电源
 *      - 1: 电池供电
 *    - charge_state: 充电状态
 *      - 0: 无效
 *      - 1: 充电中
 *      - 2: 放电中
 *      - 3: 静止
 *    - soc: 电池电量 (0~100%)，无效时为 0
 * \~English
 * @brief BMS battery state parameters structure
 * @details
 *    - power_mode: Power supply mode
 *      - 0: external power
 *      - 1: battery power
 *    - charge_state: Charge state
 *      - 0: invalid
 *      - 1: charging
 *      - 2: discharging
 *      - 3: idle
 *    - soc: Battery state of charge (0~100%), 0 when invalid
 */
typedef struct {
  uint8_t power_mode;
  uint8_t charge_state;
  float soc;
  std::array<uint32_t, 4> reserved;
} BmsState;

#pragma pack(pop)  // 恢复之前的对齐设置

}  // namespace humanoid::h10w
