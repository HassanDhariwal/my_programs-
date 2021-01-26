#include<iostream>
# define pi 3.14159
void circum(int);//funation declear
void area(int);//funation declear
using namespace std;
int main()
{
	int radius;
	cout<<"enter a Radius:";
	cin>>radius;
	circum(radius);//funcation call
	area(radius);//funcation call
}
 void circum(int r)//funcation define
 {
 	float c;
 	c=2*pi*r;//circumference formula
 	cout<<"circumference is:"<<c<<endl;
 }
 void area(int R)//funcation define
 {
 	float a;
 	a=pi*(R*R);//Area formula
 	cout<<"Area of circle is:"<<a<<endl;
 }
