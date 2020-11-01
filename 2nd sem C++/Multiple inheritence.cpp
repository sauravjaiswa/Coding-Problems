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
class super2
{
	public:
		super2()
		{
			cout<<"I am the mother class"<<endl;
		}
};
class sub:public super1,public super2
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
