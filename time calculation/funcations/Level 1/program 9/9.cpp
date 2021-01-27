#include<iostream> //take nothing return nothing 
void factorial( );//funcation declera
using namespace std;
int main()
{
	factorial( );//funcati0on call
	
}//main end
void factorial( )//funcation define
{
	int n;
	cout<<"enter a factorial no"<<" : ";
	cin>>n;
	for(int a=n;a>=0;a--)
	{
	int f=n;//sirf is ki waja sy;
	for(int i=n;i>1;i--)
		{
			f=f*(i-1);
		}//for loop end
		cout<<"total factorial of givien no is"<<" "<<n<<"!"<<"="<<f<<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
		cout<<endl;
		n=n-1;
}



}
