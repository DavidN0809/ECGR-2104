#include "Player.h"
#include <iostream>
using namespace std;

class Land{
    public:
    virtual string desc(void)=0;
     virtual void visit(Player& obj)=0;
};

class Desert: public Land{
    public:
    string desc(void){return "an arid hot desert to the east\n";}
    void visit(Player& obj) {
       cout << "You walk through the hot and dry desert\n";
       obj.setEnergy(-2);
    }
    
};
//fix with right text later

class Forest: public Land{
    public:
    string desc(void){return "a tropical dense forest \n";}
   void visit(Player& obj) {
       cout << "You trek through the dense forest\n";
       obj.setEnergy(-1);
    }
    
};


class Lake: public Land{
    public:
    string desc(void){return "a water body to quench your thirst\n";}
    void visit(Player& obj) {
       cout << "You are hydrated\n";
       obj.setEnergy(1);
    }
    
};


class Orchard: public Land{
    public:
    string desc(void){return "an orchard filled with apples\n";}
    void visit(Player& obj) {
       cout << "You eat an apple in the orchard\n";
       obj.setEnergy(2);
    }
    
};

class Ruins:public Land{
    public:
    void visit(Player& obj){
        obj.maketreasure();
    }
    string desc(void){return "Congrats you found the treasure.\n You have won!\n";}
    
};