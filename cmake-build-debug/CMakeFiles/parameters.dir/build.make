# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Cochr\CLionProjects\CppBasicsReviews

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Cochr\CLionProjects\CppBasicsReviews\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/parameters.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/parameters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/parameters.dir/flags.make

CMakeFiles/parameters.dir/parameters.cpp.obj: CMakeFiles/parameters.dir/flags.make
CMakeFiles/parameters.dir/parameters.cpp.obj: ../parameters.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Cochr\CLionProjects\CppBasicsReviews\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/parameters.dir/parameters.cpp.obj"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\parameters.dir\parameters.cpp.obj -c C:\Users\Cochr\CLionProjects\CppBasicsReviews\parameters.cpp

CMakeFiles/parameters.dir/parameters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parameters.dir/parameters.cpp.i"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Cochr\CLionProjects\CppBasicsReviews\parameters.cpp > CMakeFiles\parameters.dir\parameters.cpp.i

CMakeFiles/parameters.dir/parameters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parameters.dir/parameters.cpp.s"
	C:\PROGRA~2\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Cochr\CLionProjects\CppBasicsReviews\parameters.cpp -o CMakeFiles\parameters.dir\parameters.cpp.s

# Object files for target parameters
parameters_OBJECTS = \
"CMakeFiles/parameters.dir/parameters.cpp.obj"

# External object files for target parameters
parameters_EXTERNAL_OBJECTS =

parameters.exe: CMakeFiles/parameters.dir/parameters.cpp.obj
parameters.exe: CMakeFiles/parameters.dir/build.make
parameters.exe: CMakeFiles/parameters.dir/linklibs.rsp
parameters.exe: CMakeFiles/parameters.dir/objects1.rsp
parameters.exe: CMakeFiles/parameters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Cochr\CLionProjects\CppBasicsReviews\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable parameters.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\parameters.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/parameters.dir/build: parameters.exe

.PHONY : CMakeFiles/parameters.dir/build

CMakeFiles/parameters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\parameters.dir\cmake_clean.cmake
.PHONY : CMakeFiles/parameters.dir/clean

CMakeFiles/parameters.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Cochr\CLionProjects\CppBasicsReviews C:\Users\Cochr\CLionProjects\CppBasicsReviews C:\Users\Cochr\CLionProjects\CppBasicsReviews\cmake-build-debug C:\Users\Cochr\CLionProjects\CppBasicsReviews\cmake-build-debug C:\Users\Cochr\CLionProjects\CppBasicsReviews\cmake-build-debug\CMakeFiles\parameters.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/parameters.dir/depend

