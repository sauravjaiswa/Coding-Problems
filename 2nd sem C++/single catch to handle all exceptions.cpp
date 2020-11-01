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
		throw 5.3;
	}
	catch(...)
	{
		cout<<"All invalid entry"<<endl;
	}
}
