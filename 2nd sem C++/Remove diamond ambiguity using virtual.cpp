//Function overriding
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
};
class B:virtual public A
{
	public:
		int b;
};
class C:virtual public A
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
	//A *obj = new D();
	D obj; 
	obj.a=10;  //obj->a=10;
	obj.a=100;   //obj->a=100;
	cout<<"Value of a is:"<<obj.a<<endl;
}

