#include "messenger.hh"
#include "action.hh"

// Implement the messenger class
MyDetectorMessenger::MyDetectorMessenger(MyActionInitialization* actionInitialization)
    : G4UImessenger(), actionInitialization(actionInitialization)
{
    detDir = new G4UIdirectory("/myapp/");
    detDir->SetGuidance("UI commands for MyApplication");

    userPositionCmd = new G4UIcmdWith3VectorAndUnit("/myapp/setUserPosition", this);
    userPositionCmd->SetGuidance("Set the user position for the primary generator");
    userPositionCmd->SetParameterName("X", "Y", "Z", false);
    userPositionCmd->SetDefaultUnit("mm");
}

MyDetectorMessenger::~MyDetectorMessenger()
{
    delete userPositionCmd;
    delete detDir;
}

void MyDetectorMessenger::SetNewValue(G4UIcommand* command, G4String newValue)
{
    if (command == userPositionCmd)
    {
        G4cout << "Setting user position to: " << newValue << G4endl;
        // Set the user position in the action initialization class
        actionInitialization->SetUserPosition(userPositionCmd->ConvertTo3Vector(newValue));
        G4cout << "User position set to: " << actionInitialization->GetUserPosition() << G4endl;
    }
}
