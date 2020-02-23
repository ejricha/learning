cmake_minimum_required(VERSION 3.15)

# Allow printing of variables/properties
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(Debug)

# Set the project name
project(ch17)

message("\n\n[Project ${PROJECT_NAME}]\n")

# Helper function to add targets
function(TargetHelper target file)
	message("Target ${target} will produce file ${file}")
	add_custom_target(${target} ALL
		COMMAND date >> ${file}
		COMMAND echo "From target ${target}" >> ${file}
		COMMAND echo >> ${file}
		BYPRODUCTS ${file}
		COMMENT "Appending date to ${file} from ${target}"
		)
endfunction()

# Create some custom targets using the helper function above
TargetHelper(${PROJECT_NAME}_print_1_always out1.log)

# Create some custom targets using the helper function above
TargetHelper(${PROJECT_NAME}_print_2_in_subdirectory out2_subdir/out2.log)

# Add another target without specifying the byproducts
set(target ${PROJECT_NAME}_print_3_without_byproduct)
set(file out3_without_byproduct.log)
add_custom_target(${target} ALL
	COMMAND date >> ${file}
	COMMAND echo "From target ${target}" >> ${file}
	COMMAND echo >> ${file}
	COMMENT "Appending date to ${file} from ${target}, but wihout BYPRODUCTS"
	)

# This target build in subdir, but clean up properly
set(target ${PROJECT_NAME}_print_4_and_clean_up_working_directory)
set(dir out4_subdir)
set(file out4_and_clean_up_working_directory.log)
add_custom_target(${target} ALL
	COMMAND date >> ${file}
	COMMAND echo "From target ${target}" >> ${file}
	COMMAND echo >> ${file}
	BYPRODUCTS ${dir}/${file}
	WORKING_DIRECTORY ${dir}
	COMMENT "Appending date to ${file} from ${target} in WORKING_DIRECTORY ${dir}"
	)
