#include<iostream>
void max(int,int,int);//max funcation declear
void min(int,int,int);//min funcation declear
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three noumbers:"<<endl;
	cin>>a>>b>>c;
	max(a,b,c);//max funcation call 
	min(a,b,c);//min funcation call
}
void max(int d,int e ,int f)//max define funcation
{
	if(d>e && d>f){
	cout<<"maximum no is:"<<d;
	cout<<endl;}
	else if(e>d && e>f){
	cout<<"maximum no is:"<<e;
	cout<<endl;
	}
	else if(f>d && f>e){
	cout<<"maximum no is:"<<f;
	cout<<endl;
}
}
void min(int g,int h,int i)//min define funcation
{
	if(g<h && g<i){
	cout<<"maximum no is:"<<g;
	cout<<endl;}
	else if(h<g && h<i){
	cout<<"maximum no is:"<<h;
	cout<<endl;}
	else if(i<g && i<h){
	cout<<"maximum no is:"<<i;
	cout<<endl;} 
}
