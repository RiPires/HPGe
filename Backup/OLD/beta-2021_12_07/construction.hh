#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include "G4SystemOfUnits.hh"

#include "G4VUserDetectorConstruction.hh"
#include "G4UImanager.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4Tubs.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4GenericMessenger.hh"

#include "detector.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public:
    MyDetectorConstruction();
    ~MyDetectorConstruction();
    
    G4LogicalVolume *GetScoringVolume() const { return ScoringVolume;}
    
    virtual G4VPhysicalVolume *Construct();
    
private:
    
    virtual void ConstructSDandField();
    
    G4int nCols, nRows;
    
    G4Box *solidWorld, *solidRadiator, *solidDetector;
    G4Tubs *solidScintilator;
    G4LogicalVolume *logicWorld, *logicRadiator, *logicDetector, *logicScintilator;
    G4VPhysicalVolume *physWorld, *physRadiator, *physDetector, *physScintilator;
    
    G4GenericMessenger *fMessenger;
    
    G4Material *SiO2, *H2O, *Aerogel, *worldMat, *NaI;
    G4Element *C, *Na, *I;
    
    void DefineMaterial();
    
    void ConstructCherenkov();
    void ConstructScintilator();
    
    G4LogicalVolume *ScoringVolume;
    
    G4double xWorld, yWorld, zWorld;
    G4bool isCherenkov, isScintilator;

};

#endif
