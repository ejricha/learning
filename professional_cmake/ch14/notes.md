# Notes

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
