#include<iostream>
void table(int, int);
using namespace std;
int main()
{
	int a=15,b=1;
	table(a,b);
}//main end;
void table(int t, int c)
{
	
	if(c<=10)
	cout<<t<<"*"<<c<<"="<<t*c<<endl;
	c=c+1;
	table(t,c);
}
