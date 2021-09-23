#include "Player.h"

//Player class definitions
//default
Player::Player(){
        this->energy=5;
        this->treasure=false;
        this->x=5;
        this->y=5;
}

//setting energy and player x and y cord changes
void Player::setEnergy(int energych){
    if(this->energy>11)
    this->energy=this->energy+energych;
    else if(this->energy==11)
    this->energy==10;
    else{
        cout << "You have reached max energy! Which is energy level " << this->energy;
    }
}
int Player::pxchange(int change){
    this->x=this->x+change;
    return getX();
}

int Player::pychange(int change){
    this->y=this->y+change;
    return getY();
}

//setting map size
void Player::setmap(){
    int input;
    cout << "What size map? Ie 10x10, 20x20, etc\n";
    cout << "If you want a 10x10 map enter 10, for 20x20 enter 20 etc.\n";
    cin >> input;
    this->mapdim==input;
    Player::setstart(input);
    
}

void Player::setstart(int map){
    int start=map/2;
    this->x=start, this->y=start;
}

void Player::playermov(){
    
  Player::userinput;
  do{
      cout << "Which direction do you want to move?" << endl;
      cout << "Enter N for North, S for South, W for West, and E for East." <<endl;
      cin >> Player::userinput;
      
      Player::pcordchange(userinput);
      Player::mapdem();
}while(Player::mapdem()==true);

      cout << "Current energy level is " << Player::energy << endl;

      cout << "Do you want to quit? If so enter Q, if not enter N." << endl;
      cin >> Player::userinput;
  }
 
void Player::pcordchange (char userinput){
    if((userinput=='N')||userinput=='n'){
    pychange(1);
    //visit function
    }
    else if((userinput=='S')||userinput=='s'){
    pychange(-1);
    //visit function
    }
    else if((userinput=='W')||userinput=='w'){
    pxchange(1);
    }
    else if((userinput=='E')||userinput=='e'){
    pxchange(-1);
    }
}

bool Player::mapdem(){
    int y= getY();
    int x=getX();
    if(y>=10){
    cout <<"Please re enter the player movement, player cannot move North.\n";
    pychange(-1);    
    return true;}
    
    else if(y<0){
    cout <<"Please re enter the player movement, player cannot move South.\n";
    pychange(1);
    return true;}
    
    else if(x>10){
    cout <<"Please re enter the player movement, player cannot move East.\n";
        pxchange(-1);
    return true;}
    
    
    else if(x<0){
    cout <<"Please re enter the player movement, player cannot move West.\n";
        pxchange(1);
    return true;}
    
    else{
        return false;
    }
    
}

//changing treasure to true
void Player::maketreasure(){
    this->treasure=true;

}

//all get functions
bool Player::getTreasure(){
   return this->treasure;
}

int Player::getenergy(){
   return this->energy;
}
int Player::getX(){
    return this->x;
}

int Player::getY(){
    return this->y;
}

int Player::getDim(){
    return this->mapdim;
}