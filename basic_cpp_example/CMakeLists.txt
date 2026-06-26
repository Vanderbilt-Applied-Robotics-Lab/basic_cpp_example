cmake_minimum_required(VERSION 3.8)
project(basic_cpp_example)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

## INCLUDE(S)
include_directories(include)

# executables
add_executable(simple_robot src/simple_robot.cpp)

# installs
install(TARGETS simple_robot
  DESTINATION lib/${PROJECT_NAME})

ament_package()
