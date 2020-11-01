
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int i,s,e,n,j,m,val,pos;
	char t;
	char a[]="PEOPLE";
	n=strlen(a);
	//Bubble sort
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	
	cout<<"Sorted array:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
}
