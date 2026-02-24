cmake_minimum_required(VERSION 3.8)
project(proximitty_checker)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(moveit_ros_planning REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

set(JOINT_STATE_PUB_TARGET ${PROJECT_NAME}_joint_state_pub)
set(DISTANCE_ESTIMATOR_TARGET ${PROJECT_NAME}_distance_estimator)

add_executable(${JOINT_STATE_PUB_TARGET} src/joint_state_pub.cpp)
set_target_properties(${JOINT_STATE_PUB_TARGET} PROPERTIES OUTPUT_NAME joint_state_pub)
ament_target_dependencies(${JOINT_STATE_PUB_TARGET} rclcpp sensor_msgs)

add_executable(${DISTANCE_ESTIMATOR_TARGET} src/distance_estimator.cpp)
set_target_properties(${DISTANCE_ESTIMATOR_TARGET} PROPERTIES OUTPUT_NAME distance_estimator)
ament_target_dependencies(${DISTANCE_ESTIMATOR_TARGET}
  rclcpp
  sensor_msgs
  std_msgs
  geometry_msgs
  moveit_core
  moveit_msgs
  moveit_ros_planning
  moveit_ros_planning_interface
)

install(TARGETS
  ${JOINT_STATE_PUB_TARGET}
  ${DISTANCE_ESTIMATOR_TARGET}
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
