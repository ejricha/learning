cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
include(${CMAKE_SOURCE_DIR}/cmake/Debug.cmake)

# Set the project name
project(ch10)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Don't actually build obj_lib.so/.a
add_library(${PROJECT_NAME}_obj_lib OBJECT src1.cpp src2.cpp)

# Define two executables which each have their own source
# file as well as the object files from obj_lib
add_executable(${PROJECT_NAME}_app1 app1.cpp $<TARGET_OBJECTS:${PROJECT_NAME}_obj_lib>)
add_executable(${PROJECT_NAME}_app2 app2.cpp $<TARGET_OBJECTS:${PROJECT_NAME}_obj_lib>)

# Uncomment to show a lot of info
#ShowAllProperties()

# Also build all the apps into the phony chapter target
add_custom_target(${PROJECT_NAME}
	DEPENDS
	${PROJECT_NAME}_app1
	${PROJECT_NAME}_app2
	)
