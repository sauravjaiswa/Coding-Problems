//Selection Sort
#include <bits/stdc++.h>
using namespace std;

void swapp(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int *a,int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		if(min!=i)
		swapp(&a[i],&a[min]);
	}
}

void print(int *a,int n)
{
	int i;
	cout<<"Sorted Array:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}

int main()
{
	int i,n;
	cout<<"Enter size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter values:";
	for(i=0;i<n;i++)
	cin>>a[i];
	selectionSort(a,n);
	print(a,n);
}
