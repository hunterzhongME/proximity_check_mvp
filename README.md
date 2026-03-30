# Proximity Checker — MVP for Easing the Pain of Robot Teaching

## Overview

Teaching robots in confined spaces is risky — a small misjudgement can cause the manipulator to collide with nearby walls, equipment, or fixtures. **Proximity Checker** is a minimum-viable-product (MVP) safety layer that monitors the distance between a Mitsubishi MELFA robot and its surrounding obstacles in real time.

**What it does:**

- Continuously computes the minimum distance between the robot and known obstacles (from a CAD/STL model) at 20 Hz.
- Publishes the distance on a ROS 2 topic so downstream systems can react.
- Issues a **warning** when the distance drops below a configurable threshold (default 0.12 m).
- Issues a **critical alert** when the distance drops below a second threshold (default 0.06 m), enabling an emergency stop.

**What problem it solves:**

During manual teaching in a tight workspace, operators currently have no automated way to know how close the robot is to its surroundings. This MVP fills that gap by providing real-time proximity feedback, reducing the risk of collisions and damage.

## Requirements

| Category | Details |
|---|---|
| **OS** | Ubuntu 22.04 (or compatible) |
| **ROS 2** | Humble (or compatible ROS 2 distribution) |
|**Robot Controller**| CR800 series |
| **Network** | The PC running this stack must be on the same local network as the MELFA robot controller or RT ToolBox3 PC|

## Steps to Run

### 1. Build the workspace

```bash
cd proximity_check_mvp
colcon build --symlink-install
source install/setup.bash
```

### 2. Launch the robot monitor (Terminal 1)

Before you launch the monitor, turn ON the robot controller/RT ToolBox3 simulator, and ensure the robot controller in in the same local network as the Ubuntu PC.

```bash
ros2 launch melfa_mon_bringup monitor_control.launch.py \
  controller_type:="D" \
  robot_ip:=192.168.0.50 \
  packet_lost_log:=0
```

> Change `robot_ip` to the actual IP address of your MELFA robot controller on the local network.

### 3. Launch the proximity checker (Terminal 2)

```bash
source install/setup.bash

ros2 launch proximitty_checker teaching_mode_proximity.launch.py \
  robot_urdf_path:=<absolute_path_to>/src/melfa_description/urdf/rv7frl/rv7frl_mvp.urdf \
  robot_srdf_path:=<absolute_path_to>/src/melfa_moveit_config/melfa_rv7frl_moveit_config/config/rv7frl.srdf \
  joint_state_topic:=/joint_state_broadcaster/joint_states \
  use_rviz:=true
```

> Replace `<absolute_path_to>` with the actual absolute path to where you cloned this repository.

### 4. Configure RViz

After the RViz window opens:

1. Set the **Fixed Frame** from `map` to `world`.
2. Add a **PlanningScene** display from the RViz GUI to visualise the robot and obstacles.

