//take something retrun nothing
#include<iostream> 
void elligible(int);//funcation decleration
using namespace std;
int main()
{
	int age;
	cout<<"Enter a age of his/her:";
	cin>>age;
	elligible(age);//funcatin call
}
void elligible(int a)//funcation define
{
	if(a>=18)//condition for cheak elligible or not
	cout<<"his/her is elligible for vote:"<<endl;
	else
	cout<<"his/her is NOT elligible for vote:"<<endl;
}

