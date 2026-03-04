



# Proximity Checker - A MVP for easing the pain of robot teaching

The end goal of this project is to provide an innovative solution when teaching robot in a confined small space. This MVP will publish the minimum distance and gives off alarms or slows the speed when a certain threshold of distance between robot and obstacle.

## Requirements
- it is assumed we have the CAD file for the work environment of robot. 

## Build

TBD

## Run

### Terminal 1 
```bash
ros2 launch melfa_mon_bringup monitor_control.launch.py controller_type:="D" robot_ip:=192.168.0.50 packet_lost_log:=0

```

change the robot_ip to the actual robot controller ip address, in the same local network. 

### Terminal 2 

```bash 
ros2 launch proximitty_checker teaching_mode_proximity.launch.py   robot_urdf_path:=/home/melco/sho/proximity_check_mvp/src/melfa_description/urdf/rv7frl/rv7frl_mvp.urdf   robot_srdf_path:=/home/melco/sho/proximity_check_mvp/src/melfa_moveit_config/melfa_rv7frl_moveit_config/config/rv7frl.srdf   joint_state_topic:=/joint_state_broadcaster/joint_states   use_rviz:=true 
```

The two path for urdf and srdf needs to be set to if you are installing in another computer

You will RViz window start up after this command. 
1. Set the frame from map to world.
2. Add a PlanningScene from GUI. 



