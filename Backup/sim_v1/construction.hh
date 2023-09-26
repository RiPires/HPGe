#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include "G4SystemOfUnits.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4UImanager.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "G4GenericMessenger.hh"

#include "detector.hh"


class MyDetectorConstruction : public G4VUserDetectorConstruction
{
//  Detector construction constructor and destructor definition  //
public:
    MyDetectorConstruction();
    ~MyDetectorConstruction();
    
    G4LogicalVolume *GetScoringVolume() const { return ScoringVolume;}
    
    //  Main functions for DetectorConstruction  //
    virtual G4VPhysicalVolume *Construct();
    virtual void ConstructSDandField();// Looking for Sensitive Detector and (electric or magnetic) fields
    
private:
    //  Definition of classes and functions that need to be accessed from outside construction.cc  //
    G4int nCols, nRows;// nr of columns and nr of rows in case of detector array
    
    G4Box *solidWorld, *solidRadiator, *solidDetector;// solid volumes definition
    
    G4LogicalVolume *logicWorld, *logicRadiator, *logicDetector;// logic volumes definiton
    
    G4VPhysicalVolume *physWorld, *physRadiator, *physDetector;// physical volumes definiton
    
    G4GenericMessenger *fMessenger;
    
    G4Material *SiO2, *H2O, *Aerogel, *worldMat;// materials definition
    G4Element *C;// elements definiton
    
    void DefineMaterials();
    
    G4LogicalVolume *ScoringVolume;// Socring volume definiton
};

#endif
