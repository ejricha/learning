cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Debug)

# Set the project name
project(ch17)
message("\n\n[Project ${PROJECT_NAME}]\n")

# Shortcut to cmake -E commands
set(RUN ${CMAKE_COMMAND} -E)
set(RUN_ECHO ${CMAKE_COMMAND} -E echo)
set(RUN_MKDIR ${CMAKE_COMMAND} -E make_directory)

# Helper function to add custom targets and commands
function(TargetHelper target file)
	message("Target ${target} will produce file ${file}")
	set(note "Appending date to ${file}")
	add_custom_command(OUTPUT ${file}
		COMMAND ${RUN_ECHO} ${note}
		COMMAND echo "${file}" >> ${file}
		COMMAND date >> ${file}
		COMMAND echo >> ${file}
		COMMENT ${note}
		)
	add_custom_target(${target} ALL
		DEPENDS ${file}
		)
endfunction()

# Create some custom targets using the helper function above
TargetHelper(${PROJECT_NAME}_print_1_always out1.log)

# Create some custom targets using the helper function above
TargetHelper(${PROJECT_NAME}_print_2_in_subdirectory out2_subdir/out2.log)

# This target build in subdir, but clean up properly
set(target ${PROJECT_NAME}_print_3_and_clean_up_working_directory)
set(dir out3_subdir)
set(file out3_and_clean_up_working_directory.log)
message("Target ${target} will produce file ${file} in dir ${dir}")
set(note "Appending date to ${file} in ${dir}")
add_custom_command(OUTPUT ${dir}/${file}
	COMMAND ${RUN_ECHO} ${note}
	COMMAND ${RUN_MKDIR} ${dir}
	COMMAND echo "${dir}/${file}" >> ${dir}/${file}
	COMMAND date >> ${dir}/${file}
	COMMAND echo >> ${dir}/${file}
	BYPRODUCTS ${dir}
	COMMENT ${note}
	)
add_custom_target(${target} ALL
	DEPENDS ${dir}/${file}
	)

# Only run the print_1_always target by default
add_custom_target(${PROJECT_NAME} ALL
	DEPENDS ${PROJECT_NAME}_print_1_always
	)
