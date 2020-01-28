cmake_minimum_required(VERSION 3.15)

# Set the project name
project(Ch05)

# Set a variable
set(myVariableName "myVariableValue")

# Show different levels of messages
message(TRACE "TRACE myVariableName = ${myVariableName}")
message(DEBUG "DEBUG myVariableName = ${myVariableName}")
message(VERBOSE "VERBOSE myVariableName = ${myVariableName}")
message(STATUS "STATUS myVariableName = ${myVariableName}")
message(NOTICE "NOTICE myVariableName = ${myVariableName}") # default
#message(DEPRECATION "message DEPRECATION myVariableName = ${myVariableName}")
#message(AUTHOR_WARNING "message AUTHOR_WARNING myVariableName = ${myVariableName}")
#message(WARNING "message WARNING myVariableName = ${myVariableName}")
#message(SEND_ERROR "message SEND_ERROR myVariableName = ${myVariableName}")
#message(FATAL_ERROR "message FATAL_ERROR myVariableName = ${myVariableName}")

# Set and unset variables
set(var1 "one")
message(NOTICE "var1 is set (${var1})")
unset(var1)
message(NOTICE "var1 is unset (${var1})")

# Save as a cache variable
set(cachedString "cached string value" CACHE STRING "Cached string")
set(cachedBool ON CACHE BOOL "Cached bool")
set(cachedFile /tmp/non-existant/cached/file CACHE FILEPATH "Cached file")
