#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
    // ElectroMagnetic Standard Physiscs Lists //
    // includes phenomena such as Compton scattering, 
    // photoelectric effect, etc.
    RegisterPhysics (new G4EmStandardPhysics()); 
    
    RegisterPhysics (new G4DecayPhysics());
    RegisterPhysics (new G4RadioactiveDecayPhysics());
}

MyPhysicsList::~MyPhysicsList()
{}