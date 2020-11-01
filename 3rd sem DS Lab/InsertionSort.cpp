//Insertion Sort
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
	
	//Insertion sort
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0&&a[j]>t)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
	
	cout<<"Sorted array:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
}
