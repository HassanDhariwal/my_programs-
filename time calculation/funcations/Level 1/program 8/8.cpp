#include<iostream>
void grade(int);//funcation decleard
using namespace std;
int main()
{
	int a;
	cout<<"enter mark of his/her (out of 100)"<<" : ";
	cin>>a;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	grade(a);//funcation call
	cout<<endl;
}//main end
void grade(int b )//funcation define block start
{
	if(b>=91 && b<=100)
	cout<<"according to marks your grade is:"<<"  "<<"AA"<<endl;
	else if(b>=81 && b<=90)
	cout<<"according to marks your grade is:"<<"  "<<"AB"<<endl;
	else if(b>=71 && b<=80)
	cout<<"according to marks your grade is:"<<"  "<<"BB"<<endl;
	else if(b>=61 && b<=70)
	cout<<"according to marks your grade is:"<<"  "<<"BC"<<endl;
	else if(b>=51 && b<=60)
	cout<<"according to marks your grade is:"<<"  "<<"CD"<<endl;
	else if(b>=41 && b<=50)
	cout<<"according to marks your grade is:"<<"  "<<"DD"<<endl;
	else if(b<=40)
	cout<<"according to marks your grade is:"<<"  "<<"F"<<endl;
}


