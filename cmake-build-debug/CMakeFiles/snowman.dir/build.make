# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "Q:\Programs\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "Q:\Programs\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = Q:\Github\Snowman\snowman

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = Q:\Github\Snowman\snowman\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snowman.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snowman.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snowman.dir/flags.make

CMakeFiles/snowman.dir/main.c.obj: CMakeFiles/snowman.dir/flags.make
CMakeFiles/snowman.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=Q:\Github\Snowman\snowman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/snowman.dir/main.c.obj"
	Q:\Programs\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\snowman.dir\main.c.obj   -c Q:\Github\Snowman\snowman\main.c

CMakeFiles/snowman.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/snowman.dir/main.c.i"
	Q:\Programs\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E Q:\Github\Snowman\snowman\main.c > CMakeFiles\snowman.dir\main.c.i

CMakeFiles/snowman.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/snowman.dir/main.c.s"
	Q:\Programs\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S Q:\Github\Snowman\snowman\main.c -o CMakeFiles\snowman.dir\main.c.s

CMakeFiles/snowman.dir/guess.c.obj: CMakeFiles/snowman.dir/flags.make
CMakeFiles/snowman.dir/guess.c.obj: ../guess.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=Q:\Github\Snowman\snowman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/snowman.dir/guess.c.obj"
	Q:\Programs\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\snowman.dir\guess.c.obj   -c Q:\Github\Snowman\snowman\guess.c

CMakeFiles/snowman.dir/guess.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/snowman.dir/guess.c.i"
	Q:\Programs\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E Q:\Github\Snowman\snowman\guess.c > CMakeFiles\snowman.dir\guess.c.i

CMakeFiles/snowman.dir/guess.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/snowman.dir/guess.c.s"
	Q:\Programs\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S Q:\Github\Snowman\snowman\guess.c -o CMakeFiles\snowman.dir\guess.c.s

# Object files for target snowman
snowman_OBJECTS = \
"CMakeFiles/snowman.dir/main.c.obj" \
"CMakeFiles/snowman.dir/guess.c.obj"

# External object files for target snowman
snowman_EXTERNAL_OBJECTS =

snowman.exe: CMakeFiles/snowman.dir/main.c.obj
snowman.exe: CMakeFiles/snowman.dir/guess.c.obj
snowman.exe: CMakeFiles/snowman.dir/build.make
snowman.exe: CMakeFiles/snowman.dir/linklibs.rsp
snowman.exe: CMakeFiles/snowman.dir/objects1.rsp
snowman.exe: CMakeFiles/snowman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=Q:\Github\Snowman\snowman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable snowman.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\snowman.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snowman.dir/build: snowman.exe

.PHONY : CMakeFiles/snowman.dir/build

CMakeFiles/snowman.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\snowman.dir\cmake_clean.cmake
.PHONY : CMakeFiles/snowman.dir/clean

CMakeFiles/snowman.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" Q:\Github\Snowman\snowman Q:\Github\Snowman\snowman Q:\Github\Snowman\snowman\cmake-build-debug Q:\Github\Snowman\snowman\cmake-build-debug Q:\Github\Snowman\snowman\cmake-build-debug\CMakeFiles\snowman.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snowman.dir/depend

