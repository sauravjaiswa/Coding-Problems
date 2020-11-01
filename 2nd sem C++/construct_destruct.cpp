//Add two time objects using constructor and destructor
#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
		Time()
		{
			cout<<"Enter hours,minutes,seconds:"<<endl;
		}
	public:
		void get()
		{
			cin>>h>>m>>s;
		}
	public:
		Time(Time A,Time B)
		{
			int fh,fm,fs;
			fs=A.s+B.s;
			fm=fs/60;
			fs=fs%60;
			fm=fm+A.m+B.m;
			fh=fm/60;
			fm=fm%60;
			fh=fh+A.h+B.h;
			fh=fh/12;
			cout<<"Final time is:"<<fh<<":"<<fm<<":"<<fs<<endl;
		}
		~Time()
		{
		}
};
int main()
{
	Time o1;
	o1.get();
	Time o2;
	o2.get();
	Time o3(o1,o2);
}


