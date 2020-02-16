# Per-target properties

## Link Libraries
`target_link_libraries(target <TYPE> items)`

**TYPE**:
* PRIVATE : `LINK_LIBRARIES`
* INTERFACE : `INTERFACE_LINK_LIBRARIES`
* PUBLIC : both


## Link Options
`target_link_options(target [BEFORE] <TYPE> items)`

**TYPE**:
* PRIVATE : `LINK_OPTIONS`
* INTERFACE : `INTERFACE_LINK_OPTIONS`
* PUBLIC : both


## Include Directories
`target_include_directories(target [BEFORE] [SYSTEM] <TYPE> items)`

**TYPE**:
* PRIVATE : `INCLUDE_DIRECTORIES`
* INTERFACE : `INTERFACE_INCLUDE_DIRECTORIES`
* PUBLIC : both


## Compile Definitions
`target_compile_definitions(target <TYPE> items)`

**TYPE**:
* PRIVATE : `COMPILE_DEFINITIONS`
* INTERFACE : `INTERFACE_COMPILE_DEFINITIONS`
* PUBLIC : both


## Compile Options
`target_compile_options(target <TYPE> items)`

**TYPE**:
* PRIVATE : `COMPILE_OPTIONS`
* INTERFACE : `INTERFACE_COMPILE_OPTIONS`
* PUBLIC : both

# Compiler and linker flags

Important variables:
* `CMAKE_<LANG>_FLAGS`
* `CMAKE_<LANG>_FLAGS_<CONFIG>`
* `CMAKE_<TARGETTYPE>_FLAGS`
* `CMAKE_<TARGETTYPE>_FLAGS_<CONFIG>`

**CONFIG**:
* `DEBUG`
* `RELEASE`
* `RELWITHDEBINFO`
* `MINSIZEREL`

**LANG** (for compiler flags):
* `C`
* `CXX`
* `FORTRAN`
* ...

**TARGETTYPE** (for linker flags):
* `EXE` : Targets created with `add_executable(...)`
* `STATIC` : Targets created with `add_library(target STATIC ...)`
* `SHARED` : Targets created with `add_library(target SHARED ...)`
* `MODULE` : Targets created with `add_library(target MODULE ...)`

## For C++:
* CMAKE_CXX_FLAGS_DEBUG = `-g`
* CMAKE_CXX_FLAGS_RELEASE = `-O3 -DNDEBUG`
* CMAKE_CXX_FLAGS_RELWITHDEBINFO = `-O2 -g -DNDEBUG`
* CMAKE_CXX_FLAGS_MINSIZEREL = `-Os -DNDEBUG`

# Adding to flags
`string(APPEND CMAKE_CXX_FLAGS " -Wall -Werror")`

# NOTE:
Without the FORCE keyword, the set() command only updates a cache variable if it is not already defined.<Paste>
