#ifndef ACTION_HH
#define ACTION_HH

#include "G4VUserActionInitialization.hh"
#include "run.hh"
#include "event.hh"
#include "stepping.hh"

class MyActionInitialization : public G4VUserActionInitialization
{
public:
    //  Action initialization constructor and destructor definition  //
    MyActionInitialization();
    ~MyActionInitialization();
    
    //  Main function for action initialization BUILD  //
    virtual void Build() const;
    virtual void BuildForMaster() const;
    
};
#endif
