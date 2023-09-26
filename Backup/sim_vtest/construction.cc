#include "construction.hh"

MyDetectorConstruction::MyDetectorConstruction()
{
    fMessenger = new G4GenericMessenger(this, "/detector/", "DetectorConstruction");
    
    fMessenger->DeclareProperty("nCols", nCols, "Number of Columns");
    fMessenger->DeclareProperty("nRows", nRows, "Number of Rows");
    
    nCols = 100;
    nRows = 100;
    
    DefineMaterials();
}

MyDetectorConstruction::~MyDetectorConstruction()
{}

//  ----------------------------------------------  //
void MyDetectorConstruction::DefineMaterials()
{
    //  Materials  //
    G4NistManager *nist = G4NistManager::Instance();
    
    // SiO2
    SiO2 = new G4Material("SiO2", 2.201*g/cm3, 2);
    SiO2->AddElement(nist->FindOrBuildElement("Si"), 1);
    SiO2->AddElement(nist->FindOrBuildElement("O"), 2);
    // H2O
    H2O = new G4Material("H2O", 1.000*g/cm3, 2);
    H2O->AddElement(nist->FindOrBuildElement("H"), 2);
    H2O->AddElement(nist->FindOrBuildElement("O"), 1);
    //   Elements   //
    C = nist->FindOrBuildElement("C");
    
    //   Aerogel material definition  //
    Aerogel = new G4Material("Aerogel", 0.200*g/cm3, 3);
    Aerogel->AddMaterial(SiO2, 62.5*perCent);
    Aerogel->AddMaterial(H2O, 37.4*perCent);
    Aerogel->AddElement(C, 0.1*perCent);
    
    //   Defines world material as Air - as it's own properties  //
    worldMat = nist->FindOrBuildMaterial("G4_AIR");
    
    //   Optical photons energy (wavelenght) interval   //
    G4double energy[2] = {1.239841939*eV/0.2, 1.239841939*eV/0.9};
    
    //   Refraction indexes   //
    G4double rindexAerogel[2] = {1.1, 1.1};// constant over optical interval
    G4double rindexWorld[2] = {1.0, 1.0}; 
    //   Defines Aerogel refraction index propertie   //    
    G4MaterialPropertiesTable *mptAerogel = new G4MaterialPropertiesTable();
    mptAerogel->AddProperty("RINDEX", energy, rindexAerogel, 2);
    Aerogel->SetMaterialPropertiesTable(mptAerogel);
    //   Defines world material refraction index   //
    G4MaterialPropertiesTable *mptWorld = new G4MaterialPropertiesTable();
    mptWorld->AddProperty("RINDEX", energy, rindexWorld, 2);
    worldMat->SetMaterialPropertiesTable(mptWorld);
}

//                                                    //
G4VPhysicalVolume *MyDetectorConstruction::Construct()
{
    G4double xWorld = 0.5*m;
    G4double yWorld = 0.5*m;
    G4double zWorld = 0.5*m;
    
    //   Defines a "solid" volume for world   //
    solidWorld = new G4Box("solidWorld", 0.5*m, 0.5*m, 0.5*m); //medidas genericas em mm; o comando *m mete em metro - precisa de incluir o .hh
    //   Defines the logical world from the "solid" one with the properties above
    logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");
    //   Defines a physical world adding coordinates to the logical world  //
    physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "physWorld", 0, false, 0, true);

    //   Defines a "solid" volume for cherenkov radiator 
    solidRadiator = new G4Box("solidRadiator", 0.4*m, 0.4*m, 0.01*m);
    //   Defines the logical volume of the radiator from the "solid" one with the properties above
    logicRadiator = new G4LogicalVolume(solidRadiator, Aerogel, "logicRadiator");
    ScoringVolume = logicRadiator;
    //   Defines a physical radiator adding coordinates to the logical radiator  //
    physRadiator = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.25*m), logicRadiator, "physRadiator", logicWorld, false, 0, true);
  
    //   Defines a "solid" volume for detector   //
    solidDetector = new G4Box("solidDetector", xWorld/nCols, yWorld/nRows, 0.01*m);
    ///solidDetector = new G4Box("solidDetector", 0.4*m, 0.4*m, 0.01*m);
    
    //   Defines the logical volume of the detector from the "solid" one with its properties
    logicDetector = new G4LogicalVolume(solidDetector, worldMat, "logicDetector");//  Tipicamente usam-se detetores de Si
                                                                                  // mas a titulo de exemplo definimos o material 
                                                                                  // do detetor como sendo igual ao material do mundo; para todos
                                                                                  // os efeitos so precisamos que este seja sensivel a fotoes oticos
    //   Defines a physical detector adding coordinates to the logical detector  //
    ///physDetector = new G4PVPlacement(0, G4ThreeVector(-0.5, -0.5, 0.49*m), logicDetector, "physDetector", logicWorld, false, true);
    //   Creates i * j array of physDetector   //
    for(G4int i = 0; i < nRows; i++)
    {
        for(G4int j = 0; j < nCols; j++)
        {
          physDetector = new G4PVPlacement(0, G4ThreeVector(-0.5*m+(i+0.5)*m/nRows, -0.5*m+(j+0.5)*m/nCols, 0.49*m), logicDetector, "physDetector", logicWorld, false, j+i*nCols, true);
        }
    } 
    
  return physWorld;
}    

//   //
void MyDetectorConstruction::ConstructSDandField()
{
    MySensitiveDetector *sensDet = new MySensitiveDetector("SensitiveDetector");
    logicDetector->SetSensitiveDetector(sensDet);  //Isto faz parar o programa!!!
}
