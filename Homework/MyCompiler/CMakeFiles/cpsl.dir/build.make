# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/braden/Documents/Homework/Compilers/Homework/MyCompiler

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/braden/Documents/Homework/Compilers/Homework/MyCompiler

# Include any dependencies generated for this target.
include CMakeFiles/cpsl.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpsl.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpsl.dir/flags.make

parser.cpp: my_parser.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][Parser] Building parser with bison 3.0.4"
	/usr/bin/bison -d -o /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp my_parser.y

parser.hpp: parser.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate parser.hpp

scanner.cpp: my_scanner.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "[FLEX][Scanner] Building scanner with flex 2.6.4"
	/usr/bin/flex -o/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/scanner.cpp my_scanner.l

CMakeFiles/cpsl.dir/main.cpp.o: CMakeFiles/cpsl.dir/flags.make
CMakeFiles/cpsl.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpsl.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpsl.dir/main.cpp.o -c /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/main.cpp

CMakeFiles/cpsl.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpsl.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/main.cpp > CMakeFiles/cpsl.dir/main.cpp.i

CMakeFiles/cpsl.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpsl.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/main.cpp -o CMakeFiles/cpsl.dir/main.cpp.s

CMakeFiles/cpsl.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cpsl.dir/main.cpp.o.requires

CMakeFiles/cpsl.dir/main.cpp.o.provides: CMakeFiles/cpsl.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cpsl.dir/main.cpp.o.provides

CMakeFiles/cpsl.dir/main.cpp.o.provides.build: CMakeFiles/cpsl.dir/main.cpp.o


CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o: CMakeFiles/cpsl.dir/flags.make
CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o: Expressions/AddExpression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o -c /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/Expressions/AddExpression.cpp

CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/Expressions/AddExpression.cpp > CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.i

CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/Expressions/AddExpression.cpp -o CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.s

CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.requires:

.PHONY : CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.requires

CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.provides: CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.provides.build
.PHONY : CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.provides

CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.provides.build: CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o


CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o: CMakeFiles/cpsl.dir/flags.make
CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o: Expressions/Expression.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o -c /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/Expressions/Expression.cpp

CMakeFiles/cpsl.dir/Expressions/Expression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpsl.dir/Expressions/Expression.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/Expressions/Expression.cpp > CMakeFiles/cpsl.dir/Expressions/Expression.cpp.i

CMakeFiles/cpsl.dir/Expressions/Expression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpsl.dir/Expressions/Expression.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/Expressions/Expression.cpp -o CMakeFiles/cpsl.dir/Expressions/Expression.cpp.s

CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.requires:

.PHONY : CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.requires

CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.provides: CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.provides.build
.PHONY : CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.provides

CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.provides.build: CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o


CMakeFiles/cpsl.dir/parser.cpp.o: CMakeFiles/cpsl.dir/flags.make
CMakeFiles/cpsl.dir/parser.cpp.o: parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cpsl.dir/parser.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpsl.dir/parser.cpp.o -c /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp

CMakeFiles/cpsl.dir/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpsl.dir/parser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp > CMakeFiles/cpsl.dir/parser.cpp.i

CMakeFiles/cpsl.dir/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpsl.dir/parser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/parser.cpp -o CMakeFiles/cpsl.dir/parser.cpp.s

CMakeFiles/cpsl.dir/parser.cpp.o.requires:

.PHONY : CMakeFiles/cpsl.dir/parser.cpp.o.requires

CMakeFiles/cpsl.dir/parser.cpp.o.provides: CMakeFiles/cpsl.dir/parser.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/parser.cpp.o.provides.build
.PHONY : CMakeFiles/cpsl.dir/parser.cpp.o.provides

CMakeFiles/cpsl.dir/parser.cpp.o.provides.build: CMakeFiles/cpsl.dir/parser.cpp.o


CMakeFiles/cpsl.dir/scanner.cpp.o: CMakeFiles/cpsl.dir/flags.make
CMakeFiles/cpsl.dir/scanner.cpp.o: scanner.cpp
CMakeFiles/cpsl.dir/scanner.cpp.o: parser.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cpsl.dir/scanner.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpsl.dir/scanner.cpp.o -c /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/scanner.cpp

CMakeFiles/cpsl.dir/scanner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpsl.dir/scanner.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/scanner.cpp > CMakeFiles/cpsl.dir/scanner.cpp.i

CMakeFiles/cpsl.dir/scanner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpsl.dir/scanner.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/scanner.cpp -o CMakeFiles/cpsl.dir/scanner.cpp.s

CMakeFiles/cpsl.dir/scanner.cpp.o.requires:

.PHONY : CMakeFiles/cpsl.dir/scanner.cpp.o.requires

CMakeFiles/cpsl.dir/scanner.cpp.o.provides: CMakeFiles/cpsl.dir/scanner.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpsl.dir/build.make CMakeFiles/cpsl.dir/scanner.cpp.o.provides.build
.PHONY : CMakeFiles/cpsl.dir/scanner.cpp.o.provides

CMakeFiles/cpsl.dir/scanner.cpp.o.provides.build: CMakeFiles/cpsl.dir/scanner.cpp.o


# Object files for target cpsl
cpsl_OBJECTS = \
"CMakeFiles/cpsl.dir/main.cpp.o" \
"CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o" \
"CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o" \
"CMakeFiles/cpsl.dir/parser.cpp.o" \
"CMakeFiles/cpsl.dir/scanner.cpp.o"

# External object files for target cpsl
cpsl_EXTERNAL_OBJECTS =

cpsl: CMakeFiles/cpsl.dir/main.cpp.o
cpsl: CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o
cpsl: CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o
cpsl: CMakeFiles/cpsl.dir/parser.cpp.o
cpsl: CMakeFiles/cpsl.dir/scanner.cpp.o
cpsl: CMakeFiles/cpsl.dir/build.make
cpsl: /usr/lib/x86_64-linux-gnu/libfl.so
cpsl: CMakeFiles/cpsl.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable cpsl"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpsl.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpsl.dir/build: cpsl

.PHONY : CMakeFiles/cpsl.dir/build

CMakeFiles/cpsl.dir/requires: CMakeFiles/cpsl.dir/main.cpp.o.requires
CMakeFiles/cpsl.dir/requires: CMakeFiles/cpsl.dir/Expressions/AddExpression.cpp.o.requires
CMakeFiles/cpsl.dir/requires: CMakeFiles/cpsl.dir/Expressions/Expression.cpp.o.requires
CMakeFiles/cpsl.dir/requires: CMakeFiles/cpsl.dir/parser.cpp.o.requires
CMakeFiles/cpsl.dir/requires: CMakeFiles/cpsl.dir/scanner.cpp.o.requires

.PHONY : CMakeFiles/cpsl.dir/requires

CMakeFiles/cpsl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpsl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpsl.dir/clean

CMakeFiles/cpsl.dir/depend: parser.cpp
CMakeFiles/cpsl.dir/depend: parser.hpp
CMakeFiles/cpsl.dir/depend: scanner.cpp
	cd /home/braden/Documents/Homework/Compilers/Homework/MyCompiler && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/braden/Documents/Homework/Compilers/Homework/MyCompiler /home/braden/Documents/Homework/Compilers/Homework/MyCompiler /home/braden/Documents/Homework/Compilers/Homework/MyCompiler /home/braden/Documents/Homework/Compilers/Homework/MyCompiler /home/braden/Documents/Homework/Compilers/Homework/MyCompiler/CMakeFiles/cpsl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpsl.dir/depend

