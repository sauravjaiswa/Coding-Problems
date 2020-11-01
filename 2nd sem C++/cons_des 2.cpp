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
			cin>>h>>m>>s;
		}
	public:
		Time(int hh,int mm,int ss)
		{
			int fh,fm,fs;
			fs=s+ss;
			fm=fs/60;
			fs=fs%60;
			fm=m+mm;
			fh=fm/60;
			fm=fm%60;
			fh=h+hh;
			fh=fh/12;
			cout<<"Final time is:"<<fh<<":"<<fm<<":"<<fs<<endl;
		}
		~Time()
		{
		}
};
int main()
{
	int h,m,s;
	Time o1;
	cout<<"Enter hours,minutes,seconds:"<<endl;
	cin>>h>>m>>s;
	Time o2(h,m,s);
}


