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
