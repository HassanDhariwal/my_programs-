#include<iostream>
#include<iomanip>
void calculate_age(int,int,int);
void leap_year(int);
using namespace std;
int main()
{
	int year,mounth,date;
	cout<<"enter your birth date,mounth,and year is"<<endl<<endl;
	cout<<"DD"<<"    "<<"MM"<<"   "<<"YYYY"<<endl;
	cin>>date    >>       mounth     >>year;
	cout<<endl;
	if(date>31)
	{
	cout<<"plz enter correct date:"<<endl;
	cin>>date;
	}
	if(mounth>12)
	{
	cout<<"plz enter correct mounth:"<<endl;
	cin>>mounth;
	}
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	calculate_age(date,mounth,year);
	leap_year(year);
	
	}//main end
void calculate_age(int d,int m,int y)
{
	cout<<"your birth date,mounth,and year is:"<<endl;
	cout<<setw(7)<<"DD"<<setw(7)<<"MM"<<setw(10)<<"YYYY"<<endl;
	cout<<setw(7)<<d<<setw(7)<<m<<setw(10)<<y<<endl;
	cout<<endl;
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	int c_d,c_m,c_y,age=0;
	cout<<"enter your current date,mounth and year:"<<endl;
	cout<<"DD"<<"    "<<"MM"<<"   "<<"YYYY"<<endl;
	cin>>c_d>>c_m>>c_y;
	if(c_d>31)
	{
	cout<<"plz enter correct date:"<<endl;
	cin>>c_d;
	}
	if(c_m>12)
	{
	cout<<"plz enter correct mounth:"<<endl;
	cin>>c_m;
	}
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	
	cout<<"your current birth date,mounth,and year is:"<<endl;
	cout<<setw(7)<<"DD"<<setw(7)<<"MM"<<setw(10)<<"YYYY"<<endl;
	cout<<setw(7)<<c_d<<setw(7)<<c_m<<setw(10)<<c_y<<endl;
	cout<<endl;

	for(int i=y;i<c_y;i++)
	{
		age=age+1;
		
	}
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"According to given year your age is:"<<age<<endl;
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
} 
void leap_year(int y)
{
	cout<<"some leap_year is:"<<endl;
	cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	for(int i=y;i<2020;i++)
	{
		if(i%4==0)
		cout<<"   "<<i<<"  "<<endl;
		
	  }  
}
