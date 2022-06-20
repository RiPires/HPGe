#ifndef STEPPING_HH
#define STEPPING_HH

#include "G4UserSteppingAction.hh"
#include "G4Step.hh"

#include "construction_radioDecay.hh"
#include "event.hh"

class MySteppingAction : public G4UserSteppingAction
{
public:
    MySteppingAction(MyEventAction* eventAction);
    ~MySteppingAction();
    
    virtual void UserSteppingAction(const G4Step*);
    
private:
    MyEventAction *EventAction;
};

#endif
