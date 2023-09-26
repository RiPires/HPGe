#include "detector.hh"

// Sensitive detector constructor //
MySensitiveDetector::MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{
    quantEff = new G4PhysicsOrderedFreeVector();
    
    std::ifstream datafile;
    datafile.open("detEff.dat");
    
    while(1)
    {
        G4double cdo, qEff;
        datafile >> cdo >> qEff;
        
        if(datafile.eof())
            break;
        
        ///G4cout << cdo << " " << qEff << G4endl;
        
        quantEff->InsertValues(cdo, qEff); //qEff values between 0 and 1
    }
    
    datafile.close();
    
    quantEff->SetSpline(false);
}

// Sensitive detector destructor //
MySensitiveDetector::~MySensitiveDetector()
{}

// Main Function //
G4bool MySensitiveDetector::ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist)
{
    G4Track *track = aStep->GetTrack();
    track->SetTrackStatus(fStopAndKill);
    
    G4StepPoint *preStepPoint = aStep->GetPreStepPoint();
    G4StepPoint *postStepPoint = aStep->GetPostStepPoint();
    
    G4ThreeVector posPhoton = preStepPoint->GetPosition(); // photon position
    G4ThreeVector momPhoton = preStepPoint->GetMomentum(); // photon momentum
    G4double cdo = (1.239841939*eV/momPhoton.mag())*1E+03; // photon cdo in nanometer
    
    #ifndef G4MULTITHREADED //VERIFICAR!
        ///G4cout << "Photon position: " << posPhoton << G4endl;
    #endif
        
    const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();
    
    G4int copynr = touchable->GetCopyNumber();
    
    //G4cout << "Copy number = " << copynr << G4endl;
    
    G4VPhysicalVolume *physVol = touchable->GetVolume();
    G4ThreeVector posDetector = physVol->GetTranslation();
    
    //G4cout << "Detector position = " << posDetector << G4endl;
    
    G4int evt = G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID();
    
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    man->FillNtupleIColumn(0, 0, evt);
    man->FillNtupleDColumn(0, 1, posPhoton[0]);
    man->FillNtupleDColumn(0, 2, posPhoton[1]);
    ///man->FillNtupleDColumn(0, 3, posPhoton[2]);
    man->FillNtupleDColumn(0, 4, cdo);
    man->AddNtupleRow(0);
    
    if(G4UniformRand() < quantEff->Value(cdo))
    {
    man->FillNtupleIColumn(0, evt);
    man->FillNtupleDColumn(1, posDetector[0]);
    man->FillNtupleDColumn(2, posDetector[1]);
    ///man->FillNtupleDColumn(3, posDetector[2]);
    man->AddNtupleRow(1);
    }

    return true; //ProcessHits function expects a return//
}
