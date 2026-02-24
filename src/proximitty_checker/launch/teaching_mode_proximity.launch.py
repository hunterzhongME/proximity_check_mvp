from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():
    robot_urdf_path = LaunchConfiguration("robot_urdf_path")
    robot_srdf_path = LaunchConfiguration("robot_srdf_path")
    joint_state_topic = LaunchConfiguration("joint_state_topic")
    use_rviz = LaunchConfiguration("use_rviz")

    robot_description = ParameterValue(Command(["xacro ", robot_urdf_path]), value_type=str)
    robot_description_semantic = ParameterValue(Command(["xacro ", robot_srdf_path]), value_type=str)

    proximity_params = PathJoinSubstitution([
        FindPackageShare("proximitty_checker"),
        "config",
        "proximity_params.yaml",
    ])

    rsp_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="screen",
        parameters=[{"robot_description": robot_description}],
        remappings=[("/joint_states", joint_state_topic)],
    )

    proximity_node = Node(
        package="proximitty_checker",
        executable="distance_estimator",
        name="distance_estimator",
        output="screen",
        parameters=[
            proximity_params,
            {
                "joint_state_topic": joint_state_topic,
                "robot_urdf_path": robot_urdf_path,
                "robot_srdf_path": robot_srdf_path,
                "robot_description_xml": robot_description,
                "robot_description_semantic_xml": robot_description_semantic,
                "robot_description": "robot_description",
                "robot_description_semantic": "robot_description_semantic",
            },
        ],
    )

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        condition=IfCondition(use_rviz),
    )

    return LaunchDescription([
        DeclareLaunchArgument("robot_urdf_path", description="Absolute path to local URDF/Xacro file."),
        DeclareLaunchArgument("robot_srdf_path", description="Absolute path to local SRDF/Xacro file."),
        DeclareLaunchArgument("joint_state_topic", default_value="/joint_states"),
        DeclareLaunchArgument("use_rviz", default_value="false"),
        rsp_node,
        proximity_node,
        rviz_node,
    ])
