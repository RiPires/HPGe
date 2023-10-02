#include "generator.hh"

//   Primary particle generator constuctor and destructor   //
MyPrimaryGenerator::MyPrimaryGenerator()
{
    fParticleGun = new G4ParticleGun(1);
    
    G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
    G4String particleName="geantino"; // What we call to this geantino particle
    G4ParticleDefinition *particle = particleTable->FindParticle("geantino"); // Sets prim .particle as GEANTINO  ///
    
    G4ThreeVector pos(0.,0.,-5.*mm); //  Position for particle gun
    G4ThreeVector mom(0.,0.,1.);     //  Momentum direction vector for prim. particle
    
    fParticleGun->SetParticlePosition(pos);          // Particle Position
    fParticleGun->SetParticleMomentumDirection(mom); // Particle Momentum Direction
    fParticleGun->SetParticleMomentum(0.*keV);       // Particle Momentum magnitude
    fParticleGun->SetParticleDefinition(particle);   // Sets particle as GEANTINO prev. deffined
}

MyPrimaryGenerator::~MyPrimaryGenerator()
{ 
    delete fParticleGun;
}


///   *************   Generation of primary GAMMAS   ***********   ///
void MyPrimaryGenerator::GeneratePrimaries(G4Event *anEvent)
{   
    G4ParticleDefinition *particle = fParticleGun->GetParticleDefinition();
    if(particle == G4Geantino::Geantino())
    {   
        G4ParticleTable *particleTable = G4ParticleTable::GetParticleTable();
        G4ParticleDefinition *gamma = particleTable->FindParticle("gamma");
        fParticleGun->SetParticleMomentum(135.*keV);
        fParticleGun->SetParticleDefinition(gamma);
    }

    fParticleGun->GeneratePrimaryVertex(anEvent);
}
///   *********************************************************   ///
