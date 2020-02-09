cmake_minimum_required(VERSION 3.15)

# Set the project name
project(Ch09)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Allow us to easily print all properties
include(${CMAKE_SOURCE_DIR}/cmake/Debug.cmake)

# Show the properties before and after searching for boost
message(STATUS "Before:")
ShowAllProperties()
find_package(Boost)
message(STATUS)
message(STATUS "After:")
ShowAllProperties()

# Ways to set properties:
#  set_property()
#  get_property()
#  define_property()
#  get_cmake_property()
#  set_directory_properties()
#  get_directory_property()
#  set_target_properties()
#  get_target_property()
#  set_source_files_properties()
#  get_source_file_property()
#  set_tests_properties()
#  get_test_property()
