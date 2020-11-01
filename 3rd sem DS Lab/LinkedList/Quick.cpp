//Quick Sort
#include <bits/stdc++.h>
using namespace std;

void swapp(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int *a,int lb,int ub)
{
	int pivot=lb;
	int start,end;
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=a[pivot])
		start++;
		while(a[end]>a[pivot])
		end--;
		if(start<end)
		swapp(&a[start],&a[end]);
	}
	swapp(&a[lb],&a[end]);
	return end;
}
void quickSort(int *a,int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		quickSort(a,lb,loc-1);
		quickSort(a,loc+1,ub);
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
	quickSort(a,0,n-1);
	print(a,n);
}
