#include<iostream>
using namespace std;
class handle
{
	public:
	int a,b,c;
	int checks()
	{
		cout<<"Enter a,b:"<<endl;
		cin>>a>>b;
		if(b==0)
		{
			return b;
			throw b;
		}
		else
		{
			c=a/b;
			cout<<"c="<<c<<endl;
			return c;
		}
	}
};
int main()
{
	int x;
	handle o;
	try
	{
		try
		{
			x=o.checks();
			if(x==0)
			throw 0;
		}
			catch(int x)
			{
				cout<<"Invalid entry"<<endl;
				throw 3;	
			}
		}
		
	catch(int x)
	{
		cout<<"Invalid entry"<<endl;
	}
}
