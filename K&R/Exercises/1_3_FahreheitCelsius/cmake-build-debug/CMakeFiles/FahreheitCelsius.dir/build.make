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
CMAKE_SOURCE_DIR = /home/newton/Programming/C/FahreheitCelsius

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/newton/Programming/C/FahreheitCelsius/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FahreheitCelsius.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FahreheitCelsius.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FahreheitCelsius.dir/flags.make

CMakeFiles/FahreheitCelsius.dir/main.c.o: CMakeFiles/FahreheitCelsius.dir/flags.make
CMakeFiles/FahreheitCelsius.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/newton/Programming/C/FahreheitCelsius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FahreheitCelsius.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FahreheitCelsius.dir/main.c.o   -c /home/newton/Programming/C/FahreheitCelsius/main.c

CMakeFiles/FahreheitCelsius.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FahreheitCelsius.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/newton/Programming/C/FahreheitCelsius/main.c > CMakeFiles/FahreheitCelsius.dir/main.c.i

CMakeFiles/FahreheitCelsius.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FahreheitCelsius.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/newton/Programming/C/FahreheitCelsius/main.c -o CMakeFiles/FahreheitCelsius.dir/main.c.s

CMakeFiles/FahreheitCelsius.dir/main.c.o.requires:

.PHONY : CMakeFiles/FahreheitCelsius.dir/main.c.o.requires

CMakeFiles/FahreheitCelsius.dir/main.c.o.provides: CMakeFiles/FahreheitCelsius.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/FahreheitCelsius.dir/build.make CMakeFiles/FahreheitCelsius.dir/main.c.o.provides.build
.PHONY : CMakeFiles/FahreheitCelsius.dir/main.c.o.provides

CMakeFiles/FahreheitCelsius.dir/main.c.o.provides.build: CMakeFiles/FahreheitCelsius.dir/main.c.o


# Object files for target FahreheitCelsius
FahreheitCelsius_OBJECTS = \
"CMakeFiles/FahreheitCelsius.dir/main.c.o"

# External object files for target FahreheitCelsius
FahreheitCelsius_EXTERNAL_OBJECTS =

FahreheitCelsius: CMakeFiles/FahreheitCelsius.dir/main.c.o
FahreheitCelsius: CMakeFiles/FahreheitCelsius.dir/build.make
FahreheitCelsius: CMakeFiles/FahreheitCelsius.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/newton/Programming/C/FahreheitCelsius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FahreheitCelsius"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FahreheitCelsius.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FahreheitCelsius.dir/build: FahreheitCelsius

.PHONY : CMakeFiles/FahreheitCelsius.dir/build

CMakeFiles/FahreheitCelsius.dir/requires: CMakeFiles/FahreheitCelsius.dir/main.c.o.requires

.PHONY : CMakeFiles/FahreheitCelsius.dir/requires

CMakeFiles/FahreheitCelsius.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FahreheitCelsius.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FahreheitCelsius.dir/clean

CMakeFiles/FahreheitCelsius.dir/depend:
	cd /home/newton/Programming/C/FahreheitCelsius/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/newton/Programming/C/FahreheitCelsius /home/newton/Programming/C/FahreheitCelsius /home/newton/Programming/C/FahreheitCelsius/cmake-build-debug /home/newton/Programming/C/FahreheitCelsius/cmake-build-debug /home/newton/Programming/C/FahreheitCelsius/cmake-build-debug/CMakeFiles/FahreheitCelsius.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FahreheitCelsius.dir/depend

