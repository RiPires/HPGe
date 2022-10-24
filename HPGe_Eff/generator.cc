#include "generator.hh"

//   Primary particle generator constuctor and destructor   //
MyPrimaryGenerator::MyPrimaryGenerator()
{
    fParticleGun = new G4ParticleGun(1);
    
    G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
    G4String particleName="geantino";
    G4ParticleDefinition *particle = particleTable->FindParticle("geantino");
    
    G4ThreeVector pos(0.,0.,-5.*cm);
    G4ThreeVector mom(0.,0.,1.);
    
    fParticleGun->SetParticlePosition(pos);
    fParticleGun->SetParticleMomentumDirection(mom);
    fParticleGun->SetParticleMomentum(0.*keV);
    fParticleGun->SetParticleDefinition(particle);
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{
    delete fParticleGun;
}

//   Generate primary particle as a radioactive punctual source   //
void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{    
    G4ParticleDefinition *particle = fParticleGun->GetParticleDefinition();
    
    if(particle == G4Geantino::Geantino())
    {
        // Cobalt-60 source //
        ///G4int Z = 27;
        ///G4int A = 60;
        
        // Sb-117 source //
        G4int Z = 51;
        G4int A = 117;
        
        G4double charge = 0.;
        G4double energy = 0.;
        
        G4ParticleDefinition *ion = G4IonTable::GetIonTable()->GetIon(Z, A, energy);
        
        fParticleGun->SetParticleDefinition(ion);
        fParticleGun->SetParticleCharge(charge);
    }
    fParticleGun->GeneratePrimaryVertex(anEvent);
}
