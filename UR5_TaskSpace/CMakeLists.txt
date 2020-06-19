cmake_minimum_required(VERSION 3.5)
project(ur_rtde_cmake_example)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(ur_rtde REQUIRED)
add_executable(ur_rtde_cmake_example main.cpp)
target_link_libraries(ur_rtde_cmake_example PRIVATE ur_rtde::rtde)

