# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/newton/CLion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/newton/CLion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/newton/Programming/C/FahrenheitCelsiusFloat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FahrenheitCelsiusFloat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FahrenheitCelsiusFloat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FahrenheitCelsiusFloat.dir/flags.make

CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o: CMakeFiles/FahrenheitCelsiusFloat.dir/flags.make
CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o   -c /home/newton/Programming/C/FahrenheitCelsiusFloat/main.c

CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/newton/Programming/C/FahrenheitCelsiusFloat/main.c > CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.i

CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/newton/Programming/C/FahrenheitCelsiusFloat/main.c -o CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.s

CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.requires:

.PHONY : CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.requires

CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.provides: CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/FahrenheitCelsiusFloat.dir/build.make CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.provides.build
.PHONY : CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.provides

CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.provides.build: CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o


# Object files for target FahrenheitCelsiusFloat
FahrenheitCelsiusFloat_OBJECTS = \
"CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o"

# External object files for target FahrenheitCelsiusFloat
FahrenheitCelsiusFloat_EXTERNAL_OBJECTS =

FahrenheitCelsiusFloat: CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o
FahrenheitCelsiusFloat: CMakeFiles/FahrenheitCelsiusFloat.dir/build.make
FahrenheitCelsiusFloat: CMakeFiles/FahrenheitCelsiusFloat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FahrenheitCelsiusFloat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FahrenheitCelsiusFloat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FahrenheitCelsiusFloat.dir/build: FahrenheitCelsiusFloat

.PHONY : CMakeFiles/FahrenheitCelsiusFloat.dir/build

CMakeFiles/FahrenheitCelsiusFloat.dir/requires: CMakeFiles/FahrenheitCelsiusFloat.dir/main.c.o.requires

.PHONY : CMakeFiles/FahrenheitCelsiusFloat.dir/requires

CMakeFiles/FahrenheitCelsiusFloat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FahrenheitCelsiusFloat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FahrenheitCelsiusFloat.dir/clean

CMakeFiles/FahrenheitCelsiusFloat.dir/depend:
	cd /home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/newton/Programming/C/FahrenheitCelsiusFloat /home/newton/Programming/C/FahrenheitCelsiusFloat /home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug /home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug /home/newton/Programming/C/FahrenheitCelsiusFloat/cmake-build-debug/CMakeFiles/FahrenheitCelsiusFloat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FahrenheitCelsiusFloat.dir/depend

