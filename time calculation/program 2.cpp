#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int Arry_size,Total_Minutes=0,Total_Hour=0,i=0,Daily_Hour=9; 
	cout<<"Enter number of Days you want to Caluulate:";
	cin>>Arry_size;
	cout<<"your 1 day working hour is:"<<Daily_Hour<<endl;
	Daily_Hour=9*Arry_size;
	cout<<"your total working days of Hours :"<<Daily_Hour<<":00"<<endl;
	int Hour[Arry_size];
	int Minute[Arry_size];
	//cout<<endl; remove;
 	
	for(i=0;i<Arry_size;i++)//houres and minutes get value:
	{
		int Day=i+1;
	    cout<<"enter your"<<" "<<Day<<" "<<"day time:"<<endl;
		cout<<"Hour:"<<setw(2);
		cin>>Hour[i];
		cout<<"min"<<setw(2)<<":";//10:30;
		cin>>Minute[i];		
	}
	cout<<"your All given records is"<<endl;
	cout<<endl;
	for(i=0;i<Arry_size;i++)
	{
		int Day=i+1;
		if (Hour[i]<10)
		{
		cout<<"  "<<Day<<":Day"<<setw(5)<<"0"<<Hour[i]<<" "<<"Hour"<<setw (6)<<Minute[i]<<" "<<"Minutes"<<endl;
		}
		else
		{
			cout<<"  "<<Day<<":Day"<<setw(6)<<Hour[i]<<" "<<"Hour"<<setw (6)<<Minute[i]<<" "<<"Minutes"<<endl;
		}
	}
	
	
	for(i=0;i<Arry_size;i++)//adtion of total houres;
	{
		Total_Hour=Total_Hour+Hour[i];}
	cout<<endl;
	//cout<<"total hours is:"<<setw(2)<<tH<<endl;
	
	for(i=0;i<Arry_size;i++)//adition of total minutes;
	{
	 Total_Minutes=Total_Minutes+Minute[i];
	}
	//cout<<"total Minutes is:"<<setw(2)<<tM<<endl;
	
	cout<<"Total.hours"<<setw(16)<<"Total.Minutes"<<endl;
	cout<<Total_Hour<<setw(11)<<":"<<setw(9)<<Total_Minutes<<endl;
	for(i=0;Total_Minutes>=60;i++)
	{
	  if (Total_Minutes>=60)
	 {
		Total_Hour=Total_Hour+1;
		Total_Minutes=Total_Minutes-60;
		
	 }
	}
	cout<<endl;
	cout<<"working.hours"<<setw(3)<<"&"<<setw(13)<<"minutes"<<endl;
	cout<<Total_Hour<<setw(14)<<":"<<setw(9)<<Total_Minutes<<endl;
	int extra_Work=0,Do_Work=0;
	
	if(Total_Hour>Daily_Hour)
	{
		extra_Work=Total_Hour-Daily_Hour;
		cout<<endl;
		cout<<"your extra Working time:"<<extra_Work<<":"<<Total_Minutes<<endl;
		
	}
	else
	{
		Do_Work=Total_Hour-Daily_Hour;
		cout<<endl;
		cout<<"your finich working time remains:"<<Do_Work<<":"<<Total_Minutes<<endl;
	}
	

}




