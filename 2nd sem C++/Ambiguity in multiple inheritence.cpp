//Ambiguity in Multiple inheritence
#include<iostream>
using namespace std;
class super1
{
	public:
		super()
		{
			cout<<"I am the father class"<<endl;
		}
};
class super2
{
	public:
		super()
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
//	ob.super();		Error due to ambiguity
	ob.super1::super();
	ob.super2::super();
}
