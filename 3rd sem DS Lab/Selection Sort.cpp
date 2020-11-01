//Selection Sort
#include<iostream>
using namespace std;
int main()
{
	int i,n,j,t;
	cout<<"Enter array size:\n";
	cin>>n;
	int a[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	//Selection sort
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
