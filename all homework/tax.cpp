/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

/*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   const int tax[7] ={10,12,22,24,32,35,37};
const int taxBracket[4][6]= {{9700,39475,84200,160725,204100,510300},
							{19400,78950,168400,321450,408200,612350},
							{9700,39475,84200,160725,204100,306175},
							{13850,52850,84200,160700,204100,510300}};

int income;
char status;
cout << "input income and status"<<endl;
cin >> income;
cin >> status;
int total1=0,total2=0,total3=0,total4=0,total5=0;
int i=0;
int totaltax;
int income1=0,income2=0,income3=0,income4=0,income5=0;
if((status == 'S')||(status == 's'))
   if(taxBracket[0][i]<=income){
total1=taxBracket[0][i]*tax[i]/100;
 income1=(income-taxBracket[0][i])*tax[i+1]/100;
++i;
   }
   if(taxBracket[0][i]<=income){
total2 = taxBracket[0][i]*tax[i]/100;
 income2=(income-taxBracket[0][i])*tax[i+1]/100;
++i;}
   if(taxBracket[0][i]<=income){
total3 = taxBracket[0][i]*tax[i]/100;
 income3=(income-taxBracket[0][i])*tax[i+1]/100;
++i;}
   if(taxBracket[0][i]<=income){
total4 = taxBracket[0][i]*tax[i]/100;
 income4=(income-taxBracket[0][i])*tax[i+1]/100;
++i;}
   if(taxBracket[0][i]<=income){
total5 = taxBracket[0][i]*tax[i]/100;
 income5=(income-taxBracket[0][i])*tax[i+1]/100;
++i;}
  
totaltax=total1+total2+total3+total4+total5+income1+income2+income3+income4+income5;
cout << income1 << " " << income2 << " " << income3 << " " << income4 << " "<< income5<<endl;
cout << total1<<" " << total2 << " " << total3 << " " << total4 << " " << total5 << endl;
cout << totaltax<<endl;
//5066.88 for 40000
    return 0;
}

