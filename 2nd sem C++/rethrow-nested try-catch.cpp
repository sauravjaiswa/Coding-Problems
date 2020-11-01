#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char ch;
	try
	{
		cout<<"Enter $ character:"<<endl;
		cin>>ch;
		try
		{
			if(ch!='$')
			throw 0;
		}
			catch(int x)
			{
				cout<<"Invalid entry of character"<<endl;	
				cout<<"Enter a:"<<endl;
				cin>>a;
				if(a==0)
				throw 3;
			}
		}
		
	catch(int x)
	{
		cout<<"Invalid entry of a"<<endl;
	}
}
