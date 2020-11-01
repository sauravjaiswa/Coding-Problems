//username and password-exception handling
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int l1,l2,i,j,c1,c2;
	c1=c2=0;
	char un[100],pass[100];
	cout<<"Enter username:"<<endl;
	gets(un);
	cout<<"Enter password:"<<endl;
	gets(pass);
	l1=strlen(un);
	l2=strlen(pass);
	try
	{
		if(l1<6||l2<6)
		{
			throw 0;
		}
		else
		{
			for(j=0;j<l2;j++)
			{
				if(pass[j]>='0'&&pass[j]<='9')
				c2++;
			}
			if(c2==0)
			throw -1;
			else
			{
				cout<<"Username:"<<endl;
				puts(un);
				cout<<"Password:"<<endl;
				puts(pass);
			}
		}
	}
	catch(...)
	{
		cout<<"Invalid username or password"<<endl;
	}
}
