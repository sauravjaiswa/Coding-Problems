#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	try
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
	catch(int x)
	{
		cout<<"Invalid entry of b"<<endl;
	}
}
