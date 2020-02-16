cmake_minimum_required(VERSION 3.15)

# Set the project name
project(ch05)
message("\n\n[Project ${PROJECT_NAME}]\n")

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

# List commands
set(myList a b c d e)
list(LENGTH myList myListLength)
list(GET myList 0 myListFirstElement)
list(GET myList 1 4 0 3 4 3 myListBeaded)
message("LIST myList (${myList})")
message("LIST has length ${myListLength}")
message("LIST element 0 = ${myListFirstElement}")
message("LIST elements out of order = ${myListBeaded}")
list(INSERT myList 2 x y z e d c b a X Y Z)
list(PREPEND myList BEGIN)
list(APPEND myList END)
message("LIST now (${myList})")
list(FIND myList e elementIndex)
message("LIST has 'e' at index ${elementIndex}")
list(REMOVE_DUPLICATES myList)
# Also REMOVE_ITEM and REMOVE_AT
message("LIST after duplicates removed (${myList})")
list(SORT myList)
message("LIST after sorting (${myList})")
# Also POP_FRONT, POP_BACK, and REVERSE

# Math functions
set(myX 30)
set(myY 40)
math(EXPR myZ "${myX}*${myX} + ${myY}*${myY}")
message("decimal = ${myZ}")
math(EXPR myZHex "${myX}*${myX} + ${myY}*${myY}" OUTPUT_FORMAT HEXADECIMAL)
message("hex = ${myZHex}")
# Valid operators: + - * / % | & ^ ~ << >> * / %
