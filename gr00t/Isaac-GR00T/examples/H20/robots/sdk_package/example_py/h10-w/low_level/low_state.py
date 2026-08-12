#!/usr/bin/env python3

import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time


def main():
    print("=== Low State Reading Test ===")

    low_level = h10w.H10wLowLevel()

    DURATION_MS = 5000
    READ_INTERVAL_MS = 100
    read_count = DURATION_MS // READ_INTERVAL_MS

    for i in range(read_count):
        start_time = time.time()

        ret, low_state = low_level.readLowState()
        if ret != 0:
            print("Failed to read low state!")
            return -1

        print(f"=== Low State Reading {i + 1} ===")
        print(f"Version: {low_state.version[0]}.{low_state.version[1]}")
        print(f"Tick: {low_state.tick}")
        print(f"Data valid: {low_state.data_valid}")

        if low_state.data_valid > 0:
            j0 = low_state.joint_motor_state[0]
            print(
                "Joint 0 - Mode: {}, Op mode: {}, Enable: {}, "
                "Position: {}, Velocity: {}, Acceleration: {}, "
                "Torque: {}, Current: {}, Voltage: {}, "
                "Temp: [{}, {}], Kp: {}, Kd: {}, Error: {}, Warning: {}".format(
                    j0.mode,
                    j0.op_mode,
                    j0.enable_state,
                    j0.q,
                    j0.dq,
                    j0.ddq,
                    j0.tau_est,
                    j0.cur,
                    j0.vol,
                    j0.temp[0],
                    j0.temp[1],
                    j0.kp,
                    j0.kd,
                    j0.error_code,
                    j0.warning_code,
                )
            )

            w0 = low_state.wheel_motor_state[0]
            print(
                "Wheel 0 - Mode: {}, Op mode: {}, Enable: {}, "
                "Velocity: {}, Torque: {}, Current: {}, Voltage: {}, "
                "Temp: [{}, {}], Error: {}, Warning: {}".format(
                    w0.mode,
                    w0.op_mode,
                    w0.enable_state,
                    w0.v,
                    w0.tau_est,
                    w0.cur,
                    w0.vol,
                    w0.temp[0],
                    w0.temp[1],
                    w0.error_code,
                    w0.warning_code,
                )
            )

            imu = low_state.imu_state
            print(
                "IMU - Accel: [{}, {}, {}], Gyro: [{}, {}, {}], "
                "Temp: {}, Error: {}, Warning: {}".format(
                    imu.accelerometer[0],
                    imu.accelerometer[1],
                    imu.accelerometer[2],
                    imu.gyroscope[0],
                    imu.gyroscope[1],
                    imu.gyroscope[2],
                    imu.temp,
                    imu.error_code,
                    imu.warning_code,
                )
            )

        pcu = low_state.pcu_state
        print(
            "Power state: {}, Emergency stop: {}, Soft emergency stop: {}, "
            "Bumper[0]: {}, PCU Error: {}, PCU Warning: {}".format(
                pcu.power_state,
                pcu.emergency_stop_state,
                pcu.soft_emergency_stop_state,
                pcu.bumper_switch_state[0],
                pcu.error_code,
                pcu.warning_code,
            )
        )
        en = low_state.enable_state
        print(
            "Upper enable state: {}, Base enable state: {}".format(
                en.upper_enable_state,
                en.base_enable_state,
            )
        )
        print(f"Time seconds: {low_state.time_seconds}")
        print(f"Error code: {low_state.error_code}")
        print(f"Warning code: {low_state.warning_code}")
        print()

        elapsed_ms = (time.time() - start_time) * 1000.0
        sleep_ms = READ_INTERVAL_MS - elapsed_ms
        if sleep_ms > 0:
            time.sleep(sleep_ms / 1000.0)

    print("Low state reading test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
