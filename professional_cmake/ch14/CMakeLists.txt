cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Debug)

# Set the project name
project(ch14)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Add several different libraries and executables
add_library(${PROJECT_NAME}_lib0 lib.cpp)
add_library(${PROJECT_NAME}_lib1 lib.cpp)
add_library(${PROJECT_NAME}_lib2 lib.cpp)
add_library(${PROJECT_NAME}_lib3 lib.cpp)
add_executable(${PROJECT_NAME}_app0 app.cpp)
add_executable(${PROJECT_NAME}_app1 app.cpp)
add_executable(${PROJECT_NAME}_app2 app.cpp)
add_executable(${PROJECT_NAME}_app3 app.cpp)

# Modify the compile/link options for some things

# lib1/app1
set_target_properties(${PROJECT_NAME}_lib1
	PROPERTIES
	COMPILE_DEFINITIONS MESSAGE="lib1"
	)

# lib2/app2
set_target_properties(${PROJECT_NAME}_lib2
	PROPERTIES
	COMPILE_DEFINITIONS MESSAGE="lib2"
	)
set_target_properties(${PROJECT_NAME}_app2
	PROPERTIES
	COMPILE_DEFINITIONS MESSAGE="app2 overrides lib2"
	LINK_OPTIONS LINKER:-stats
	)

# lib3/app3
set_target_properties(${PROJECT_NAME}_lib3
	PROPERTIES
	COMPILE_DEFINITIONS MESSAGE="lib3"
	)
set_target_properties(${PROJECT_NAME}_app2
	PROPERTIES
	COMPILE_DEFINITIONS MESSAGE="app3 from generic set_target_properties"
	LINK_OPTIONS LINKER:-stats
	)
target_compile_definitions(${PROJECT_NAME}_lib3
	PRIVATE
	MESSAGE="lib3 from target_compile_definitions"
	)
target_compile_definitions(${PROJECT_NAME}_app3
	PRIVATE
	MESSAGE="app3 from target_compile_definitions"
	)

# Link the library to the executable
target_link_libraries(${PROJECT_NAME}_app0 ${PROJECT_NAME}_lib0)
target_link_libraries(${PROJECT_NAME}_app1 ${PROJECT_NAME}_lib1)
target_link_libraries(${PROJECT_NAME}_app2 ${PROJECT_NAME}_lib2)
target_link_libraries(${PROJECT_NAME}_app3 ${PROJECT_NAME}_lib3)

# Also build all the apps into the phony ch14 target
add_custom_target(${PROJECT_NAME}
	DEPENDS
	${PROJECT_NAME}_app0
	${PROJECT_NAME}_app1
	${PROJECT_NAME}_app2
	${PROJECT_NAME}_app3
	)
