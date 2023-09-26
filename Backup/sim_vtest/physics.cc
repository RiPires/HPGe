#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
    //   ElectroMagnetic Standard Physiscs Lists   //
    RegisterPhysics (new G4EmStandardPhysics()); 
    //   Optical Phisics Lists   //
    RegisterPhysics (new G4OpticalPhysics()); 
}

MyPhysicsList::~MyPhysicsList()
{}
