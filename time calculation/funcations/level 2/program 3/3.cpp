#include<iostream>
#include<iomanip>
int fibonacci(int);
using namespace std;
int main()
{
	int n;
	cout<<endl;
	cout<<"Enter a no term of fibonacci serices:";
	cin>>n;
	cout<<endl;
	fibonacci(n);
}
int fibonacci(int f)
{  cout<<"fibonacci serices:"<<f<<endl;
cout<<endl;
	if(f==1||f==2)
	{
		cout<<"in wihic any 1 and 2 come then condition true"<<endl;
		cout<<"(f==1||f==2)"<<endl;//in wihic any 1 and 2 come then condition true;
		cout<<"retrun 1"<<endl;//then retrun 1;
		cout<<"####################################################"<<endl;
		cout<<endl;
	
	return 1;}

 else;
 {//(fibonacci(f-1) + fibonacci(f-2));
 	cout<<endl;
 
 cout<<"(fibonacci(f-1)"<<"     +      "<<"(fibonacci(f-2)"<<endl;
 cout<<setw(14)<<f-1<<"      +  "<<setw(14)<<(f-2)<<endl;
 cout<<endl;
 cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
 return (fibonacci(f-1) + fibonacci(f-2));
}
}

