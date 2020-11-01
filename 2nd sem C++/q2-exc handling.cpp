#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class exception_handle
{
	public:
	string n1,n2;
	double a,b,c;
	int f=0;
	void input()
	{
		cout<<"Enter a,b:"<<endl;
		cin>>n1>>n2;
		try
		{
			for(int i=0;i<n1.length();i++)
			{
				if(n1[i]=='.')
				{
					f=1;
					break;
				}
			}
			if(f==1)
			{
				f=0;
				for(int i=0;i<n2.length();i++)
				{
					if(n2[i]=='.')
					{
						f=1;
						break;
					}
				}
				if(f==0)
				throw 0;
				else
				cout<<calculate()<<endl;
			}
			
			else
			throw 0;
		}
		catch(int x)
		{
			cout<<"Invalid datatype"<<endl;
		}
	}
	double calculate()
	{
		a=atof(n1.c_str());
		b=atof(n2.c_str());
		c=0.0;
		try
		{
			if(b==0.0)
			throw b;
			else
			c=a/b;
		}
		catch(double x)
		{
			cout<<"Invalid calculation"<<endl;
		}
		return c;
	}
};
int main()
{
	exception_handle o;
	o.input();
}
