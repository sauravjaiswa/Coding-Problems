//Function overriding
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
};
class B:public A
{
	public:
		int b;
};
class C:public A
{
	public:
		int c;
};
class D:public B,public C
{
	public:
		int d;
};
int main()
{
	D obj; 
	obj.B::a=10;
	obj.C::a=100;
	cout<<"Value of a in B is:"<<obj.B::a<<endl;
	cout<<"Value of a in C is:"<<obj.C::a<<endl;
	obj.b=20;
	obj.c=90;
	obj.d=-9;
	cout<<"Value of b is:"<<obj.b<<endl;
	cout<<"Value of c is:"<<obj.c<<endl;
	cout<<"Value of d is:"<<obj.d<<endl;
}

