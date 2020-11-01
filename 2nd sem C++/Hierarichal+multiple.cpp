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
			super::input();
			add::addition();
			cout<<"Result"<<a-b<<endl;
		}
};
int main()
{
	sub ob3;
	ob3.subtract();
}
