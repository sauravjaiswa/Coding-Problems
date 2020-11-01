//Multilevel inheritence
#include<iostream>
using namespace std;
class super1
{
	public:
		super1()
		{
			cout<<"I am the most superior class"<<endl;
		}
};
class super2:public super1
{
	public:
		super2()
		{
			cout<<"I am the second most superior class"<<endl;
		}
};
class sub:public super2
{
	public:
		sub()
		{
			cout<<"I am the least superior class"<<endl;
		}
};
int main()
{
	sub ob;
}
