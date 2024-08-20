cmake_minimum_required(VERSION 3.10)

# Set the project name and specify C++ standard
project(YourProjectName)

# Specify the C++ standard explicitly
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Explicitly link the standard C++ library
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -lstdc++")

# Add an executable
add_executable(YourExecutableName main.cpp)
