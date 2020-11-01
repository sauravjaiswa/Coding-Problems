//Hybrid inheritence
#include<iostream>
using namespace std;
class super
{
	public:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter a,b:"<<endl;
			cin>>a>>b;
		}
};
class add:public super
{
	public:
		int c;
	public:
		void calculate()
		{
			super::input();
			c=a+b;
			cout<<"Result of a+b:"<<c<<endl;
		}
};
class swap:public super
{
	public:
		int c;
	public:
		void perform()
		{
			super::input();
			c=a;
			a=b;
			b=c;
			cout<<"a is:"<<a<<endl;
			cout<<"b is:"<<b<<endl;
		}
};
class sub:public add,public swap
{
	public:
		void disp()
		{
			add::calculate();
			swap::perform();
		}
};
int main()
{
	sub ob;
	ob.disp();
}
