#include "run.hh"

MyRunAction::MyRunAction()
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    
    man->CreateNtuple("NrHits", "NrHits");
    man->CreateNtupleIColumn("EventNr");
    man->CreateNtupleDColumn("EventX");
    man->CreateNtupleDColumn("EventY");
    man->CreateNtupleDColumn("EventZ");
    man->FinishNtuple(0); 
    
    man->CreateNtuple("Photons", "Photons");
    man->CreateNtupleIColumn("EventNr");
    man->CreateNtupleDColumn("EventX");
    man->CreateNtupleDColumn("EventY");
    man->CreateNtupleDColumn("EventZ");
    man->CreateNtupleDColumn("Photon_cdo");
    man->FinishNtuple(1);
    
    man->CreateNtuple("Scoring", "Scoring");
    man->CreateNtupleDColumn("Edep");
    man->FinishNtuple(2);
}

MyRunAction::~MyRunAction()
{}

void MyRunAction::BeginOfRunAction(const G4Run* run)
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    G4int runID = run->GetRunID();
    std::stringstream strRunID;
    strRunID << runID;
    
    man->OpenFile("output.root");
}

void MyRunAction::EndOfRunAction(const G4Run*)
{
    G4AnalysisManager *man = G4AnalysisManager::Instance();
    man->Write();
    man->CloseFile();
}
