# Proximity Checker - A MVP for easing the pain of robot teaching

The end goal of this project is to provide an innovative solution when teaching robot in a confined small space. This MVP will publish the minimum distance and gives off alarms or slows the speed when a certain threshold of distance between robot and obstacle.

## Requirements
- it is assumed we have the CAD file for the work environment of robot.

## Build

TBD

## Run

### 1) Verify monitor joint-state stream
```bash
ros2 run proximitty_checker joint_state_pub \
  --ros-args -p joint_state_topic:=/joint_state_broadcaster/joint_states
```

### 2) Run distance estimator (RV-7FRL MVP)
```bash
ros2 run proximitty_checker distance_estimator --ros-args \
  -p joint_state_topic:=/joint_state_broadcaster/joint_states \
  -p robot_description:=robot_description \
  -p world_frame:=world \
  -p warn_threshold_m:=0.12 \
  -p stop_threshold_m:=0.06
```

### 3) Observe outputs
- `~/minimum_distance` (`std_msgs/Float32`)
- `~/warning_level` (`std_msgs/String`: `OK`, `WARN`, `STOP`, `STALE`)

## MVP scope (current)
- Robot model: `rv7frl`
- Input source during teaching: `melfa_monitor` joint states via `/joint_state_broadcaster/joint_states`
- Collision scope: robot vs environment only
- Environment model for MVP: static geometry added directly to Planning Scene

For this MVP, adding geometry directly to the Planning Scene is sufficient to validate warning-distance and alarming hypotheses quickly. As the project matures, the geometry injection can be replaced by CAD/mesh loading and fixture presets.

## Notes on tunability
All core behavior is parameterized for fast iteration during testing:
- thresholds (`warn_threshold_m`, `stop_threshold_m`)
- update loop (`eval_rate_hz`)
- stale timeout (`stale_timeout_sec`)
- obstacle box dimensions/pose (`obstacle_*`)
