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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gstarvin/proj2/newproject111

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gstarvin/proj2/newproject111/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/newproject111.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/newproject111.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/newproject111.dir/flags.make

CMakeFiles/newproject111.dir/library.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/library.c.o: ../library.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/newproject111.dir/library.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/library.c.o   -c /Users/gstarvin/proj2/newproject111/library.c

CMakeFiles/newproject111.dir/library.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/library.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/library.c > CMakeFiles/newproject111.dir/library.c.i

CMakeFiles/newproject111.dir/library.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/library.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/library.c -o CMakeFiles/newproject111.dir/library.c.s

CMakeFiles/newproject111.dir/read_file.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/read_file.c.o: ../read_file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/newproject111.dir/read_file.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/read_file.c.o   -c /Users/gstarvin/proj2/newproject111/read_file.c

CMakeFiles/newproject111.dir/read_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/read_file.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/read_file.c > CMakeFiles/newproject111.dir/read_file.c.i

CMakeFiles/newproject111.dir/read_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/read_file.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/read_file.c -o CMakeFiles/newproject111.dir/read_file.c.s

CMakeFiles/newproject111.dir/main.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/newproject111.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/main.c.o   -c /Users/gstarvin/proj2/newproject111/main.c

CMakeFiles/newproject111.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/main.c > CMakeFiles/newproject111.dir/main.c.i

CMakeFiles/newproject111.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/main.c -o CMakeFiles/newproject111.dir/main.c.s

CMakeFiles/newproject111.dir/solve_map.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/solve_map.c.o: ../solve_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/newproject111.dir/solve_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/solve_map.c.o   -c /Users/gstarvin/proj2/newproject111/solve_map.c

CMakeFiles/newproject111.dir/solve_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/solve_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/solve_map.c > CMakeFiles/newproject111.dir/solve_map.c.i

CMakeFiles/newproject111.dir/solve_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/solve_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/solve_map.c -o CMakeFiles/newproject111.dir/solve_map.c.s

CMakeFiles/newproject111.dir/check_buff.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/check_buff.c.o: ../check_buff.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/newproject111.dir/check_buff.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/check_buff.c.o   -c /Users/gstarvin/proj2/newproject111/check_buff.c

CMakeFiles/newproject111.dir/check_buff.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/check_buff.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/check_buff.c > CMakeFiles/newproject111.dir/check_buff.c.i

CMakeFiles/newproject111.dir/check_buff.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/check_buff.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/check_buff.c -o CMakeFiles/newproject111.dir/check_buff.c.s

CMakeFiles/newproject111.dir/get_struct.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/get_struct.c.o: ../get_struct.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/newproject111.dir/get_struct.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/get_struct.c.o   -c /Users/gstarvin/proj2/newproject111/get_struct.c

CMakeFiles/newproject111.dir/get_struct.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/get_struct.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/get_struct.c > CMakeFiles/newproject111.dir/get_struct.c.i

CMakeFiles/newproject111.dir/get_struct.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/get_struct.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/get_struct.c -o CMakeFiles/newproject111.dir/get_struct.c.s

CMakeFiles/newproject111.dir/check_struct.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/check_struct.c.o: ../check_struct.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/newproject111.dir/check_struct.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/check_struct.c.o   -c /Users/gstarvin/proj2/newproject111/check_struct.c

CMakeFiles/newproject111.dir/check_struct.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/check_struct.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/check_struct.c > CMakeFiles/newproject111.dir/check_struct.c.i

CMakeFiles/newproject111.dir/check_struct.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/check_struct.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/check_struct.c -o CMakeFiles/newproject111.dir/check_struct.c.s

CMakeFiles/newproject111.dir/fill_coordinates.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/fill_coordinates.c.o: ../fill_coordinates.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/newproject111.dir/fill_coordinates.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/fill_coordinates.c.o   -c /Users/gstarvin/proj2/newproject111/fill_coordinates.c

CMakeFiles/newproject111.dir/fill_coordinates.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/fill_coordinates.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/fill_coordinates.c > CMakeFiles/newproject111.dir/fill_coordinates.c.i

CMakeFiles/newproject111.dir/fill_coordinates.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/fill_coordinates.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/fill_coordinates.c -o CMakeFiles/newproject111.dir/fill_coordinates.c.s

CMakeFiles/newproject111.dir/check_paint_map.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/check_paint_map.c.o: ../check_paint_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/newproject111.dir/check_paint_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/check_paint_map.c.o   -c /Users/gstarvin/proj2/newproject111/check_paint_map.c

CMakeFiles/newproject111.dir/check_paint_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/check_paint_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/check_paint_map.c > CMakeFiles/newproject111.dir/check_paint_map.c.i

CMakeFiles/newproject111.dir/check_paint_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/check_paint_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/check_paint_map.c -o CMakeFiles/newproject111.dir/check_paint_map.c.s

CMakeFiles/newproject111.dir/create_map.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/create_map.c.o: ../create_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/newproject111.dir/create_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/create_map.c.o   -c /Users/gstarvin/proj2/newproject111/create_map.c

CMakeFiles/newproject111.dir/create_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/create_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/create_map.c > CMakeFiles/newproject111.dir/create_map.c.i

CMakeFiles/newproject111.dir/create_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/create_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/create_map.c -o CMakeFiles/newproject111.dir/create_map.c.s

CMakeFiles/newproject111.dir/print_map.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/print_map.c.o: ../print_map.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/newproject111.dir/print_map.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/print_map.c.o   -c /Users/gstarvin/proj2/newproject111/print_map.c

CMakeFiles/newproject111.dir/print_map.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/print_map.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/print_map.c > CMakeFiles/newproject111.dir/print_map.c.i

CMakeFiles/newproject111.dir/print_map.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/print_map.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/print_map.c -o CMakeFiles/newproject111.dir/print_map.c.s

CMakeFiles/newproject111.dir/count_term.c.o: CMakeFiles/newproject111.dir/flags.make
CMakeFiles/newproject111.dir/count_term.c.o: ../count_term.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/newproject111.dir/count_term.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/newproject111.dir/count_term.c.o   -c /Users/gstarvin/proj2/newproject111/count_term.c

CMakeFiles/newproject111.dir/count_term.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/newproject111.dir/count_term.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/proj2/newproject111/count_term.c > CMakeFiles/newproject111.dir/count_term.c.i

CMakeFiles/newproject111.dir/count_term.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/newproject111.dir/count_term.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/proj2/newproject111/count_term.c -o CMakeFiles/newproject111.dir/count_term.c.s

# Object files for target newproject111
newproject111_OBJECTS = \
"CMakeFiles/newproject111.dir/library.c.o" \
"CMakeFiles/newproject111.dir/read_file.c.o" \
"CMakeFiles/newproject111.dir/main.c.o" \
"CMakeFiles/newproject111.dir/solve_map.c.o" \
"CMakeFiles/newproject111.dir/check_buff.c.o" \
"CMakeFiles/newproject111.dir/get_struct.c.o" \
"CMakeFiles/newproject111.dir/check_struct.c.o" \
"CMakeFiles/newproject111.dir/fill_coordinates.c.o" \
"CMakeFiles/newproject111.dir/check_paint_map.c.o" \
"CMakeFiles/newproject111.dir/create_map.c.o" \
"CMakeFiles/newproject111.dir/print_map.c.o" \
"CMakeFiles/newproject111.dir/count_term.c.o"

# External object files for target newproject111
newproject111_EXTERNAL_OBJECTS =

libnewproject111.a: CMakeFiles/newproject111.dir/library.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/read_file.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/main.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/solve_map.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/check_buff.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/get_struct.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/check_struct.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/fill_coordinates.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/check_paint_map.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/create_map.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/print_map.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/count_term.c.o
libnewproject111.a: CMakeFiles/newproject111.dir/build.make
libnewproject111.a: CMakeFiles/newproject111.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C static library libnewproject111.a"
	$(CMAKE_COMMAND) -P CMakeFiles/newproject111.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/newproject111.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/newproject111.dir/build: libnewproject111.a

.PHONY : CMakeFiles/newproject111.dir/build

CMakeFiles/newproject111.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/newproject111.dir/cmake_clean.cmake
.PHONY : CMakeFiles/newproject111.dir/clean

CMakeFiles/newproject111.dir/depend:
	cd /Users/gstarvin/proj2/newproject111/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gstarvin/proj2/newproject111 /Users/gstarvin/proj2/newproject111 /Users/gstarvin/proj2/newproject111/cmake-build-debug /Users/gstarvin/proj2/newproject111/cmake-build-debug /Users/gstarvin/proj2/newproject111/cmake-build-debug/CMakeFiles/newproject111.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/newproject111.dir/depend

