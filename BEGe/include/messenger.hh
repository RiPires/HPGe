#ifndef MESSENGER_HH
#define MESSENGER_HH

#include "G4UIcmdWith3VectorAndUnit.hh"


// Forward declaration of MyActionInitialization
class MyActionInitialization;

#include "G4UImessenger.hh"  // Include G4UImessenger here

// Create a messenger class to handle user commands
class MyDetectorMessenger : public G4UImessenger
{
public:
    MyDetectorMessenger(MyActionInitialization *actionInitialization);
    ~MyDetectorMessenger();

    void SetNewValue(G4UIcommand *command, G4String newValue);

private:
    G4UIdirectory* detDir;
    G4UIcmdWith3VectorAndUnit *userPositionCmd;
    MyActionInitialization *actionInitialization;
};
#endif