#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time


def main():
    print("=== LRCU State Reading Test ===")

    # Initialize low level object
    low_level = h10w.H10wLowLevel()

    # Read LRCU state for 10 seconds
    DURATION_MS = 10000
    READ_INTERVAL_MS = 500
    read_count = DURATION_MS // READ_INTERVAL_MS

    for i in range(read_count):
        start_time = time.time()

        # Read LRCU state
        ret, lrcu_state = low_level.readLrcuState()
        if ret != 0:
            print("Failed to read LRCU state!")
            return -1

        # Print LRCU state information
        print(f"=== LRCU State Reading {i + 1} ===")
        print(f"Mode: {lrcu_state.mode}")
        print(f"LED Mode: {lrcu_state.led_mode}")
        print(f"LED Frequency: {lrcu_state.led_frequency}")
        print(f"LED Color - R: {lrcu_state.led_r}, G: {lrcu_state.led_g}, B: {lrcu_state.led_b}")
        print()

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = READ_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("LRCU state reading test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
