//Multiple+Hierarichal inheritence
#include<iostream>
using namespace std;
class super
{
	public:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter two number:"<<endl;
			cin>>a>>b;
		}
};
class add:public super
{
	public:
		void addition()
		{
			cout<<"Result:"<<a+b<<endl;
		}
};
class sub:public add
{
	public:
		void subtract()
		{
			cout<<"Result:"<<a-b<<endl;
		}
};
class mul:public sub
{
	public:
		void multiply()
		{		
			super::input();
			add::addition();
			sub::subtract();	
			cout<<"Result:"<<a*b<<endl;
		}
};
int main()
{
	mul ob3;
	ob3.multiply();
}
