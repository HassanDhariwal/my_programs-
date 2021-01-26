#include<iostream>//take something reterun nothing
#include<iomanip>
void sum(int c,int d);//funcation declear;
using namespace std;

int main()
{
	int a,b;
	cout<<"enter a vlue of both no:";
	cin>>a>>b;
	sum(a,b);//funcation call

}
//take something
void sum(int c,int d)//Funcation define 
{
	cout<<"Both number sum is:"<<c+d;//funcation block 
	//return nothing

}

