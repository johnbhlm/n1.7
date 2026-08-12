// control_power.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_chassis.h"
#include "common/common_def.h"
#include "common/LogWrapper.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  LOG_INFO("=== 底盘原地旋转运动， 请避开障碍物 ===");
  H10wChassis chassis;
  // 底盘使能
  int ret = chassis.baseEnableControl(humanoid::EnableState::ENABLE_ON);
  if (ret != 0) {
    LOG_ERROR("底盘使能打开失败。%d", ret);
    return 0;
  }
  LOG_INFO("底盘使能打开成功。");
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));

  // 正向旋转3s
  if (chassis.speedChassis(0, 0.1, 3) != 0) {
    LOG_ERROR("Speed chassis failed.");
  }
  std::this_thread::sleep_for(std::chrono::milliseconds(3000));

  // 底盘使能关闭
  ret = chassis.baseEnableControl(humanoid::EnableState::ENABLE_OFF);
  if (ret != 0) {
    LOG_ERROR("底盘使能关闭失败。%d", ret);
    return 0;
  }
  LOG_INFO("底盘使能关闭成功。");

  return 0;
}