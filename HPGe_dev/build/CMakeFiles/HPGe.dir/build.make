# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ripires/HPGe/HPGe_dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ripires/HPGe/HPGe_dev/build

# Include any dependencies generated for this target.
include CMakeFiles/HPGe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HPGe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HPGe.dir/flags.make

CMakeFiles/HPGe.dir/HPGe.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/HPGe.cc.o: ../HPGe.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HPGe.dir/HPGe.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/HPGe.cc.o -c /home/ripires/HPGe/HPGe_dev/HPGe.cc

CMakeFiles/HPGe.dir/HPGe.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/HPGe.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/HPGe.cc > CMakeFiles/HPGe.dir/HPGe.cc.i

CMakeFiles/HPGe.dir/HPGe.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/HPGe.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/HPGe.cc -o CMakeFiles/HPGe.dir/HPGe.cc.s

CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.o: ../src/HPGeActionInitialization.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.o -c /home/ripires/HPGe/HPGe_dev/src/HPGeActionInitialization.cc

CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/src/HPGeActionInitialization.cc > CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.i

CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/src/HPGeActionInitialization.cc -o CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.s

CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.o: ../src/HPGeDetectorConstruction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.o -c /home/ripires/HPGe/HPGe_dev/src/HPGeDetectorConstruction.cc

CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/src/HPGeDetectorConstruction.cc > CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.i

CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/src/HPGeDetectorConstruction.cc -o CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.s

CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.o: ../src/HPGeEventAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.o -c /home/ripires/HPGe/HPGe_dev/src/HPGeEventAction.cc

CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/src/HPGeEventAction.cc > CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.i

CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/src/HPGeEventAction.cc -o CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.s

CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.o: ../src/HPGePrimaryGeneratorAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.o -c /home/ripires/HPGe/HPGe_dev/src/HPGePrimaryGeneratorAction.cc

CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/src/HPGePrimaryGeneratorAction.cc > CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.i

CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/src/HPGePrimaryGeneratorAction.cc -o CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.s

CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.o: ../src/HPGeRunAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.o -c /home/ripires/HPGe/HPGe_dev/src/HPGeRunAction.cc

CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/src/HPGeRunAction.cc > CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.i

CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/src/HPGeRunAction.cc -o CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.s

CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.o: CMakeFiles/HPGe.dir/flags.make
CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.o: ../src/HPGeSteppingAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.o -c /home/ripires/HPGe/HPGe_dev/src/HPGeSteppingAction.cc

CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ripires/HPGe/HPGe_dev/src/HPGeSteppingAction.cc > CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.i

CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ripires/HPGe/HPGe_dev/src/HPGeSteppingAction.cc -o CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.s

# Object files for target HPGe
HPGe_OBJECTS = \
"CMakeFiles/HPGe.dir/HPGe.cc.o" \
"CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.o" \
"CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.o" \
"CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.o" \
"CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.o" \
"CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.o" \
"CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.o"

# External object files for target HPGe
HPGe_EXTERNAL_OBJECTS =

HPGe: CMakeFiles/HPGe.dir/HPGe.cc.o
HPGe: CMakeFiles/HPGe.dir/src/HPGeActionInitialization.cc.o
HPGe: CMakeFiles/HPGe.dir/src/HPGeDetectorConstruction.cc.o
HPGe: CMakeFiles/HPGe.dir/src/HPGeEventAction.cc.o
HPGe: CMakeFiles/HPGe.dir/src/HPGePrimaryGeneratorAction.cc.o
HPGe: CMakeFiles/HPGe.dir/src/HPGeRunAction.cc.o
HPGe: CMakeFiles/HPGe.dir/src/HPGeSteppingAction.cc.o
HPGe: CMakeFiles/HPGe.dir/build.make
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4Tree.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4FR.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4GMocren.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4visHepRep.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4RayTracer.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4VRML.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4OpenGL.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4gl2ps.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4vis_management.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4modeling.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4interfaces.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4persistency.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4error_propagation.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4readout.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4physicslists.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4tasking.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4parmodels.so
HPGe: /usr/lib/x86_64-linux-gnu/libXmu.so
HPGe: /usr/lib/x86_64-linux-gnu/libXext.so
HPGe: /usr/lib/x86_64-linux-gnu/libXt.so
HPGe: /usr/lib/x86_64-linux-gnu/libICE.so
HPGe: /usr/lib/x86_64-linux-gnu/libSM.so
HPGe: /usr/lib/x86_64-linux-gnu/libX11.so
HPGe: /usr/lib/x86_64-linux-gnu/libGL.so
HPGe: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.12.8
HPGe: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.12.8
HPGe: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
HPGe: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
HPGe: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4run.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4event.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4tracking.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4processes.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4analysis.so
HPGe: /usr/lib/x86_64-linux-gnu/libexpat.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4digits_hits.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4track.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4particles.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4geometry.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4materials.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4zlib.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4graphics_reps.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4intercoms.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4global.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4clhep.so
HPGe: /home/ripires/bin/Geant4/geant4.10.07.p02-install/lib/libG4ptl.so.0.0.2
HPGe: CMakeFiles/HPGe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ripires/HPGe/HPGe_dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable HPGe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HPGe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HPGe.dir/build: HPGe

.PHONY : CMakeFiles/HPGe.dir/build

CMakeFiles/HPGe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HPGe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HPGe.dir/clean

CMakeFiles/HPGe.dir/depend:
	cd /home/ripires/HPGe/HPGe_dev/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ripires/HPGe/HPGe_dev /home/ripires/HPGe/HPGe_dev /home/ripires/HPGe/HPGe_dev/build /home/ripires/HPGe/HPGe_dev/build /home/ripires/HPGe/HPGe_dev/build/CMakeFiles/HPGe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HPGe.dir/depend
