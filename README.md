# Description
This is the repository dedicated to the development of the "Modelação e Simulação em Engenharia" project regarding the simulation of a hyper-pure germanium detector using GEANT4.

In the branch main you'll find the latest stable version of the program.

The simulation of the "Broad Energy Germanium detector" is implemented in the BEGe folder.

## Dependencies
This project was developed using:
* Kubuntu20.04 system, with kernel version 5.15.0-91-generic;
* gcc/g++ version 9.4.0;
* cmake version 3.16.3;
* geant4.10.07 (See how to install [https://geant4-userdoc.web.cern.ch/UsersGuides/InstallationGuide/html/]);
* ROOT version 6.26/04 (See how to install [https://root.cern/install/]).

## Build your simulation
After you clone this repository to your machine, go to the build folder in BEGe:

  `cd BEGe/build`

Initialize the CMake project:

  `cmake ..`

Build the project (-j4 using 4 threads):

  `make -j4`

Run the executable, launching the User Interface:

  `./mainSim`

Or, using the command macro:

  `./mainSim run-test.mac`
