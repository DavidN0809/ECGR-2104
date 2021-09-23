#ifndef TREASURE_H
#define TREASURE_H
#include <iostream>
#include <string>
#include <random>
#include <vector>
#include "Player.h"
#include "Land.h"

using namespace std;

//Empty Class declarations
//Game Engine functions
class Game{
    const int numofLand=5;
    public:
     void GameEngine(Player& p);
};


#endif
