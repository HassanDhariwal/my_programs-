#include<iostream>//take nothing retrun nothing
void whether();
using namespace std;
int main()
{
	whether();
}
void whether()
{
	int a;
	cout<<"enter a number for whether even and odd:";
	cin>>a;
	if(a%2==0) //
	cout<<"Even no is"<<" : "<<a<<endl;
	else
	cout<<"odd  no is"<<" : "<<a<<endl;
}
