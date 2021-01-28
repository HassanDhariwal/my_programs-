#include<iostream>
#include<iomanip>
void calculate(int,int,int);//funcation declear
using namespace std;
int main()
{
	int a,b,e;
	cout<<"enter two number calculate the power of a number raised to other:";
	cin>>a>>b;
	cout<<endl;
	cout<<a<<"  "<<"ki power"<<"  "<<b<<endl<<endl;
	e=1;
	calculate(a,b,e);//funcation call	
}
void calculate(int f,int d,int c)//funcation define
{
	if(d>0)
	{
	c=c*f;//1*2=2 & 2*2=4 etc
	cout<<endl;
	cout<<"calculate the power of a number raised to other:"<<c<<endl;
	cout<<"****************************************************"<<endl;
	calculate(f,d-1,c);//recursion funcation:
	}
	else
	cout<<endl<<setw(28)<<"Thnaks for using it"<<endl;
}
