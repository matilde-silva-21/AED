# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SentidoDaVida.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/SentidoDaVida.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SentidoDaVida.dir/flags.make

CMakeFiles/SentidoDaVida.dir/main.cpp.obj: CMakeFiles/SentidoDaVida.dir/flags.make
CMakeFiles/SentidoDaVida.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SentidoDaVida.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SentidoDaVida.dir\main.cpp.obj -c C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\main.cpp

CMakeFiles/SentidoDaVida.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SentidoDaVida.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\main.cpp > CMakeFiles\SentidoDaVida.dir\main.cpp.i

CMakeFiles/SentidoDaVida.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SentidoDaVida.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\main.cpp -o CMakeFiles\SentidoDaVida.dir\main.cpp.s

# Object files for target SentidoDaVida
SentidoDaVida_OBJECTS = \
"CMakeFiles/SentidoDaVida.dir/main.cpp.obj"

# External object files for target SentidoDaVida
SentidoDaVida_EXTERNAL_OBJECTS =

SentidoDaVida.exe: CMakeFiles/SentidoDaVida.dir/main.cpp.obj
SentidoDaVida.exe: CMakeFiles/SentidoDaVida.dir/build.make
SentidoDaVida.exe: CMakeFiles/SentidoDaVida.dir/linklibs.rsp
SentidoDaVida.exe: CMakeFiles/SentidoDaVida.dir/objects1.rsp
SentidoDaVida.exe: CMakeFiles/SentidoDaVida.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SentidoDaVida.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SentidoDaVida.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SentidoDaVida.dir/build: SentidoDaVida.exe
.PHONY : CMakeFiles/SentidoDaVida.dir/build

CMakeFiles/SentidoDaVida.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SentidoDaVida.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SentidoDaVida.dir/clean

CMakeFiles/SentidoDaVida.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\cmake-build-debug C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\cmake-build-debug C:\Users\clfma\Desktop\Faculdade\Y2S1\AED\Mooshak\SentidoDaVida\cmake-build-debug\CMakeFiles\SentidoDaVida.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SentidoDaVida.dir/depend

