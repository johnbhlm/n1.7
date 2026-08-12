from gr00t.configs.data.embodiment_configs import register_modality_config
from gr00t.data.embodiment_tags import EmbodimentTag
from gr00t.data.types import (
    ActionConfig,
    ActionFormat,
    ActionRepresentation,
    ActionType,
    ModalityConfig,
)

ACTION_HORIZON = 32

h20_config = {
    "video": ModalityConfig(
        delta_indices=[0],
        modality_keys=[
            "primary_image",
            "left_camera_image",
            "right_camera_image",
        ],
    ),
    "state": ModalityConfig(
        delta_indices=[0],
        modality_keys=[
            "left_observation_state",
            "left_gripper_state",
            "right_observation_state",
            "right_gripper_state",
        ],
    ),

    "action": ModalityConfig(
    delta_indices=list(range(0, ACTION_HORIZON)),
    modality_keys=[
        "left_joint_action",
        "left_gripper",
        "right_joint_action",
        "right_gripper",
    ],
    action_configs=[
        ActionConfig(
            rep=ActionRepresentation.RELATIVE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="left_observation_state",
        ),
        ActionConfig(
            rep=ActionRepresentation.ABSOLUTE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="left_gripper_state",
        ),
        ActionConfig(
            rep=ActionRepresentation.RELATIVE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="right_observation_state",
        ),
        ActionConfig(
            rep=ActionRepresentation.ABSOLUTE,
            type=ActionType.NON_EEF,
            format=ActionFormat.DEFAULT,
            state_key="right_gripper_state",
        ),
    ],
),
    "language": ModalityConfig(
        delta_indices=[0],
        modality_keys=[
            "annotation.human.action.task_description",
        ],
    ),
}

register_modality_config(
    h20_config,
    embodiment_tag=EmbodimentTag.NEW_EMBODIMENT,
)