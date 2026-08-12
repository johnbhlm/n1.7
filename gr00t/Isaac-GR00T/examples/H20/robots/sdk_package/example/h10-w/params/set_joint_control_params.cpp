// set_joint_control_params.cpp

#include <iostream>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_params.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置关节空间控制参数示例 ===" << std::endl;
  H10wParams params;

  JointControlParams set_params = {
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1), 500.0, 30.0, 40.0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2), 520.0, 32.0, 42.0},
      {static_cast<uint32_t>(JointIndexValue::R_ARM_JOINT1), 500.0, 30.0, 40.0},
  };

  if (params.setJointControlParams(set_params) != 0) {
    std::cerr << "设置关节空间控制参数失败" << std::endl;
    return -1;
  }

  std::cout << "设置关节空间控制参数成功" << std::endl;
  return 0;
}
