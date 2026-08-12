import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 获取机器人各软件的版本号示例 ===")
ret, version = h10w_system.getRobotVersion()

print("Robot Driver Version: ", version.driver_version.driver_version)
print("Robot Firmware Version: ", version.driver_version.firmware_version)

print(
    "Robot Controller Version: ",
    version.controller_version.controller_version,
)
print(
    "Robot Algorithm Version: ",
    version.controller_version.algorithm_version,
)

print("Robot Monitor Main Version: ", version.monitor_version.main_version)
print("Robot Monitor Function Version: ")
for n, v in version.monitor_version.function_versions.items():
    print("\t", n, "version: ", v)
