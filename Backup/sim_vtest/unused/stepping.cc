#include "stepping.hh"

MySteppingAction::MySteppingAction(MyEventAction *eventAction)
{
    EventAction = eventAction;
}

MySteppingAction::~MySteppingAction()
{}

void MySteppingAction::UserSteppingAction(const G4Step *step)
{
    
    G4LogicalVolume *volume = step->GetPreStepPoint()->GetTouchableHandle()->GetVolume()->GetLogicalVolume();
    
    const MyDetectorConstruction *detectorConstruction = static_cast<const MyDetectorConstruction*> (G4RunManager::GetRunManager()->GetUserDetectorConstruction());
    
    G4LogicalVolume *ScoringVolume = detectorConstruction->GetScoringVolume();
    
    if(volume != ScoringVolume)
        return;
    
    G4double edep = step->GetTotalEnergyDeposit();
    EventAction->AddEdep(edep);
}
