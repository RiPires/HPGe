#ifndef PHYSICS_HH
#define PHYSICS_HH

#include "G4VModularPhysicsList.hh"
#include "G4EmStandardPhysics.hh"
#include "G4OpticalPhysics.hh"

class MyPhysicsList : public G4VModularPhysicsList
{
public:
    
    //  Physics lists constructor and destructor definition //    
    MyPhysicsList();
    ~MyPhysicsList();
};

#endif
