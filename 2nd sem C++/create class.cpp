//create class
#include<iostream>
using namespace std;
class big
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter two numbers:";
			cin>>a;
			cin>>b;
		}
	public:
		void find()
		{
			int max;
			if(a>b)
			max=a;
			else
			max=b;
			cout<<"The biggest of "<<a<<" and "<<b<<" is:"<<max;
		}
};
		
	int main()
	{
		big ob;
		ob.input();
		ob.find();
	}


