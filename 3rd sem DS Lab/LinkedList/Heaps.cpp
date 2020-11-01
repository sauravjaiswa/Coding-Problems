//Heaps
#include <bits/stdc++.h>
#define SIZE 100
using namespace std;
void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}

void swap_val(int* a,int val1,int val2)
{
    int t=a[val1];
    a[val1]=a[val2];
    a[val2]=t;
}

void heapify(int* a,int n,int currIndex)
{
    int curr=a[currIndex];
    int l=currIndex*2 + 1;
    int r=currIndex*2 + 2;
    int left,right;
	left=right=-1;

    if(l<n)
        left=a[l];
    if(r<n)
        right=a[r];

    if(left>=right && left>curr)
    {
        swap_val(a,currIndex,l);
        heapify(a,n,l);
    }
    else if(right>=left && right>curr)
    {
        swap_val(a,currIndex,r);
        heapify(a,n,r);
    }
}

void buildHeap(int* a,int n)
{
    int last=(n/2)-1;
	int i;

    for(i=last;i>=0;i--)
        heapify(a,n,i);
}

void delete_element(int* a,int n)
{
    swap_val(a,0,n-1);
    n=n-1;
    heapify(a,n,0);
}

int main()
{
    int a[SIZE];
    int n,i;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    cout << "Enter the values:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    buildHeap(a,n);

    cout<<"Heap is:";
    display(a,n);
    cout<<"\n";
    int len=n;
    for(i=0;i<len;i++)
    {
        delete_element(a,n);
        n=n-1;
        cout<<"Element deleted\n";
        display(a,n);
    }

    cout<<"Heap Sort: ";
    display(a,len);
}
