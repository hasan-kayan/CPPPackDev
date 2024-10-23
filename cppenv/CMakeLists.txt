cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(cppenv VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include)

# Add the executable
add_executable(cppenv src/cppenv.cpp src/LibraryManager.cpp src/CMakeManager.cpp)
