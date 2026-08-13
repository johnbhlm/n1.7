"""Shared client/server transition-mode mapping."""


def server_transition_mode(local_mode: str) -> str:
    mode = str(local_mode).strip().lower()
    return "none" if mode in {"latency_bezier", "latency_nearest"} else mode
