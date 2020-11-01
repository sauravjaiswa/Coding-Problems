/*8.i)Write a program that reads a group of numbers from the user and places them in an array of type float. Once the numbers 
are stored in the array, the program should average them and print the result. Use pointer notation wherever possible.*/
#include<iostream>
using namespace std;
class farray
{
	public:
	virtual void accept(int a[100],int y)=0;	//Pure virtual function
};
class ti:public farray
{
	public:
	int i;
	public:
	void accept(int a[100],int len)
	{
		for(i=0;i<len;i++)
		cin>>a[i];
	}
};
class ri:public farray
{
	public:
		int i,s;
		float avg;
	void accept(int a[100],int u)
	{
		s=0;
		for(i=0;i<u;i++)
		s=s+a[i];
		avg=s/u;
		cout<<"Average is:"<<avg<<endl;
	}
};
int main()
{
	int a[100],l;
	cout<<"Enter length:"<<endl;
	cin>>l;
	cout<<"Enter values in array:"<<endl;
	farray *pt;
	ti o1;
	ri o2;
	pt=&o1;
	pt->accept(a,l);
	pt=&o2;
	pt->accept(a,l);
}
