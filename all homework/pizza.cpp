#include <iostream>

using namespace std;

class Pizza{
    string type;
    string size;
    double price;
    const int array[3][3]={10,14,17, //thin
                           11,15,18, //hand
                           11, 14,17};//pan
public:
void settypes(string,string);
void outputDescription();
void computerPrice();
};

void Pizza::settypes(string usertype, string usercrust){
     type=usertype;
     size=usercrust;
}

void Pizza::outputDescription(){
    cout << "You ordered a " << size << " " << type << " pizza."<<endl;
}
void Pizza::computerPrice(){
    int i,j;
    if(size=="thin")
    i=0;
    if(size=="pan")
    i=1;
    if(size=="hand")
    i=2;
    if(type=="small")
    j=0;
    if(type=="medium")
    j=1;
    if(type=="large")
    j=2;
    cout << array[i][j];
    
}

int main()
{
    Pizza user;
string size;
string crust;
cout << "Please enter the size then the type of pizza in lowercase"<<endl;
cout << "For hand tossed pizzas enter hand" << endl;
cin >> size;
cin>>crust;

user.settypes(size,crust);
user.outputDescription();
cout << "Your total is $";
user.computerPrice();
cout << endl;
    return 0;
}

