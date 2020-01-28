cmake_minimum_required(VERSION 3.15)

# Set the project name
project(Ch04)

# Executable
add_executable(myApp main.cpp)

# Libraries
add_library(collector src1.cpp)
add_library(algo src2.cpp)
add_library(engine src3.cpp)
add_library(ui src4.cpp)

# Library and app dependencies
target_link_libraries(collector
	PUBLIC ui
	PRIVATE algo engine
)
target_link_libraries(myApp
	PRIVATE collector
)
