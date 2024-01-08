#ifndef ACTION_HH
#define ACTION_HH

#include "G4VUserActionInitialization.hh"
#include "run.hh"
#include "event.hh"
#include "stepping.hh"
#include "G4UIcmdWith3VectorAndUnit.hh"
#include "messenger.hh"

class MyActionInitialization : public G4VUserActionInitialization
{
    public:
        MyActionInitialization();
        ~MyActionInitialization();
    
        virtual void Build() const;
        virtual void BuildForMaster() const;

        void SetUserPosition(G4ThreeVector pos);
        G4ThreeVector GetUserPosition() const;


    private:
        G4ThreeVector userPosition;
};
#endif