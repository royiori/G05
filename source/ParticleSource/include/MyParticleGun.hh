//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#ifndef _MyParticleGun_H_
#define _MyParticleGun_H_

#include "G4VUserPrimaryGeneratorAction.hh"

#include "globals.hh"
//#include "g4root.hh"
class TFile;
class TTree;
class TH1F;
class G4Event;
class G4ParticleGun;
class MyParticleGunMessenger;

class MyParticleGun : public G4VUserPrimaryGeneratorAction
{
public:
    MyParticleGun();
    ~MyParticleGun();

    virtual void GeneratePrimaries(G4Event *anEvent);

private:
    G4ParticleGun *fParticleGun;
    MyParticleGunMessenger *fGunMessenger;

    //#PartGun 1. 定义用户变量
public:
    void OpenFile(G4String fname);
    inline void UseSimpleGun() { GunType = 0; }

private:
    int GunType;

    TFile *rootfile;
    TTree *tree;
    long Nentries;
    double freq;
    double x, y, z;
    double px, py, pz;
};

#endif
