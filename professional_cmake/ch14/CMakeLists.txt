cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Debug)

# Set the project name
project(Ch14)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Add several different libraries and executables
add_library(${PROJECT_NAME}_lib1 lib.cpp)
add_executable(${PROJECT_NAME}_app1 app.cpp)

# Link the library to the executable
target_link_libraries(${PROJECT_NAME}_app1 ${PROJECT_NAME}_lib1)
