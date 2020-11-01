//Linear Search
#include<iostream>
using namespace std;
int main()
{
	int i,n,val,pos;
	cout<<"Enter array size:\n";
	cin>>n;
	int a[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter element to be found in the array:\n";
	cin>>val;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			pos=i;
			break;
		}
		else
		pos=-1;
	}
	if(pos>=0)
	cout<<"The element "<<val<<" is at "<<pos+1<<"th position.";
	else
	cout<<"Element not found.";
}
