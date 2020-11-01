//Single inheritence
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
class sub:public super
{
	public:
		sub()
		{
			cout<<"I am child class"<<endl;
		}
};
int main()
{
	sub ob;
}
