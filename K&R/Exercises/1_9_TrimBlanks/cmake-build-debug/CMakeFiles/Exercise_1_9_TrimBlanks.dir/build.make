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
CMAKE_SOURCE_DIR = "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Exercise_1_9_TrimBlanks.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exercise_1_9_TrimBlanks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exercise_1_9_TrimBlanks.dir/flags.make

CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o: CMakeFiles/Exercise_1_9_TrimBlanks.dir/flags.make
CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o   -c "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/main.c"

CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/main.c" > CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.i

CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/main.c" -o CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.s

CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.requires:

.PHONY : CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.requires

CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.provides: CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Exercise_1_9_TrimBlanks.dir/build.make CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.provides

CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.provides.build: CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o


# Object files for target Exercise_1_9_TrimBlanks
Exercise_1_9_TrimBlanks_OBJECTS = \
"CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o"

# External object files for target Exercise_1_9_TrimBlanks
Exercise_1_9_TrimBlanks_EXTERNAL_OBJECTS =

Exercise_1_9_TrimBlanks: CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o
Exercise_1_9_TrimBlanks: CMakeFiles/Exercise_1_9_TrimBlanks.dir/build.make
Exercise_1_9_TrimBlanks: CMakeFiles/Exercise_1_9_TrimBlanks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Exercise_1_9_TrimBlanks"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exercise_1_9_TrimBlanks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exercise_1_9_TrimBlanks.dir/build: Exercise_1_9_TrimBlanks

.PHONY : CMakeFiles/Exercise_1_9_TrimBlanks.dir/build

CMakeFiles/Exercise_1_9_TrimBlanks.dir/requires: CMakeFiles/Exercise_1_9_TrimBlanks.dir/main.c.o.requires

.PHONY : CMakeFiles/Exercise_1_9_TrimBlanks.dir/requires

CMakeFiles/Exercise_1_9_TrimBlanks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exercise_1_9_TrimBlanks.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exercise_1_9_TrimBlanks.dir/clean

CMakeFiles/Exercise_1_9_TrimBlanks.dir/depend:
	cd "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks" "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks" "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug" "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug" "/home/newton/Programming/C/K&R/Exercise_1_9_TrimBlanks/cmake-build-debug/CMakeFiles/Exercise_1_9_TrimBlanks.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Exercise_1_9_TrimBlanks.dir/depend
