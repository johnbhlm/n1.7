// calibrate_90deg_pos.cpp

#include <iostream>
#include "h10-w/h10w_system.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 关节90度位置标定示例 ===" << std::endl;
  H10wSystem system;

  std::cout << "正在进行上半身失能控制... / Disabling upper body..."
            << std::endl;
  if (system.upperEnableControl(humanoid::EnableState::ENABLE_OFF) == 0) {
    std::cout << "上半身失能控制成功 / Upper body disabled successfully"
              << std::endl;
  } else {
    std::cerr << "上半身失能控制失败 / Upper body disable failed" << std::endl;
  }

  std::cout << "正在进行上半身下电控制..." << std::endl;
  if (system.powerControl(PowerState::POWER_OFF) == 0) {
    std::cout << "上半身下电控制成功" << std::endl;
  } else {
    std::cerr << "上半身下电控制失败" << std::endl;
  }

  int ret = system.calibrate90Deg(JointIndexValue::L_ARM_JOINT1);
  std::cout << "标定关节 "
            << static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1)
            << (ret == 0 ? " 成功" : " 失败") << std::endl;

  ret = system.saveJointParameters(JointIndexValue::L_ARM_JOINT1);
  std::cout << "保存关节 "
            << static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1)
            << (ret == 0 ? " 成功" : " 失败") << std::endl;

  return 0;
}
