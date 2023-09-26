#include "physics.hh"

// Physics Lists constructor //
MyPhysicsList::MyPhysicsList()
{
    //   ElectroMagnetic Standard Physiscs Lists   //
    RegisterPhysics (new G4EmStandardPhysics()); 
    //   Optical Phisics Lists   //
    RegisterPhysics (new G4OpticalPhysics()); 
}

// Physics Lists destructor //
MyPhysicsList::~MyPhysicsList()
{}
