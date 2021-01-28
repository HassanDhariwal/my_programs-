//tanks something retrun nothing
//fined perfact number;
#include<iostream>
void perfect(int);//funcation declear
using namespace std;
int main()
{
	int a;
	cout<<"enter a no to cheack is it perfect:";
	cin>>a;
	perfect(a);//funcation call
}//main end
void perfect(int p)//funcation define block
{
	int i=2,sum=0;
	for(i=2;i<=10;i++)
	{
		if(p%i==0)
		{
		cout<<p<<"="<<(p/i)<<"+"<<sum<<"="<<sum+(p/i)<<endl;//6=3+0=3
		sum=sum+(p/i);// because we want quotient
		}//if end
	}//loop end
	cout<<"perfect number is:"<<" "<<p;//p=6
}//define funcation end
