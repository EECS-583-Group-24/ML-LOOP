# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /home/riwa/project/featurePass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/riwa/project/featurePass

# Utility rule file for install-LoopFeaturePass.

# Include any custom commands dependencies for this target.
include loopPass/CMakeFiles/install-LoopFeaturePass.dir/compiler_depend.make

# Include the progress variables for this target.
include loopPass/CMakeFiles/install-LoopFeaturePass.dir/progress.make

loopPass/CMakeFiles/install-LoopFeaturePass:
	cd /home/riwa/project/featurePass/loopPass && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="LoopFeaturePass" -P /home/riwa/project/featurePass/cmake_install.cmake

install-LoopFeaturePass: loopPass/CMakeFiles/install-LoopFeaturePass
install-LoopFeaturePass: loopPass/CMakeFiles/install-LoopFeaturePass.dir/build.make
.PHONY : install-LoopFeaturePass

# Rule to build all files generated by this target.
loopPass/CMakeFiles/install-LoopFeaturePass.dir/build: install-LoopFeaturePass
.PHONY : loopPass/CMakeFiles/install-LoopFeaturePass.dir/build

loopPass/CMakeFiles/install-LoopFeaturePass.dir/clean:
	cd /home/riwa/project/featurePass/loopPass && $(CMAKE_COMMAND) -P CMakeFiles/install-LoopFeaturePass.dir/cmake_clean.cmake
.PHONY : loopPass/CMakeFiles/install-LoopFeaturePass.dir/clean

loopPass/CMakeFiles/install-LoopFeaturePass.dir/depend:
	cd /home/riwa/project/featurePass && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/riwa/project/featurePass /home/riwa/project/featurePass/loopPass /home/riwa/project/featurePass /home/riwa/project/featurePass/loopPass /home/riwa/project/featurePass/loopPass/CMakeFiles/install-LoopFeaturePass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : loopPass/CMakeFiles/install-LoopFeaturePass.dir/depend

