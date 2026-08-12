// set_tcp_payload.cpp

#include <iostream>
#include <iterator>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 运动学逆解示例 ===" << std::endl;
  H10wParams params;

  // 设置 TCP 坐标
  std::vector<TcpPoseParams> pose = {
      {CartIndex::LEFT_ARM,
       {0.136454, 0.893134, 0.464522, -3.13688, 0.00131278,
        2.56073}},  // 设置左臂 TCP 坐标
      {CartIndex::RIGHT_ARM,
       {-0.142604, -0.816705, 0.565089, -0.0752575, -3.05334,
        0.831717}}  // 设置右臂 TCP 坐标
  };
  std::vector<double> joint_angles;
  std::vector<double> reference_angles = {
      0.3, -0.6, 0, 1.95, 0, 0,    0,    -0.2, -0.2,
      0,   1.5,  0, 0,    0, -0.1, -0.1, 0,    0.3,
  };
  int ret =
      params.inverseKinematics(pose, reference_angles, joint_angles, true);
  if (0 == ret) {
    std::cout << "计算成功: " << std::endl;
    std::cout << "    关节角: ";
    std::copy(joint_angles.begin(), joint_angles.end(),
              std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
  } else {
    std::cout << "计算失败" << ret << std::endl;
    return -1;
  }
  return 0;
}
