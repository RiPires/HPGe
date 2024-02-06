This is the repository dedicated to the development of the "Modelação e Simulação em Engenharia" project regarding the simulation of a hyper-pure germanium detector using GEANT4.

In the branch main you'll find the latest stable version of the program.

The simulation of the "Broad Energy Germanium detector" is implemented in the BEGe folder.

After you clone this repository to your machine, go to the build folder in BEGe:

cd BEGe/build

Initialize the CMake project:

cmake ..

Build the project (-j4 using 4 threads):

make -j4

Run the executable, launching the User Interface:

./mainSim

Or, using the command macro:

./mainSim run-test.mac
