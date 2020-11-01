#include<iostream>
using namespace std;

void merge(int a[],int l,int mid,int u) 
{ 
	int i,j,k,n1,n2; 
	n1=mid-l+1;
	n2=u-mid; 


	int L[n1],R[n2]; 


	for (i=0;i<n1;i++) 
		L[i]=a[l+i]; 
	for (j=0;j<n2;j++) 
		R[j]=a[mid+1+j]; 

	i=0;  
	j=0;  
	k=l; 
	while(i<n1&&j<n2) 
	{ 
		if(L[i]<=R[j]) 
		{ 
			a[k]=L[i]; 
			i++; 
		} 
		else
		{ 
			a[k]=R[j]; 
			j++; 
		} 
		k++; 
	} 

	while(i<n1) 
	{ 
		a[k]=L[i]; 
		i++; 
		k++; 
	} 

	
	while(j<n2) 
	{ 
		a[k]=R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int a[],int l,int r) 
{ 
	if(l<r) 
	{ 
		int mid=l+(r-l)/2; 
 
		mergeSort(a,l,mid); 
		mergeSort(a,mid+1,r); 
		merge(a,l,mid,r); 
	} 
} 


int main() 
{ 
	int i,n,*a;
	cout<<"Enter array size:\n";
	cin>>n;
	a=new int[n];
	cout<<"Enter values in array:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Original array is:\n"; 
	for(i=0;i<n;i++) 
	cout<<a[i]<<" ";
	cout<<"\n"; 

	mergeSort(a,0,n-1); 

	cout<<"Sorted array is:\n"; 
	for(i=0;i<n;i++) 
	cout<<a[i]<<" ";
	cout<<"\n";
	return 0; 
} 

