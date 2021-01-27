#include<iostream> //take something retrun nothing;
void prime(int );// funcation declear 
using namespace std;
int main()
{
	int a;
	cout<<"enter a number for cheack it is prime or not"<<" : ";
	cin>>a;
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	prime(a);//funcation call
 }//main end
void prime(int P){ //funactopn define block strat;
int i,j=0;
for(i=2;i<=10;i++)//we use here 2 becaus all digit divdie on 1 and also on it self we chack so i use 2;
{ 
  if(P%i==0)//condition charck is it divide by it self; 
  j=j+1;
 // cout<<"j"<<"  "<<j<<"  ";
}//for loop end;
   if(j==1)//if it is divide by it self;
      cout<<"number"<<" "<<P<<" "<<" ""is prime"<<endl;
   else 
      cout<<"number"<<P<<" "<<"is not prime"<<endl;}//funcation defined block end;
