# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/70/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/emilia/CLionProjects/Query

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/emilia/CLionProjects/Query/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Query.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Query.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Query.dir/flags.make

CMakeFiles/Query.dir/main.cpp.o: CMakeFiles/Query.dir/flags.make
CMakeFiles/Query.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Query.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Query.dir/main.cpp.o -c /home/emilia/CLionProjects/Query/main.cpp

CMakeFiles/Query.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Query.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/Query/main.cpp > CMakeFiles/Query.dir/main.cpp.i

CMakeFiles/Query.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Query.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/Query/main.cpp -o CMakeFiles/Query.dir/main.cpp.s

CMakeFiles/Query.dir/Query.cpp.o: CMakeFiles/Query.dir/flags.make
CMakeFiles/Query.dir/Query.cpp.o: ../Query.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Query.dir/Query.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Query.dir/Query.cpp.o -c /home/emilia/CLionProjects/Query/Query.cpp

CMakeFiles/Query.dir/Query.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Query.dir/Query.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/Query/Query.cpp > CMakeFiles/Query.dir/Query.cpp.i

CMakeFiles/Query.dir/Query.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Query.dir/Query.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/Query/Query.cpp -o CMakeFiles/Query.dir/Query.cpp.s

CMakeFiles/Query.dir/Student.cpp.o: CMakeFiles/Query.dir/flags.make
CMakeFiles/Query.dir/Student.cpp.o: ../Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Query.dir/Student.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Query.dir/Student.cpp.o -c /home/emilia/CLionProjects/Query/Student.cpp

CMakeFiles/Query.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Query.dir/Student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/Query/Student.cpp > CMakeFiles/Query.dir/Student.cpp.i

CMakeFiles/Query.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Query.dir/Student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/Query/Student.cpp -o CMakeFiles/Query.dir/Student.cpp.s

CMakeFiles/Query.dir/StudentRepository.cpp.o: CMakeFiles/Query.dir/flags.make
CMakeFiles/Query.dir/StudentRepository.cpp.o: ../StudentRepository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Query.dir/StudentRepository.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Query.dir/StudentRepository.cpp.o -c /home/emilia/CLionProjects/Query/StudentRepository.cpp

CMakeFiles/Query.dir/StudentRepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Query.dir/StudentRepository.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/Query/StudentRepository.cpp > CMakeFiles/Query.dir/StudentRepository.cpp.i

CMakeFiles/Query.dir/StudentRepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Query.dir/StudentRepository.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/Query/StudentRepository.cpp -o CMakeFiles/Query.dir/StudentRepository.cpp.s

# Object files for target Query
Query_OBJECTS = \
"CMakeFiles/Query.dir/main.cpp.o" \
"CMakeFiles/Query.dir/Query.cpp.o" \
"CMakeFiles/Query.dir/Student.cpp.o" \
"CMakeFiles/Query.dir/StudentRepository.cpp.o"

# External object files for target Query
Query_EXTERNAL_OBJECTS =

Query: CMakeFiles/Query.dir/main.cpp.o
Query: CMakeFiles/Query.dir/Query.cpp.o
Query: CMakeFiles/Query.dir/Student.cpp.o
Query: CMakeFiles/Query.dir/StudentRepository.cpp.o
Query: CMakeFiles/Query.dir/build.make
Query: CMakeFiles/Query.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emilia/CLionProjects/Query/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Query"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Query.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Query.dir/build: Query

.PHONY : CMakeFiles/Query.dir/build

CMakeFiles/Query.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Query.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Query.dir/clean

CMakeFiles/Query.dir/depend:
	cd /home/emilia/CLionProjects/Query/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emilia/CLionProjects/Query /home/emilia/CLionProjects/Query /home/emilia/CLionProjects/Query/cmake-build-debug /home/emilia/CLionProjects/Query/cmake-build-debug /home/emilia/CLionProjects/Query/cmake-build-debug/CMakeFiles/Query.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Query.dir/depend
