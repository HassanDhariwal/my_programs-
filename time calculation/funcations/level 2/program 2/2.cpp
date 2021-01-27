#include<iostream>
#include<iomanip>
using namespace std;
void prime(int);
int main ()
{
	int a;
	cout<<setw(51)<<"enter number to cheack primery factor:";
	cin>>a;
	cout<<setw(45)<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	prime(a);
}
void prime(int p)
{
	for(int i=1;i<=10;i++)
	{
		if(p%2==0)
		{
			if(p%i==0)
			{
			cout<<setw(25)<<p<<" "<<"is not prime no"<<endl;
			
			cout<<setw(25)<<p<<"/"<<i<<"="<<"  "<<p/i<<endl;
			cout<<setw(45)<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	        } //iner if end
		}//uper if end
		else if(p%i==0)
		{
			cout<<setw(25)<<p<<" "<<"is prime no"<<endl;
			cout<<setw(25)<<p<<"%"<<i<<"="<<"  "<<p/i<<endl;
			cout<<setw(45)<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
		}//else if
	}//for loop end
	
}//funcation define end;
