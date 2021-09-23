#include "treasure.h"
using namespace std;

void Game::GameEngine(Player& p){
    p.setmap();
    int mapDim=p.getDim();
    
    random_device dev;
    mt19937 twist(dev());
    uniform_int_distribution<size_t> u(0,mapDim-1); 
    
    Land* map[mapDim][mapDim];
    
    //generating random map
    for(int i=0; i<mapDim; ++i){
        for(int j=0; j<mapDim; ++i){
            
         switch(u(twist)%numofLand-1){
             case 0:
             map[i][j] = new Forest;
             break;
             case 1:
             map[i][j]=new Lake;
             break;
             
             case 2:
              map[i][j]=new Desert;
             break;
             
             case 3:
              map[i][j]=new Orchard;
             break;
            }
            
        }
    }
    

int xPlay = p.getX(); //causing segmentation fault
int yPlay = p.getY();

while((xPlay==p.getX())&&(yPlay==p.getY())){ 
    xPlay=u(twist);
    yPlay=u(twist);
    
}

    delete map[xPlay][yPlay];
    map[xPlay][yPlay] = new Ruins;
    cout << p.getX() << endl;
    cout << p.getY() << endl;
    cout << "xplay = " <<xPlay <<endl;
    cout << "yplay = " << yPlay<<endl;


p.mapdem();

int x=p.getX(); 
int y=p.getY();
{
cout << "North of you there is " << map[x][y+1]<<endl; //displaying what is north/south/west/east
cout << "South of you there is " << map[x][y-1]<<endl; //displaying call function for desc???
cout << "East of you there is " << map[x+1][y]<<endl;
cout << "West of you there is " << map[x-1][y]<<endl;
p.playermov();
}

while((p.getenergy()>0)||(p.getTreasure()==false)||(p.userinput!='Q'));
if(p.userinput=='Q')
    cout << "Now exiting game.\n";
if(p.getenergy()==0)
cout << "You are out of energy, and have lost the game.\n";
}

