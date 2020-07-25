//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#include "G4TrackingManager.hh"
#include "G4Track.hh"
#include "Verbose.hh"

#include "MyTrackAction.hh"
#include "MyAnalysisManager.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

MyTrackAction::MyTrackAction()
    : G4UserTrackingAction()
{
    if (verbose)
        G4cout << "====>MyTrackAction::MyTrackAction()" << G4endl;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

MyTrackAction::~MyTrackAction()
{
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

void MyTrackAction::PostUserTrackingAction(const G4Track* aTrack)
{ 
    if (verbose)
        G4cout << "====>MyTrackAction::PostUserTrackingAction()" << G4endl;
    
    MyAnalysisManager::GetInstance()->TrackingAction(aTrack);
}
