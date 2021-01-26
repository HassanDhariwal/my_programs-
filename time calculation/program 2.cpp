#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"if you want to continue program press 1:";
	int a;
	cin>>a;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout<<endl;
	while (a==1) //while for contiue the program when user cannot want to exit;
	{
	
	int Arry_size,Total_Minutes=0,Total_Hour=0,i=0,Daily_Hour=9; 
	cout<<"Enter number of Days you want to Calculate:";
	cin>>Arry_size;
	cout<<"your 1 day working hour is:"<<Daily_Hour<<endl;
	Daily_Hour=9*Arry_size;	
	int Hour[Arry_size];
	int Minute[Arry_size];
	cout<<endl;
 	
	
	for(i=0;i<Arry_size;i++)                                    //houres and minutes get value:(16)
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
	
	for(i=0;i<Arry_size;i++)                                    //adtion of total houres;(39)
	{
		Total_Hour=Total_Hour+Hour[i];}
	cout<<endl;
	//cout<<"total hours is:"<<setw(2)<<tH<<endl;
	
	for(i=0;i<Arry_size;i++)                                    //adition of total minutes;(45)
	{
	 Total_Minutes=Total_Minutes+Minute[i];
	}
	//cout<<"total Minutes is:"<<setw(2)<<tM<<endl;         because it is not importan for out put
	
	/*cout<<"Total.hours"<<setw(16)<<"Total.Minutes"<<endl;
	cout<<Total_Hour<<setw(11)<<":"<<setw(9)<<Total_Minutes<<endl;*/
	cout<<"your total working days of Hours :"<<Daily_Hour<<":00"<<endl;
	cout<<endl;
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
	
	if(Total_Hour>=Daily_Hour)
	{
		extra_Work=Total_Hour-Daily_Hour;
		cout<<endl;
		if(Total_Minutes==0)//time =0 ho to time show ho like 11:00 use for this perpose
		cout<<"your extra Working time:"<<extra_Work<<":"<<"00"<<endl;
		else
		cout<<"your extra Working time:"<<extra_Work<<":"<<Total_Minutes<<endl;
	}
	else if(Total_Hour<Daily_Hour)                //c is = 60 then prinet like this;(76)
	{
	int T_M=Total_Minutes;
	int b=60-T_M;                                  //b  variable for get - value  (79)
	int t_h=Total_Hour;
	int calculate_M=Total_Minutes+b;                      //c variable for gett add - vlue and total minutes;(81)
	if(calculate_M==60)                                  //ader to codition true hi hogi because c==60 must hoga(82)
	
	{
		t_h=t_h+1;
		if(t_h==Daily_Hour)
		cout<<"your finich working time remains:"<<b<<endl;
		else                                 // because uper codition tb hi correct ho gi jb mintes reamin or time = ho give tim ky(89) 
	
	{
		Do_Work=Total_Hour-Daily_Hour;
		cout<<endl;
		cout<<"your finich working time remains is:"<<Do_Work<<":"<<b<<endl;
		cout<<endl;
	}}//if calculate conditition:
	}//else if 
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	
	cout<<endl;
	cout<<"if you want to exit program press 2:"<<endl;// for continue the program when user cannot want to exit;
	cin>>a;
	cout<<endl;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;
}//while exit
}//main




