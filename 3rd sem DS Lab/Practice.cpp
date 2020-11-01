//Merge Sort
#include<iostream>
using namespace std;
int n,*temp;
void mergesort(int a[],int l,int u);
void merge(int a[],int l,int m,int u)
{
	int i,j,index;
	temp=new int[n];
	i=l;
	j=m+1;
	index=l;
	while(i<=m&&j<=u)
	{
		if(a[i]<a[j])
		{
			temp[index]=a[i];
			i++;
		}
		else
		{
			temp[index]=a[j];
			j++;
		}
		index++;
	}
	if(i>m)
	{
		while(j<=u)
		{
			temp[index]=a[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=m)
		{
			temp[index]=a[i];
			i++;
			index++;
		}
	}
	for(int k=l;k<index;k++)
	a[k] = temp[k];
}

void mergesort(int a[],int l,int u)
{
	if(l<u)
	{
		int m=(l+u)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,u);
		merge(a,l,m,u);
	}
}
int main()
{
	int i,j,t;
	cout<<"Enter array size:\n";
	cin>>n;
	int a[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	/*Insertion sort
	int temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}*/
	
	//Merge Sort
	mergesort(a,0,n-1);
	cout<<"Sorted array:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
