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

# Show everything that happened to var1
variable_watch(var1)

# Set and unset variables
set(var1 "one")
message(NOTICE "var1 is set (${var1})")
unset(var1)
message(NOTICE "var1 is unset (${var1})")

# Set as a cache variable
set(cachedSetString "cached string value" CACHE STRING "Cached string")
set(cachedSetBool ON CACHE BOOL "Cached bool")
set(cachedSetFile /tmp/non-existant/cached/file CACHE FILEPATH "Cached file")

# Set an option (always bool)
option(cachedOptionBool "Cached option (always bool)" ON)

# Show available options
set(trafficLight Green CACHE STRING "Status of something")
set_property(CACHE trafficLight PROPERTY STRINGS Red Orange Green)

# String commands
set(stringToSearch "A bc bcA abc Cba Bac A Bc a BCAB")
string(FIND ${stringToSearch} "a" indexForward)
string(FIND ${stringToSearch} "a" indexReverse REVERSE)
message("In string '${stringToSearch}', first 'a' is at index ${indexForward} and last one is at index ${indexReverse}")
string(REPLACE "b" "X" stringAfterReplace ${stringToSearch})
message("After REPLACE: ${stringAfterReplace}")
string(REGEX REPLACE "[cC]" "Y" stringAfterRegex ${stringToSearch})
message("After REGEX REPLACE: ${stringAfterRegex}")
# Also SUBSTRING, LENGTH, TOLOWER, TOUPPER, and STRIP
