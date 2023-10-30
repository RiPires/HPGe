#include "event.hh"

MyEventAction::MyEventAction(MyRunAction*)
{   Edep = 0.; nHits = 0;}

MyEventAction::~MyEventAction()
{}

void MyEventAction::BeginOfEventAction(const G4Event*) 
{   Edep = 0.; AddHits();}

void MyEventAction::EndOfEventAction(const G4Event*)
{
    ///G4cout << "Energy deposition: " << Edep << " MeV" << G4endl;
    
    // Inicializes an instance of the AnalysisManager
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    // Fills tuple for energy deposition in the event
    // and starts new row
    man->FillNtupleDColumn(1, 0, Edep);
    man->FillNtupleIColumn(1, 1, nHits);
    man->AddNtupleRow(1); 
}


