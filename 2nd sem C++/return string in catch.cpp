#include<iostream>
using namespace std;
int main()
{
	int a,c,b;
	cout<<"Enter a:"<<endl;
	cin>>a>>b>>c;
	try
	{
		if(a==1)
		throw 0;
		else if(b==14)
		throw 'v';
		else if(c==3)
		throw "String is invalid";
	}
	catch(int x)
	{
		cout<<"Invalid entry of integer"<<endl;
	}
	catch(char x)
	{
		cout<<"Invalid entry of character"<<endl;
	}
	catch(const char *x)
	{
		cout<<x<<endl;
	}
}
