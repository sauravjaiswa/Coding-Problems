#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a:"<<endl;
	cin>>a;
	try
	{
		if(a==1)
		throw 0;
		else if(a==14)
		throw 'v';
		else if(a==3)
		throw 5.3;
	}
	catch(int x)
	{
		cout<<"Invalid entry of integer"<<endl;
	}
	catch(char x)
	{
		cout<<"Invalid entry of character"<<endl;
	}
	catch(double x)
	{
		cout<<"Invalid entry of double"<<endl;
	}
}
