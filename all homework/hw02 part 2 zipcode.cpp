#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Zipcode{
    int zipcode;
    string ziparray[10]={"11000","00011","00101","00110","01001","01010","01100","10001","10010","10100"}; //array to change zipcodes digits to encoded formate
    string display[5]={"-0","-0","-0","-0","-0"}; //array that is being displayed and filled with zipcode
    char array[10]={'0','1','2','3','4','5','6','7','8','9'}; //array to check against zipcode
    string barcode;

public:      
void encode(); //output string
void decode();  //output int
Zipcode(string);
Zipcode(int);
};

Zipcode::Zipcode(string inBar){
	this->zipcode = 0;
	this->barcode = inBar;
}

Zipcode::Zipcode(int inZip){
	this->zipcode = inZip;
	this->barcode = "";
}

void Zipcode::encode(){ //encodes zipcode and outputs as an string
string zip=to_string(this->zipcode);
int i,j;
for(i=0;i<10;++i){
   for(j=0;j<zip.length();++j){
      if(zip.at(j)==Zipcode::array[i]){ //checks for what digit in zipcode
         Zipcode::display[j]=Zipcode::ziparray[i];
        }
    }
}

cout<<"Zip code encoded is 1"; //displays encoded version with 1 in beginning and end.
for(i=0;i<5;++i)
 cout << Zipcode::display[i];
cout <<"1"<<endl;
}

void Zipcode::decode(){ //encodes zipcode and outputs as a int;
string zip=this->barcode; 
int i, j=0, x=1;

for(i=0;i<11;++i){
if(zip.substr(1,5)==Zipcode::ziparray[i])
display[0]=Zipcode::array[i];
if(zip.substr(6,5)==Zipcode::ziparray[i])
display[1]=Zipcode::array[i];
if(zip.substr(11,5)==Zipcode::ziparray[i])
display[2]=Zipcode::array[i];
if(zip.substr(16,5)==Zipcode::ziparray[i])
display[3]=Zipcode::array[i];
if(zip.substr(21,5)==Zipcode::ziparray[i])
display[4]=Zipcode::array[i];
}

for(i=0;i<5;++i)
 cout << Zipcode::display[i];
}
    
int main(){
int action, zipcode;
string barcode;
cout<<"Do you want to either,\n";
cout <<"1. Convert zipcode to barcode, or\n";
cout << "2. Convert barcode to zipcode.\n";
cin >> action;
if (action==1){
	cout<<"Enter the zipcode:"<<endl;
		cin>>zipcode;
		Zipcode zip(zipcode);
		zip.encode();
}
else if(action==2){
		cout<<"Remember the extra 1 at the beginning and end of the zipcode\n";
		cout<<"Enter the barcode:"<<endl;
		cin>>barcode;
		Zipcode bar(barcode);
		bar.decode();
	}
else{
		cout<<"Invalid choice!"<<endl;}
    return 0;
}
