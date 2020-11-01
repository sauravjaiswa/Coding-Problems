//Quick Sort
#include<iostream>
using namespace std;

int partition(int a[],int beg,int end) 
{ 
	int left,right,temp,pivot,flag;
	pivot=left=beg;
	right=end;
	flag=0;
	while(flag!=1)
	{
		while((a[pivot]<=a[right])&&(pivot!=right))
		right--;
		if(pivot==right)
		flag=1;
		else if(a[pivot]>a[right])
		{
			temp=a[pivot];
			a[pivot]=a[right];
			a[right]=temp;
			pivot=right;
		}
		if(flag!=1)
		{
			while((a[pivot]>=a[left])&&(pivot!=left))
			left++;
			if(pivot==left)
			flag=1;
			else if(a[pivot] <a[left])
			{
				temp=a[pivot];
				a[pivot]=a[left];
				a[left]=temp;
				pivot=left;
			}
		}
	}
	return pivot;
} 

void quickSort(int a[],int beg,int end) 
{ 
	if(beg<end) 
	{ 
		int pivot=partition(a,beg,end);
		quickSort(a,beg,pivot-1); 
		quickSort(a,pivot+1,end);  
	} 
} 

void print(int a[],int size)  
{  
    int i;
    for(i=0;i<size;i++)  
        cout<<a[i] <<" ";  
    cout<<"\n";  
}  

int main() 
{ 
	int i,n,*a,pivot;
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
	pivot=a[0];
	quickSort(a,0,n-1); 

	cout<<"Sorted array is:\n"; 
	print(a,n);
	return 0; 
} 

