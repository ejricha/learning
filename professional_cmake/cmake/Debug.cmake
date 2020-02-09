# Debug.cmake
#
# Simple function to show all properties

# Show all properties
function(ShowAllProperties)
	get_cmake_property(_variables VARIABLES)
	PrintVariable("VARIABLES" "${_variables}")
	get_cmake_property(_cache_variables CACHE_VARIABLES)
	PrintVariable("CACHE_VARIABLES" "${_cache_variables}")
	get_cmake_property(_commands COMMANDS)
	PrintVariable("COMMANDS" "${_commands}")
	get_cmake_property(_macros MACROS)
	PrintVariable("MACROS" "${_macros}")
endfunction()

# Helper function to print the named variable
function(PrintVariable VariableName VariableValue)
	string(REPLACE ";" "\n    " _list "${VariableValue}")
	message(STATUS "Variable ${VariableName}:\n    ${_list}")
endfunction()
