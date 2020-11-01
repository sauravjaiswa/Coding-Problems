//Multiple inheritence
#include<iostream>
using namespace std;
class super1
{
	public:
		super1()
		{
			cout<<"I am the father class"<<endl;
		}
};


class sub:public super1
{
	public:
		sub()
		{
			cout<<"wdd"<<endl;
		}
	public:
		sub(int x)
		{
			cout<<"I am child class"<<endl;
			cout<<x<<endl;
		}
};
int main()
{
//	subb o;
	sub ob(20);
}
