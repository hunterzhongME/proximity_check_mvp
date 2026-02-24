# Proximity Checker - A MVP for easing the pain of robot teaching

The end goal of this project is to provide an innovative solution when teaching robot in a confined small space. This MVP will publish the minimum distance and gives off alarms or slows the speed when a certain threshold of distance between robot and obstacle.

## Requirements
- joint states are provided by `melfa_ros2_monitor` on `/joint_states`
- local robot model file (URDF or Xacro) is available during teaching mode
- CAD/environment geometry for collision checking (MVP currently uses direct Planning Scene primitive)

## Build

```bash
source /opt/ros/$ROS_DISTRO/setup.bash
colcon build --packages-select proximitty_checker
source install/setup.bash
```

If you build the full workspace and see the underlay override warning for `melfa_msgs`, use:

```bash
colcon build --allow-overriding melfa_msgs
```

## Driverless teaching-time mode (no melfa_ros2_driver)

This mode does not rely on an external `/robot_description` provider.
The proximity node loads robot description from either:
- `robot_urdf_path` (local URDF file), or
- `robot_description_xml` (expanded XML, used by launch when path is Xacro)

### Launch (recommended)
```bash
ros2 launch proximitty_checker teaching_mode_proximity.launch.py \
  robot_urdf_path:=/absolute/path/to/rv7frl.urdf.xacro \
  joint_state_topic:=/joint_states \
  use_rviz:=true
```

What this launch starts:
1. `robot_state_publisher` with local robot description generated from the file path
2. `distance_estimator` subscribed to `/joint_states`
3. Optional RViz

### If using Xacro
The launch file runs `xacro` and passes expanded XML into both nodes.
If preferred, you can pre-generate URDF manually:

```bash
xacro /absolute/path/to/rv7frl.urdf.xacro > /tmp/rv7frl.urdf
```

Then launch with `robot_urdf_path:=/tmp/rv7frl.urdf`.

## Outputs
- `~/minimum_distance` (`std_msgs/Float32`)
- `~/warning_level` (`std_msgs/String`: `OK`, `WARN`, `STOP`, `STALE`)

## Graceful checks
- invalid/missing URDF path => clear startup error and shutdown
- no fresh joint states => warning + `STALE` output state
- joint-name mismatch (`URDF` vs `/joint_states`) => warning log

## Config
Default parameters are in:
- `src/proximitty_checker/config/proximity_params.yaml`

You can override thresholds and obstacle pose/size quickly for experiments.
