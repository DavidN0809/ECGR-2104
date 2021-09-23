#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

const string ziparray[10]={"11000","00011","00101","00110","01001","01010","01100","10001","10010","10100"}; //array to change zipcodes digits to encoded formate
const char array[10]={'0','1','2','3','4','5','6','7','8','9'}; //array to check against zipcode

class Zipcode{
    int zipcode;
    string barcode;
    string display[5]={"-0","-0","-0","-0","-0"};//array that is being displayed and filled with zipcode
   
public: 
	Zipcode(int);
	Zipcode(string);     
	void encode(int); //output string
	void decode(string);  //output int
};

Zipcode::Zipcode(int inZip){
	zipcode = inZip;
	barcode = "";
}

Zipcode::Zipcode(string inBar){
	zipcode = 0;
	barcode = inBar;
}

void Zipcode::encode(int inZip){ //encodes zipcode and outputs as an string
int i,j;
for(i=0;i<10;++i){
   for(j=0;j<=5;++j){
      if(to_string(inZip).at(j)==array[i]){ //checks for what digit in zipcode
         Zipcode::display[j]=ziparray[i];
        }
    }
}
cout<<"Zip code encoded is 1"; //displays encoded version with 1 in beginning and end.
for(i=0;i<5;++i)
 cout << Zipcode::display[i];
cout <<"1"<<endl;
}

void Zipcode::decode(string inBar){ //encodes zipcode and outputs as a int;
	int total;
	for(int i=1;i<=21;i++){
			
		total = (((int)inBar.at(i))*7)+(((int)inBar.at(i+1))*4)+(((int)inBar.at(i+2))*2)+
					(((int)inBar.at(i+3))*1)+(((int)inBar.at(i+4))*0);
		
		
		Zipcode::display[i] = total;
	}
	
	
	//int i, j=0, x=1;
		//for(i=0;i<11;++i){//loops through array checking for what digit in zipcode
			//if(inBar.substr(x,x+4)==ziparray[i]){ //makes sub string ie (11000, 00011)
				//Zipcode::display[j]=array[i];
				//i=0;//restart loop to check for what digit
				//j=j+1;//goes to next part of display array
				//x=x+5;//makes next sub string 5 characters
			
		//}
	//}
	
	for(int i=0;i<5;++i)
	 cout << Zipcode::display[i];
}
    
int main(){
	int action, zipcode;
	string barcode;
	
	cout<<"What action would you like to take:"<<endl;
	cout<<"1.Convert zipcode to barcode"<<endl;
	cout<<"2.Convert barcode to zipcode"<<endl;
	cin>>action;
	
	if(action == 1){
		cout<<"Enter the zipcode:"<<endl;
		cin>>zipcode;
		Zipcode zip(zipcode);
		zip.encode(zipcode);
	}
	else if(action == 2){
		cout<<"Enter the barcode:"<<endl;
		cin>>barcode;
		Zipcode bar(barcode);
		bar.decode(barcode);
	}
	else
		cout<<"Invalid choice!"<<endl;
	
    return 0;
}
