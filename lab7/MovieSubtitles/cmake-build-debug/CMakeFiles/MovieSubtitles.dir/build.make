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
CMAKE_SOURCE_DIR = /home/emilia/CLionProjects/MovieSubtitles

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MovieSubtitles.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MovieSubtitles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MovieSubtitles.dir/flags.make

CMakeFiles/MovieSubtitles.dir/main.cpp.o: CMakeFiles/MovieSubtitles.dir/flags.make
CMakeFiles/MovieSubtitles.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MovieSubtitles.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MovieSubtitles.dir/main.cpp.o -c /home/emilia/CLionProjects/MovieSubtitles/main.cpp

CMakeFiles/MovieSubtitles.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MovieSubtitles.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/MovieSubtitles/main.cpp > CMakeFiles/MovieSubtitles.dir/main.cpp.i

CMakeFiles/MovieSubtitles.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MovieSubtitles.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/MovieSubtitles/main.cpp -o CMakeFiles/MovieSubtitles.dir/main.cpp.s

CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.o: CMakeFiles/MovieSubtitles.dir/flags.make
CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.o: ../MovieSubtitles.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.o -c /home/emilia/CLionProjects/MovieSubtitles/MovieSubtitles.cpp

CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/MovieSubtitles/MovieSubtitles.cpp > CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.i

CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/MovieSubtitles/MovieSubtitles.cpp -o CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.s

CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.o: CMakeFiles/MovieSubtitles.dir/flags.make
CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.o: ../Exceptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.o -c /home/emilia/CLionProjects/MovieSubtitles/Exceptions.cpp

CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emilia/CLionProjects/MovieSubtitles/Exceptions.cpp > CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.i

CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emilia/CLionProjects/MovieSubtitles/Exceptions.cpp -o CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.s

# Object files for target MovieSubtitles
MovieSubtitles_OBJECTS = \
"CMakeFiles/MovieSubtitles.dir/main.cpp.o" \
"CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.o" \
"CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.o"

# External object files for target MovieSubtitles
MovieSubtitles_EXTERNAL_OBJECTS =

MovieSubtitles: CMakeFiles/MovieSubtitles.dir/main.cpp.o
MovieSubtitles: CMakeFiles/MovieSubtitles.dir/MovieSubtitles.cpp.o
MovieSubtitles: CMakeFiles/MovieSubtitles.dir/Exceptions.cpp.o
MovieSubtitles: CMakeFiles/MovieSubtitles.dir/build.make
MovieSubtitles: CMakeFiles/MovieSubtitles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable MovieSubtitles"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MovieSubtitles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MovieSubtitles.dir/build: MovieSubtitles

.PHONY : CMakeFiles/MovieSubtitles.dir/build

CMakeFiles/MovieSubtitles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MovieSubtitles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MovieSubtitles.dir/clean

CMakeFiles/MovieSubtitles.dir/depend:
	cd /home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emilia/CLionProjects/MovieSubtitles /home/emilia/CLionProjects/MovieSubtitles /home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug /home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug /home/emilia/CLionProjects/MovieSubtitles/cmake-build-debug/CMakeFiles/MovieSubtitles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MovieSubtitles.dir/depend
