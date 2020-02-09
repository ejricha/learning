cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
include(${CMAKE_SOURCE_DIR}/cmake/Debug.cmake)

# Set the project name
project(Ch10)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Don't actually build objLib.so/.a
add_library(objLib OBJECT src1.cpp src2.cpp)

# Define two executables which each have their own source
# file as well as the object files from objLib
add_executable(app1 app1.cpp $<TARGET_OBJECTS:objLib>)
add_executable(app2 app2.cpp $<TARGET_OBJECTS:objLib>)

ShowAllProperties()
