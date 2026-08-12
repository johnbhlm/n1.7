cmake_minimum_required(VERSION 3.10)
project(vla)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(unique_identifier_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(rosidl_default_runtime REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  # visual_localization 模块接口
  "visual_localization/action/ActionVLA.action"
  "visual_localization/action/ResetVLA.action"
  "visual_localization/srv/GetHandState.srv"
  "visual_localization/srv/DebugSaveCameraImage.srv"
  DEPENDENCIES std_msgs sensor_msgs action_msgs unique_identifier_msgs
)

# 确保 Python 支持被生成
rosidl_get_typesupport_target(cmake_target
  ${PROJECT_NAME} "rosidl_typesupport_c"
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_cppcheck_FOUND TRUE)  # 跳过cppcheck
  ament_lint_auto_find_test_dependencies()
  endif()
endif()

# 依赖
ament_export_dependencies(rosidl_default_runtime)

# 安装 Python 模块
install(
  DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_py/${PROJECT_NAME}
  DESTINATION lib/python3.10/site-packages/${PROJECT_NAME}
)

ament_package()
