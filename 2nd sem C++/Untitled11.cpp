#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"I am grandfather.\n";
		}
};
class B
{
	public:
		B()
		{
		  cout<<"I am grandmother.\n";	
		}
};
class C:public A,public B
{
	public:
		C()
		{
		cout<<"I am mother.\n";
	}
};
class D:public C
{
	public:D()
	{
		cout<<"i am son.\n";
	}
};
class E:public C
{
	public:
		E()
		{
			cout<<"i am daughter\n";
		}
};
class F:public C
{
	public:
		F()
		{
			cout<<"i am niece of C.\n";
		}
};
int main()
{
	D d;
	E e;
	F f;
}
