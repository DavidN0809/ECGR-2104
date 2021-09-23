#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <iomanip>
using namespace std;

//class Player;
class Player{
        int y, x;
        bool treasure;
        int mapdim;
        int energy;
        
    public:
    Player();
    int getDim();
    bool mapdem();
    void playermov();
    void setmap();
    void setstart(int);

//functions to change private vars
    int pychange(int);
    int pxchange(int);
    void setEnergy(int);
    void pcordchange(char);
    void maketreasure();
    
    char userinput='N';
    
    //get functions
    int getX();
    int getY();
    int getenergy();
    bool getTreasure();

};

#endif
