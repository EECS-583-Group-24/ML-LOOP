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

# Utility rule file for install-FeaturePass.

# Include any custom commands dependencies for this target.
include featurePass/CMakeFiles/install-FeaturePass.dir/compiler_depend.make

# Include the progress variables for this target.
include featurePass/CMakeFiles/install-FeaturePass.dir/progress.make

featurePass/CMakeFiles/install-FeaturePass:
	cd /home/riwa/project/featurePass/featurePass && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="FeaturePass" -P /home/riwa/project/featurePass/cmake_install.cmake

install-FeaturePass: featurePass/CMakeFiles/install-FeaturePass
install-FeaturePass: featurePass/CMakeFiles/install-FeaturePass.dir/build.make
.PHONY : install-FeaturePass

# Rule to build all files generated by this target.
featurePass/CMakeFiles/install-FeaturePass.dir/build: install-FeaturePass
.PHONY : featurePass/CMakeFiles/install-FeaturePass.dir/build

featurePass/CMakeFiles/install-FeaturePass.dir/clean:
	cd /home/riwa/project/featurePass/featurePass && $(CMAKE_COMMAND) -P CMakeFiles/install-FeaturePass.dir/cmake_clean.cmake
.PHONY : featurePass/CMakeFiles/install-FeaturePass.dir/clean

featurePass/CMakeFiles/install-FeaturePass.dir/depend:
	cd /home/riwa/project/featurePass && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/riwa/project/featurePass /home/riwa/project/featurePass/featurePass /home/riwa/project/featurePass /home/riwa/project/featurePass/featurePass /home/riwa/project/featurePass/featurePass/CMakeFiles/install-FeaturePass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : featurePass/CMakeFiles/install-FeaturePass.dir/depend
