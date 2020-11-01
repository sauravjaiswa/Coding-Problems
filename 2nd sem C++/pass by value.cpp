//Add two time objects pass by value
#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
		void getdata()
		{
			cout<<"Enter hours:"<<endl;
			cin>>h;
			cout<<"Enter minutes:"<<endl;
			cin>>m;
			cout<<"Enter seconds:"<<endl;
			cin>>s;
		}
	friend int add(Time ,Time );
};
int add(Time A,Time B)
{
	int fh,fm,fs;
	fh=A.h+B.h;
	fm=A.m+B.m;
	fs=A.s+B.s;
	if(fs>=60)
	{
		fs=fs-60;
		fm++;
	}
	if(fm>=60)
	{
		fm=fm-60;
		fh++;
	}
	if(fh>=12)
	{
		fh=fh-12;
	}
	cout<<"Final Time is:"<<fh<<":"<<fm<<":"<<fs<<endl;
}
int main()
{
	Time o1,o2;
	o1.getdata();
	o2.getdata();
	add(o1,o2);
}


