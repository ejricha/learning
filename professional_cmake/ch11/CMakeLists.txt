cmake_minimum_required(VERSION 3.15)

# Old way to include Debug.cmake
#include(${CMAKE_SOURCE_DIR}/cmake/Debug.cmake)
# New way to include Debug.cmake
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Debug)

# Set the project name
project(Ch11)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Allow printing of variables/properties
ShowAllProperties()
