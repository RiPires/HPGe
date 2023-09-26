#include "detector.hh"

MySensitiveDetector::MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{}

MySensitiveDetector::~MySensitiveDetector()
{}

// Every time a photon hits our detector this class is activated //
G4bool MySensitiveDetector::ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist)
{
    // 
    G4Track *track = aStep->GetTrack();
    G4StepPoint *preStepPoint = aStep->GetPreStepPoint();
    G4StepPoint *postStepPoint = aStep->GetPostStepPoint();
    
    // Acede ầ posição "exata" do fotão quando atinge o detetor //
    G4ThreeVector posPhoton = preStepPoint->GetPosition();
    G4cout << "Photon position: " << posPhoton << G4endl;
    
    // Acede ao indice do detetor que é atingido //
    const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();
    G4int copyNr = touchable->GetCopyNumber();
    G4cout << "Copy Nr: " << copyNr << G4endl;
    
    // Acede à posição do detetor que é atingido
    G4VPhysicalVolume *physVolume = touchable->GetVolume();
    G4ThreeVector posDetector = physVolume->GetTranslation();
    G4cout << "Detector position: " << posDetector << "\n" << G4endl;
    
    G4int eventNr = G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID();
    
    // Hits are stored in Ntuple to be written in the output ROOT file //
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    man->FillNtupleIColumn(0, eventNr); // IColumn means it's an Integer
    man->FillNtupleDColumn(1, posDetector[0]); // DColumn means it's a Double
    man->FillNtupleDColumn(2, posDetector[1]);
    man->FillNtupleDColumn(3, posDetector[2]);
    man->AddNtupleRow(0);
    
    return true;
}
