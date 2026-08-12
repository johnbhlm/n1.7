import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 运动学逆解示例 ===")

pose1 = h10w.TcpPoseParams()
pose1.type = h10w.CartIndex.LEFT_ARM
pose1.pose = [0.136454,0.893134,0.464522,-3.13688,0.00131278,2.56073]

pose2 = h10w.TcpPoseParams()
pose2.type = h10w.CartIndex.RIGHT_ARM
pose2.pose = [-0.142604,-0.816705,0.565089,-0.0752575,-3.05334,0.831717]

pose = [pose1, pose2]

reference_angles = [
    0.3,
    -0.6,
    0,
    1.95,
    0,
    0,
    0,
    -0.2,
    -0.2,
    0,
    1.5,
    0,
    0,
    0,
    -0.1,
    -0.1,
    0,
    0.3,
]
ret, joint_angles = h10w_params.inverseKinematics(pose, reference_angles, True)
if ret == 0:
    print("计算成功")
    print("    关节角:")
    for j in joint_angles:
        print("{}".format(j), end=" ")
    print()
else:
    print("计算失败")
