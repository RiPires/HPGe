#ifndef GENERATOR_HH
#define GENERATOR_HH

#include "G4VUserPrimaryGeneratorAction.hh"
#include "G4ParticleGun.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleTable.hh"


class MyPrimaryGenerator : public G4VUserPrimaryGeneratorAction
{
// Primary particle generator constuctor and destructor definition  //
public:
    MyPrimaryGenerator();
    ~MyPrimaryGenerator();
    
    //  Main function of MyPrimaryGenerator class  //
    virtual void GeneratePrimaries(G4Event*);

private:
    G4ParticleGun *fParticleGun;
};
#endif
