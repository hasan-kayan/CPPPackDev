cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

# Add the source files
add_executable(MyProject src/main.cpp src/ProjectManager.cpp)
