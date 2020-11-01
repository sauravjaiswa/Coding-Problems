#include<iostream>
using namespace std;
class exception_handle
{
	public:
	int a,b,c;
	void checks()
	{
		cout<<"Enter a,b:"<<endl;
		cin>>a>>b;
		if(b==0)
		throw b;
		else
		{
			c=a/b;
			cout<<"c="<<c<<endl;
		}
	}
};
int main()
{
	exception_handle o;
	try
	{
		o.checks();
	}
	catch(int x)
	{
		cout<<"Invalid entry in function"<<endl;
	}
}
