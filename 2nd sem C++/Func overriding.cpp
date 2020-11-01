//Function overriding
#include<iostream>
using namespace std;
class A
{
	public:
		void input()
		{
			cout<<"hello"<<endl;
		}
};
class B:public A
{
	public:
		void input()
		{
			A::input();
			cout<<"World"<<endl;
		}
};
int main()
{
	B o;
	o.input();
}

