# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/hasankayan/Documents/CPPPackDev/cppenv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hasankayan/Documents/CPPPackDev/cppenv/build

# Include any dependencies generated for this target.
include CMakeFiles/cppenv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cppenv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cppenv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppenv.dir/flags.make

CMakeFiles/cppenv.dir/src/cppenv.cpp.o: CMakeFiles/cppenv.dir/flags.make
CMakeFiles/cppenv.dir/src/cppenv.cpp.o: /home/hasankayan/Documents/CPPPackDev/cppenv/src/cppenv.cpp
CMakeFiles/cppenv.dir/src/cppenv.cpp.o: CMakeFiles/cppenv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/hasankayan/Documents/CPPPackDev/cppenv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppenv.dir/src/cppenv.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppenv.dir/src/cppenv.cpp.o -MF CMakeFiles/cppenv.dir/src/cppenv.cpp.o.d -o CMakeFiles/cppenv.dir/src/cppenv.cpp.o -c /home/hasankayan/Documents/CPPPackDev/cppenv/src/cppenv.cpp

CMakeFiles/cppenv.dir/src/cppenv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cppenv.dir/src/cppenv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hasankayan/Documents/CPPPackDev/cppenv/src/cppenv.cpp > CMakeFiles/cppenv.dir/src/cppenv.cpp.i

CMakeFiles/cppenv.dir/src/cppenv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cppenv.dir/src/cppenv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hasankayan/Documents/CPPPackDev/cppenv/src/cppenv.cpp -o CMakeFiles/cppenv.dir/src/cppenv.cpp.s

CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o: CMakeFiles/cppenv.dir/flags.make
CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o: /home/hasankayan/Documents/CPPPackDev/cppenv/src/LibraryManager.cpp
CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o: CMakeFiles/cppenv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/hasankayan/Documents/CPPPackDev/cppenv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o -MF CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o.d -o CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o -c /home/hasankayan/Documents/CPPPackDev/cppenv/src/LibraryManager.cpp

CMakeFiles/cppenv.dir/src/LibraryManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cppenv.dir/src/LibraryManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hasankayan/Documents/CPPPackDev/cppenv/src/LibraryManager.cpp > CMakeFiles/cppenv.dir/src/LibraryManager.cpp.i

CMakeFiles/cppenv.dir/src/LibraryManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cppenv.dir/src/LibraryManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hasankayan/Documents/CPPPackDev/cppenv/src/LibraryManager.cpp -o CMakeFiles/cppenv.dir/src/LibraryManager.cpp.s

CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o: CMakeFiles/cppenv.dir/flags.make
CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o: /home/hasankayan/Documents/CPPPackDev/cppenv/src/CMakeManager.cpp
CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o: CMakeFiles/cppenv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/hasankayan/Documents/CPPPackDev/cppenv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o -MF CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o.d -o CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o -c /home/hasankayan/Documents/CPPPackDev/cppenv/src/CMakeManager.cpp

CMakeFiles/cppenv.dir/src/CMakeManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cppenv.dir/src/CMakeManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hasankayan/Documents/CPPPackDev/cppenv/src/CMakeManager.cpp > CMakeFiles/cppenv.dir/src/CMakeManager.cpp.i

CMakeFiles/cppenv.dir/src/CMakeManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cppenv.dir/src/CMakeManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hasankayan/Documents/CPPPackDev/cppenv/src/CMakeManager.cpp -o CMakeFiles/cppenv.dir/src/CMakeManager.cpp.s

# Object files for target cppenv
cppenv_OBJECTS = \
"CMakeFiles/cppenv.dir/src/cppenv.cpp.o" \
"CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o" \
"CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o"

# External object files for target cppenv
cppenv_EXTERNAL_OBJECTS =

cppenv: CMakeFiles/cppenv.dir/src/cppenv.cpp.o
cppenv: CMakeFiles/cppenv.dir/src/LibraryManager.cpp.o
cppenv: CMakeFiles/cppenv.dir/src/CMakeManager.cpp.o
cppenv: CMakeFiles/cppenv.dir/build.make
cppenv: CMakeFiles/cppenv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/hasankayan/Documents/CPPPackDev/cppenv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cppenv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppenv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppenv.dir/build: cppenv
.PHONY : CMakeFiles/cppenv.dir/build

CMakeFiles/cppenv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppenv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppenv.dir/clean

CMakeFiles/cppenv.dir/depend:
	cd /home/hasankayan/Documents/CPPPackDev/cppenv/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hasankayan/Documents/CPPPackDev/cppenv /home/hasankayan/Documents/CPPPackDev/cppenv /home/hasankayan/Documents/CPPPackDev/cppenv/build /home/hasankayan/Documents/CPPPackDev/cppenv/build /home/hasankayan/Documents/CPPPackDev/cppenv/build/CMakeFiles/cppenv.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cppenv.dir/depend
