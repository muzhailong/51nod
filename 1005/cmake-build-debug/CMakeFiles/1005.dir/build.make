# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\project\51node\1005

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\project\51node\1005\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1005.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1005.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1005.dir/flags.make

CMakeFiles/1005.dir/main.cpp.obj: CMakeFiles/1005.dir/flags.make
CMakeFiles/1005.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\project\51node\1005\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1005.dir/main.cpp.obj"
	E:\MinGw\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1005.dir\main.cpp.obj -c F:\project\51node\1005\main.cpp

CMakeFiles/1005.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1005.dir/main.cpp.i"
	E:\MinGw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\project\51node\1005\main.cpp > CMakeFiles\1005.dir\main.cpp.i

CMakeFiles/1005.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1005.dir/main.cpp.s"
	E:\MinGw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\project\51node\1005\main.cpp -o CMakeFiles\1005.dir\main.cpp.s

CMakeFiles/1005.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/1005.dir/main.cpp.obj.requires

CMakeFiles/1005.dir/main.cpp.obj.provides: CMakeFiles/1005.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\1005.dir\build.make CMakeFiles/1005.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/1005.dir/main.cpp.obj.provides

CMakeFiles/1005.dir/main.cpp.obj.provides.build: CMakeFiles/1005.dir/main.cpp.obj


# Object files for target 1005
1005_OBJECTS = \
"CMakeFiles/1005.dir/main.cpp.obj"

# External object files for target 1005
1005_EXTERNAL_OBJECTS =

1005.exe: CMakeFiles/1005.dir/main.cpp.obj
1005.exe: CMakeFiles/1005.dir/build.make
1005.exe: CMakeFiles/1005.dir/linklibs.rsp
1005.exe: CMakeFiles/1005.dir/objects1.rsp
1005.exe: CMakeFiles/1005.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\project\51node\1005\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1005.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1005.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1005.dir/build: 1005.exe

.PHONY : CMakeFiles/1005.dir/build

CMakeFiles/1005.dir/requires: CMakeFiles/1005.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/1005.dir/requires

CMakeFiles/1005.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1005.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1005.dir/clean

CMakeFiles/1005.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\project\51node\1005 F:\project\51node\1005 F:\project\51node\1005\cmake-build-debug F:\project\51node\1005\cmake-build-debug F:\project\51node\1005\cmake-build-debug\CMakeFiles\1005.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1005.dir/depend

