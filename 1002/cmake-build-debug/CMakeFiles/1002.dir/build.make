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
CMAKE_SOURCE_DIR = F:\project\51node\1002

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\project\51node\1002\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1002.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1002.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1002.dir/flags.make

CMakeFiles/1002.dir/main.cpp.obj: CMakeFiles/1002.dir/flags.make
CMakeFiles/1002.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\project\51node\1002\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1002.dir/main.cpp.obj"
	E:\MinGw\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1002.dir\main.cpp.obj -c F:\project\51node\1002\main.cpp

CMakeFiles/1002.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1002.dir/main.cpp.i"
	E:\MinGw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\project\51node\1002\main.cpp > CMakeFiles\1002.dir\main.cpp.i

CMakeFiles/1002.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1002.dir/main.cpp.s"
	E:\MinGw\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\project\51node\1002\main.cpp -o CMakeFiles\1002.dir\main.cpp.s

CMakeFiles/1002.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/1002.dir/main.cpp.obj.requires

CMakeFiles/1002.dir/main.cpp.obj.provides: CMakeFiles/1002.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\1002.dir\build.make CMakeFiles/1002.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/1002.dir/main.cpp.obj.provides

CMakeFiles/1002.dir/main.cpp.obj.provides.build: CMakeFiles/1002.dir/main.cpp.obj


# Object files for target 1002
1002_OBJECTS = \
"CMakeFiles/1002.dir/main.cpp.obj"

# External object files for target 1002
1002_EXTERNAL_OBJECTS =

1002.exe: CMakeFiles/1002.dir/main.cpp.obj
1002.exe: CMakeFiles/1002.dir/build.make
1002.exe: CMakeFiles/1002.dir/linklibs.rsp
1002.exe: CMakeFiles/1002.dir/objects1.rsp
1002.exe: CMakeFiles/1002.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\project\51node\1002\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1002.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1002.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1002.dir/build: 1002.exe

.PHONY : CMakeFiles/1002.dir/build

CMakeFiles/1002.dir/requires: CMakeFiles/1002.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/1002.dir/requires

CMakeFiles/1002.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1002.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1002.dir/clean

CMakeFiles/1002.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\project\51node\1002 F:\project\51node\1002 F:\project\51node\1002\cmake-build-debug F:\project\51node\1002\cmake-build-debug F:\project\51node\1002\cmake-build-debug\CMakeFiles\1002.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1002.dir/depend

