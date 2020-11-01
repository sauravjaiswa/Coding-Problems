//Hierarichal inheritence
#include<iostream>
using namespace std;
class super
{
	public:
		super()
		{
			cout<<"I am the parent class"<<endl;
		}
};
class sub1:public super
{
	public:
		sub1()
		{
			cout<<"I am the elder child class"<<endl;
		}
};
class sub2:public super
{
	public:
		sub2()
		{
			cout<<"I am the second eldest child class"<<endl;
		}
};
class sub3:public super
{
	public:
		sub3()
		{
			cout<<"I am the youngest child class"<<endl;
		}
};
int main()
{
	sub1 ob1;
	sub2 ob2;
	sub3 ob3;
}
