#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw 'x';
	}
	catch(...)
	{
		cout<<"invalid"<<endl;
	}
}
