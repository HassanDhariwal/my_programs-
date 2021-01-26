#include<iostream>
int product(int a,int b);//funcatin declear
using namespace std;
int main()
{
	int f,s;
	cout<<"enter both number:";
	cin>>f>>s;
	int p=product(f,s);//funcation call
	cout<<"both number product is:"<<p;
}
int product(int a,int b)//take somthing
{
	return (a*b);//retrun something
 } 
