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
CMAKE_BINARY_DIR = /home/riwa/project/featurePass/build

# Include any dependencies generated for this target.
include featurePass/CMakeFiles/FeaturePass.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include featurePass/CMakeFiles/FeaturePass.dir/compiler_depend.make

# Include the progress variables for this target.
include featurePass/CMakeFiles/FeaturePass.dir/progress.make

# Include the compile flags for this target's objects.
include featurePass/CMakeFiles/FeaturePass.dir/flags.make

featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.o: featurePass/CMakeFiles/FeaturePass.dir/flags.make
featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.o: ../featurePass/featurePass.cpp
featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.o: featurePass/CMakeFiles/FeaturePass.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/riwa/project/featurePass/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.o"
	cd /home/riwa/project/featurePass/build/featurePass && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.o -MF CMakeFiles/FeaturePass.dir/featurePass.cpp.o.d -o CMakeFiles/FeaturePass.dir/featurePass.cpp.o -c /home/riwa/project/featurePass/featurePass/featurePass.cpp

featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FeaturePass.dir/featurePass.cpp.i"
	cd /home/riwa/project/featurePass/build/featurePass && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/riwa/project/featurePass/featurePass/featurePass.cpp > CMakeFiles/FeaturePass.dir/featurePass.cpp.i

featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FeaturePass.dir/featurePass.cpp.s"
	cd /home/riwa/project/featurePass/build/featurePass && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/riwa/project/featurePass/featurePass/featurePass.cpp -o CMakeFiles/FeaturePass.dir/featurePass.cpp.s

# Object files for target FeaturePass
FeaturePass_OBJECTS = \
"CMakeFiles/FeaturePass.dir/featurePass.cpp.o"

# External object files for target FeaturePass
FeaturePass_EXTERNAL_OBJECTS =

featurePass/FeaturePass.so: featurePass/CMakeFiles/FeaturePass.dir/featurePass.cpp.o
featurePass/FeaturePass.so: featurePass/CMakeFiles/FeaturePass.dir/build.make
featurePass/FeaturePass.so: featurePass/CMakeFiles/FeaturePass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/riwa/project/featurePass/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module FeaturePass.so"
	cd /home/riwa/project/featurePass/build/featurePass && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FeaturePass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
featurePass/CMakeFiles/FeaturePass.dir/build: featurePass/FeaturePass.so
.PHONY : featurePass/CMakeFiles/FeaturePass.dir/build

featurePass/CMakeFiles/FeaturePass.dir/clean:
	cd /home/riwa/project/featurePass/build/featurePass && $(CMAKE_COMMAND) -P CMakeFiles/FeaturePass.dir/cmake_clean.cmake
.PHONY : featurePass/CMakeFiles/FeaturePass.dir/clean

featurePass/CMakeFiles/FeaturePass.dir/depend:
	cd /home/riwa/project/featurePass/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/riwa/project/featurePass /home/riwa/project/featurePass/featurePass /home/riwa/project/featurePass/build /home/riwa/project/featurePass/build/featurePass /home/riwa/project/featurePass/build/featurePass/CMakeFiles/FeaturePass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : featurePass/CMakeFiles/FeaturePass.dir/depend

