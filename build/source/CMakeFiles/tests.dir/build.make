# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.11.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.11.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build

# Include any dependencies generated for this target.
include source/CMakeFiles/tests.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/tests.dir/flags.make

source/CMakeFiles/tests.dir/glew.c.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/glew.c.o: ../source/glew.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object source/CMakeFiles/tests.dir/glew.c.o"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tests.dir/glew.c.o   -c /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/glew.c

source/CMakeFiles/tests.dir/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tests.dir/glew.c.i"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/glew.c > CMakeFiles/tests.dir/glew.c.i

source/CMakeFiles/tests.dir/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tests.dir/glew.c.s"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/glew.c -o CMakeFiles/tests.dir/glew.c.s

source/CMakeFiles/tests.dir/tests.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/tests.cpp.o: ../source/tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/tests.dir/tests.cpp.o"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/tests.cpp.o -c /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/tests.cpp

source/CMakeFiles/tests.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/tests.cpp.i"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/tests.cpp > CMakeFiles/tests.dir/tests.cpp.i

source/CMakeFiles/tests.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/tests.cpp.s"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/tests.cpp -o CMakeFiles/tests.dir/tests.cpp.s

source/CMakeFiles/tests.dir/vec2.cpp.o: source/CMakeFiles/tests.dir/flags.make
source/CMakeFiles/tests.dir/vec2.cpp.o: ../source/vec2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/CMakeFiles/tests.dir/vec2.cpp.o"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tests.dir/vec2.cpp.o -c /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/vec2.cpp

source/CMakeFiles/tests.dir/vec2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tests.dir/vec2.cpp.i"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/vec2.cpp > CMakeFiles/tests.dir/vec2.cpp.i

source/CMakeFiles/tests.dir/vec2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tests.dir/vec2.cpp.s"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source/vec2.cpp -o CMakeFiles/tests.dir/vec2.cpp.s

# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/glew.c.o" \
"CMakeFiles/tests.dir/tests.cpp.o" \
"CMakeFiles/tests.dir/vec2.cpp.o"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

source/tests: source/CMakeFiles/tests.dir/glew.c.o
source/tests: source/CMakeFiles/tests.dir/tests.cpp.o
source/tests: source/CMakeFiles/tests.dir/vec2.cpp.o
source/tests: source/CMakeFiles/tests.dir/build.make
source/tests: external/glfw-3.2.1/src/libglfw3.a
source/tests: libnanovg.a
source/tests: source/CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable tests"
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/tests.dir/build: source/tests

.PHONY : source/CMakeFiles/tests.dir/build

source/CMakeFiles/tests.dir/clean:
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source && $(CMAKE_COMMAND) -P CMakeFiles/tests.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/tests.dir/clean

source/CMakeFiles/tests.dir/depend:
	cd /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2 /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/source /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source /Users/Silvie/desktop/Hausaufgaben/programmiersprachen-aufgabe-2/build/source/CMakeFiles/tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/tests.dir/depend

