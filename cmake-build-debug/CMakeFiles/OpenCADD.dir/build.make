# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/run/media/arrank/HDD/Code/Git Repos/OpenCADD"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/OpenCADD.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenCADD.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenCADD.dir/flags.make

CMakeFiles/OpenCADD.dir/gui.c.o: CMakeFiles/OpenCADD.dir/flags.make
CMakeFiles/OpenCADD.dir/gui.c.o: ../gui.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/OpenCADD.dir/gui.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenCADD.dir/gui.c.o   -c "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/gui.c"

CMakeFiles/OpenCADD.dir/gui.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenCADD.dir/gui.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/gui.c" > CMakeFiles/OpenCADD.dir/gui.c.i

CMakeFiles/OpenCADD.dir/gui.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenCADD.dir/gui.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/gui.c" -o CMakeFiles/OpenCADD.dir/gui.c.s

CMakeFiles/OpenCADD.dir/main.c.o: CMakeFiles/OpenCADD.dir/flags.make
CMakeFiles/OpenCADD.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/OpenCADD.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenCADD.dir/main.c.o   -c "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/main.c"

CMakeFiles/OpenCADD.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenCADD.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/main.c" > CMakeFiles/OpenCADD.dir/main.c.i

CMakeFiles/OpenCADD.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenCADD.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/main.c" -o CMakeFiles/OpenCADD.dir/main.c.s

CMakeFiles/OpenCADD.dir/tbox.c.o: CMakeFiles/OpenCADD.dir/flags.make
CMakeFiles/OpenCADD.dir/tbox.c.o: ../tbox.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/OpenCADD.dir/tbox.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenCADD.dir/tbox.c.o   -c "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/tbox.c"

CMakeFiles/OpenCADD.dir/tbox.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenCADD.dir/tbox.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/tbox.c" > CMakeFiles/OpenCADD.dir/tbox.c.i

CMakeFiles/OpenCADD.dir/tbox.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenCADD.dir/tbox.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/tbox.c" -o CMakeFiles/OpenCADD.dir/tbox.c.s

# Object files for target OpenCADD
OpenCADD_OBJECTS = \
"CMakeFiles/OpenCADD.dir/gui.c.o" \
"CMakeFiles/OpenCADD.dir/main.c.o" \
"CMakeFiles/OpenCADD.dir/tbox.c.o"

# External object files for target OpenCADD
OpenCADD_EXTERNAL_OBJECTS =

OpenCADD: CMakeFiles/OpenCADD.dir/gui.c.o
OpenCADD: CMakeFiles/OpenCADD.dir/main.c.o
OpenCADD: CMakeFiles/OpenCADD.dir/tbox.c.o
OpenCADD: CMakeFiles/OpenCADD.dir/build.make
OpenCADD: CMakeFiles/OpenCADD.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable OpenCADD"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenCADD.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenCADD.dir/build: OpenCADD

.PHONY : CMakeFiles/OpenCADD.dir/build

CMakeFiles/OpenCADD.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenCADD.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenCADD.dir/clean

CMakeFiles/OpenCADD.dir/depend:
	cd "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/run/media/arrank/HDD/Code/Git Repos/OpenCADD" "/run/media/arrank/HDD/Code/Git Repos/OpenCADD" "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug" "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug" "/run/media/arrank/HDD/Code/Git Repos/OpenCADD/cmake-build-debug/CMakeFiles/OpenCADD.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/OpenCADD.dir/depend

