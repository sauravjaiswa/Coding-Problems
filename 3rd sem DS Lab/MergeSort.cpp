//Merge Sort
#include<iostream>
using namespace std;
int mid,*b,*a,n;
void merge(int a[],int lb,int mid,int ub);
void mergesort(int a[],int lb,int ub)
{
	if(lb<=ub)
	{
		mid=(lb+ub)/2;
		
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void merge(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	
	k=i=lb;
	j=mid+1;
	while(i<=mid&&j<=ub)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=ub)
	{
		b[k]=a[j];
		k++;
		j++;
	}
}
int main()
{
	int i,j,t;
	cout<<"Enter array size:\n";
	cin>>n;
	a=new int[n];
	b=new int[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	
	//Merge Sort
	mergesort(a,0,n-1);
	
	cout<<"Sorted array:\n";
	for(i=0;i<n;i++)
	cout<<b[i]<<" ";
	cout<<"\n";
}

