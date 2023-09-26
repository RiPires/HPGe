#include "generator.hh"

//   Primary particle generator constuctor  //
MyPrimaryGenerator::MyPrimaryGenerator()
{
    fParticleGun = new G4ParticleGun(1);
    
    G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
    G4String particleName="proton";
    G4ParticleDefinition *particle = particleTable->FindParticle("proton");
    
    G4ThreeVector pos(0.,0.,0.);
    G4ThreeVector mom(0.,0.,1.);
    
    fParticleGun->SetParticlePosition(pos);
    fParticleGun->SetParticleMomentumDirection(mom);
    fParticleGun->SetParticleMomentum(100.*GeV);
    fParticleGun->SetParticleDefinition(particle);
}

//   Primary particle generator destructor  //
MyPrimaryGenerator::~MyPrimaryGenerator()
{
    delete fParticleGun;
}

//   Generate primary particle as a proton   //
void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{
    
    fParticleGun->GeneratePrimaryVertex(anEvent);
}
