#include "detector.hh"

// Sensitive detector constuctor and destructor   //
MySensitiveDetector::MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{
    quantEff = new G4PhysicsOrderedFreeVector();
    
    std::ifstream datafile;
    datafile.open("hpge_effTest.dat");
    
    while(1)
    {
        G4double photonEnergy, qEff;
        datafile >> photonEnergy >> qEff;
        
        if(datafile.eof())
            break;
        
        ///G4cout << photonEnergy << "\t" << qEff << G4endl;
        
        quantEff->InsertValues(photonEnergy, qEff);
    }
    
    datafile.close();
    
    quantEff->SetSpline(false);
}

MySensitiveDetector::~MySensitiveDetector()
{}

//   Creates a Hit when a step takes place in a definded sensitive logical detector
// in a user sensitive detector function called ProcessHits(...)
G4bool MySensitiveDetector::ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist)
{

    G4Track *track = aStep->GetTrack();                     // Gets particle info. in a step
    track->SetTrackStatus(fStopAndKill);// ?????? fStopAndKill: O que é que isto FAZ ??????
    
    G4StepPoint *preStepPoint = aStep->GetPreStepPoint();   // Info. no início do passo
    G4StepPoint *postStepPoint = aStep->GetPostStepPoint(); // Info. no fim do passo
    
    G4ThreeVector posPhoton = preStepPoint->GetPosition();  // Posição no início do passo
    G4ThreeVector momPhoton = preStepPoint->GetMomentum();  // Momento no início do passo
    
    G4double cdo /*[nm]*/ = (1.239841939*eV/momPhoton.mag())*1E+03;//Converte o momento em comprtimento de onda
    G4double photonEnergy = momPhoton.mag();                // Magnitude do momento do fotão  
                                                    //???? Porque é que é a energia????? 
    ///G4cout << "Photon position: " << posPhoton << G4endl;//Prints photon position
    
    const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();
    
    G4int copynr = touchable->GetCopyNumber();
    ///G4cout << "Copy number = " << copynr << G4endl;
    
    G4VPhysicalVolume *physVol = touchable->GetVolume();
    G4ThreeVector posDetector = physVol->GetTranslation();
    
    ///G4cout << "Detector position = " << posDetector << G4endl;
    
    G4int evt = G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID();
    
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    man->FillNtupleIColumn(0, 0, evt);
    man->FillNtupleDColumn(0, 1, posPhoton[0]);
    man->FillNtupleDColumn(0, 2, posPhoton[1]);
    man->FillNtupleDColumn(0, 3, posPhoton[2]);
    man->FillNtupleDColumn(0, 4, cdo);
    man->FillNtupleDColumn(0, 5, photonEnergy);
    man->AddNtupleRow(0);
    
    if(G4UniformRand() < quantEff->Value(photonEnergy))
    {
    man->FillNtupleIColumn(1, 0, evt);
    man->FillNtupleDColumn(1, 1, posDetector[0]);
    man->FillNtupleDColumn(1, 2, posDetector[1]);
    man->FillNtupleDColumn(1, 3, posDetector[2]);
    man->AddNtupleRow(1);
    }    

    return true; //Because it's a Boolean, ProcessHits function expects a return
                // better to be True
}
