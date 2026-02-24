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

add_executable(joint_state_pub src/joint_state_pub.cpp)
ament_target_dependencies(joint_state_pub
  rclcpp
  sensor_msgs
)

add_executable(distance_estimator src/distance_estimator.cpp)
ament_target_dependencies(distance_estimator
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
  joint_state_pub
  distance_estimator
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
