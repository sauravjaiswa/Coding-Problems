//WAP to find fibbonaci series upto n and print missing numbers.
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int i,j,a,b,c,n,x,y,cnt;
	x=y=0;
	cout<<"Enter limit:";
	cin>>n;
	int k,ar1[n],ar2[n];
	a=0;
	b=1;
	for(i=1;i<=n&&a<=n;i++)
	{
		ar1[x++]=a;
		c=a+b;
		a=b;
		b=c;
	}
	for(i=0;i<=n;i++)
	{
		cnt=0;
		for(j=0;j<x;j++)
		{
			if(ar1[j]==i)
			{
				cnt++;
				break;
			}
		}
		if(cnt==0)
		ar2[y++]=i;
	}
	cout<<"Fibbonaci numbers:";
	for(i=0;i<x;i++)
	{
		cout<<"\n";
		cout<<ar1[i];
	}
	cout<<"\n";
	cout<<"Missing numbers:";
	for(i=0;i<y;i++)
	{
		cout<<"\n";
		cout<<ar2[i];
	}
}
