cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Debug)

# Set the project name
project(ch15)

message("\n\n[Project ${PROJECT_NAME}]\n")

# Generate the compiler detection header
include(WriteCompilerDetectionHeader)
write_compiler_detection_header(
	FILE compiler_detection.h
	PREFIX ${PROJECT_NAME}
	COMPILERS GNU Clang
	FEATURES
		cxx_override
		cxx_final
		cxx_nullptr
		cxx_rvalue_references
	)
