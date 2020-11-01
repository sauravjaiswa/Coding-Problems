//Binary search
#include<iostream>
using namespace std;
int main()
{
	int i,s,e,n,j,t,m,val,pos;
	cout<<"Enter array size:\n";
	cin>>n;
	int a[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	
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
	
	cout<<"Enter value to be searched:\n";
	cin>>val;
	s=0;
	e=n-1;
	bool flag=false;
	while(s<=e)
	{
		m=(s+e)/2;
		if(a[m]==val)
		{
			flag=true;
			pos=m;
			break;
		}
		else if(val<a[m])
		e=m-1;
		else if(val>a[m])
		s=m+1;
	}
	if(flag==true)
	cout<<"The number "<<val<<" is present at "<<pos+1<<"th position.\n";
	else
	cout<<"The number "<<val<<" is not present.\n";
}
