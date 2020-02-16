cmake_minimum_required(VERSION 3.15)

# Set the project name
project(ch04)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Executable
add_executable(${PROJECT_NAME}_app main.cpp)

# Libraries
add_library(${PROJECT_NAME}_collector src1.cpp)
add_library(${PROJECT_NAME}_algo src2.cpp)
add_library(${PROJECT_NAME}_engine src3.cpp)
add_library(${PROJECT_NAME}_ui src4.cpp)

# Library and app dependencies
target_link_libraries(${PROJECT_NAME}_collector
	PUBLIC ${PROJECT_NAME}_ui
	PRIVATE ${PROJECT_NAME}_algo ${PROJECT_NAME}_engine
)
target_link_libraries(${PROJECT_NAME}_app
	PRIVATE ${PROJECT_NAME}_collector
)
# Also build the app into the phony chapter target
add_custom_target(${PROJECT_NAME}
	DEPENDS
	${PROJECT_NAME}_app
	)
