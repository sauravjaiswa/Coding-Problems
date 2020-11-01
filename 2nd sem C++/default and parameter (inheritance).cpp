//Multiple inheritence
#include<iostream>
using namespace std;
class super1
{
	public:
		super1(int y)
		{
			cout<<"I am the father class"<<endl;
			cout<<y<<endl;
		}
};
class sub:public super1
{
	public:
		sub(int x):super1(10)
		{
			cout<<"I am child class"<<endl;
			cout<<x<<endl;
		}
};
int main()
{
	sub ob(20);
}
