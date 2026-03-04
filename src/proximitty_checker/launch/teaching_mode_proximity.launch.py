from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import FindExecutable


def generate_launch_description():
    robot_urdf_path = LaunchConfiguration("robot_urdf_path")
    robot_srdf_path = LaunchConfiguration("robot_srdf_path")

    # Raw topic from driver / joint_state_broadcaster
    joint_state_topic = LaunchConfiguration("joint_state_topic")

    # Renamed topic used by robot_state_publisher + distance_estimator
    renamed_joint_state_topic = LaunchConfiguration("renamed_joint_state_topic")

    use_rviz = LaunchConfiguration("use_rviz")

    # FIX: use FindExecutable + no trailing-space bug
    robot_description = ParameterValue(
        Command([FindExecutable(name="xacro"), " ", robot_urdf_path]),
        value_type=str
    )
    robot_description_semantic = ParameterValue(
        Command([FindExecutable(name="xacro"), " ", robot_srdf_path]),
        value_type=str
    )

    proximity_params = PathJoinSubstitution([
        FindPackageShare("proximitty_checker"),
        "config",
        "proximity_params.yaml",
    ])

    # 1) Rename joint_1..joint_6 -> rv7frl_joint_1..rv7frl_joint_6
    joint_state_renamer_node = Node(
        package="proximitty_checker",
        executable="joint_renamer",
        name="joint_renamer",
        output="screen",
        parameters=[{
            "input_topic": joint_state_topic,
            "output_topic": renamed_joint_state_topic,
        }],
    )

    # 2) robot_state_publisher should consume the RENAMED topic
    rsp_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="screen",
        parameters=[{"robot_description": robot_description}],
        remappings=[("/joint_states", renamed_joint_state_topic)],
    )

    # 3) distance_estimator should also consume the RENAMED topic
    proximity_node = Node(
        package="proximitty_checker",
        executable="distance_estimator",
        name="distance_estimator",
        output="screen",
        parameters=[
            proximity_params,
            {
                "joint_state_topic": renamed_joint_state_topic,
                "robot_urdf_path": robot_urdf_path,
                "robot_srdf_path": robot_srdf_path,
                "robot_description_xml": robot_description,
                "robot_description_semantic_xml": robot_description_semantic,
                "robot_description": "robot_description",
                "robot_description_semantic": "robot_description_semantic",
                "world_frame": "world",
                "obstacle_mesh_resource": "package://proximitty_checker/meshes/obstacle.stl",
				"use_mesh_obstacle": True,
				"obstacle_mesh_scale": 0.001, #mm -> meter for environment CAD models
            },
        ],
    )

    # FIX: pass robot_description + robot_description_semantic into RViz
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        condition=IfCondition(use_rviz),
        parameters=[
            {"robot_description": robot_description},
            {"robot_description_semantic": robot_description_semantic},
        ],
    )

    return LaunchDescription([
        DeclareLaunchArgument("robot_urdf_path", description="Absolute path to local URDF/Xacro file."),
        DeclareLaunchArgument("robot_srdf_path", description="Absolute path to local SRDF/Xacro file."),
        DeclareLaunchArgument("joint_state_topic", default_value="/joint_state_broadcaster/joint_states"),
        DeclareLaunchArgument("renamed_joint_state_topic", default_value="/joint_states_renamed"),
        DeclareLaunchArgument("use_rviz", default_value="false"),

        joint_state_renamer_node,
        rsp_node,
        proximity_node,
        rviz_node,
    ])
