# Introduction

Why use CMake?
* It is cross-platform
* It is modern
* It stores your dependencies
* You can visualize your dependencies

Note: For all of these slides, I am using CMake 3.16, the latest stable release from [](https://cmake.org/download/)

---
# Generators [5m]

Compare Ninja and make (single-config generators), MSVC (multi-configuration generator)
Makefile vs CMake
* Keeping source directory clean

Ninja vs. Makefiles:
* Speed

---
# Targets [5m]

Target types
* Normal: STATIC_LIBRARY, MODULE_LIBRARY, SHARED_LIBRARY, EXECUTABLE
* Internal: UTILITY, etc.

---
# Simple example project [5m]
Add a library

---
# Viewing dependencies [10m]

## Show the graph

Note: Version 3.17 will have the `GRAPHVIZ_CUSTOM_TARGETS` flag available, which can be super useful for the `add_custom_command(...)` and `add_custom_target(...)` commands

## Promote my script

---
# Generators

Configurations
* Default options are Release, Debug, RelWithDebInfo, and MinSizeRel
* Single-configuration generators (Ninja, GNU Make) have the CMAKE_BUILD_TYPE specified at configuration time
* Multi-config generators (Visual Studio, Xcode) have the CMAKE_BUILD_TYPE specified at compile time

---
# Replacing bash/python scripts with CMake
`cmake -E`

Available commands:
* `compare_files`
* `copy`
* `copy_directory`
* `copy_if_different`
* `echo`
* `env`
* `make_directory`
* `md5sum`
* `remove`
* `remove_directory`
* `rename`
* `tar`
* `time`
* `touch`

---
# Best practices


Do not define or call a function or macro with a name that starts with a single underscore

Lists and strings:
```cmake
set(_stringName "strings can have spaces")
list(JOIN _listAsAString " " _listName)
```


Custom commands and targets:
```cmake
separate_arguments(_command NATIVE_COMMAND "ls -al ${dir} && df -hT")
```

Links:
YouTube:
135 Craig Scott "Deep CMake for Library Authors"


---
# References

Links and Images:
* (YouTube vector-of-bool How to CMake good:)[https://www.youtube.com/playlist?list=PLK6MXr8gasrGmIiSuVQXpfFuE1uPT615s]
* https://www.youtube.com/watch?v=mn1ZnO3MtVk
* https://subscription.packtpub.com/book/application_development/9781788470711/4/ch04lvl1sec51/testing-expected-failures
* https://crascit.com/professional-cmake/
* https://crascit.com/wp-content/uploads/2018/07/front-cover-794x1123-724x1024.png
* https://crascit.com/wp-content/uploads/2018/07/front-cover-794x1123.png
* https://crascit.com/wp-content/uploads/2019/09/Deep-CMake-For-Library-Authors-Craig-Scott-CppCon-2019.pdf
* https://crascit.com/wp-content/uploads/2019/12/ProfessionalCMake_5th_Edition_sample.pdf

---
Questions to answer:
https://cmake.org/cmake/help/latest/command/target_link_libraries.html#cyclic-dependencies-of-static-libraries
* You can only build cycles of static libs, none can be shared or executables (WHY?)
* add_custom_command vs. add_custom_target
* Will run recursively if building a cycle?
