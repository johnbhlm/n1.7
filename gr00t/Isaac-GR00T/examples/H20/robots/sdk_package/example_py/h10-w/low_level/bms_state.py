#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time


def main():
    print("=== BMS State Reading Test ===")

    # Initialize low level object
    low_level = h10w.H10wLowLevel()

    # Read BMS state for 10 seconds
    DURATION_MS = 10000
    READ_INTERVAL_MS = 1000
    read_count = DURATION_MS // READ_INTERVAL_MS

    for i in range(read_count):
        start_time = time.time()

        # Read BMS state
        ret, bms_state = low_level.readBmsState()
        if ret != 0:
            print("Failed to read BMS state!")
            return -1

        # Print BMS state information
        print(f"=== BMS State Reading {i + 1} ===")
        print(f"Power Mode: {bms_state.power_mode} ({'External' if bms_state.power_mode == 0 else 'Battery'})")
        charge_states = {0: "Invalid", 1: "Charging", 2: "Discharging", 3: "Idle"}
        print(f"Charge State: {bms_state.charge_state} ({charge_states.get(bms_state.charge_state, 'Unknown')})")
        print(f"SOC: {bms_state.soc:.1f}%")
        print()

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = READ_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("BMS state reading test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
