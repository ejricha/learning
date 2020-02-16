# Language standards

## Specify the C++ standard globally
```cmake
set(CMAKE_CXX_STANDARD 20) # C++20 requires CMake 3.12
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
```

## Specify the C++ standard for a target
```cmake
set_target_properties(target PROPERTIES
	CMAKE_CXX_STANDARD 20
	CMAKE_CXX_STANDARD_REQUIRED
	CMAKE_CXX_EXTENSIONS OFF
```

## Compile Features

Important variables:
* `CMAKE_<LANG>_KNOWN_FEATURES`
* `CMAKE_<LANG>_COMPILE_FEATURES`

**LANG**:
* `C`
* `CXX`
* `FORTRAN`
* ...

`target_compile_features(target <TYPE> <FEATURES>)`

**TYPE**:
* PRIVATE : `COMPILE_OPTIONS`
* INTERFACE : `INTERFACE_COMPILE_OPTIONS`
* PUBLIC : both

**FEATURES**:
* `<LANG>_std_<VERSION>` (e.g. `cxx_std_17`)

C++ features:
* `cxx_override` : The `override` keyword is available
* `cxx_final` : The `final` keyword is available
