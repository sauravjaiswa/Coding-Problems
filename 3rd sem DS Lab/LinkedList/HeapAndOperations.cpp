//Heaps and its operations
#include<bits/stdc++.h>
using namespace std;

/*void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}*/

void max_heapify(int a[],int n,int i)
{
	int l,r,largest;
	l=(2*i)+1;
	r=(2*i)+2;
	int left,right;
	left=right=-1;
	
	if(l<=n && a[l]>a[i])
	largest=l;
	else
	largest=i;
	
	if(r<=n && a[r]>a[largest])
	largest=r;
	
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		max_heapify(a,n,largest);	
	}
}

void build_max_heap(int a[],int len)
{
	int i;
	for(i=((int)floor(len/2));i>=1;i--)
	max_heapify(a,len,i);
}

int heap_extract_max(int a[],int len)
{
	int max;
	if(len<1)
	cout<<"Heap Underflow\n";
	
	max=a[1];
	a[1]=a[len];
	len=len-1;
	max_heapify(a,len,1);
	return max;
}

void heap_increase_key(int a[],int i,int key)
{
	if(key<a[i])
	cout<<"Wrong key!!\n";
	
	a[i]=key;
	while(i>1&&a[i/2]<a[i])
	{
		swap(a[i],a[i/2]);
		i=i/2;
	}
}

void insert(int a[],int key,int len)
{
	a[len+1]=INT_MIN;
	heap_increase_key(a,len+1,key);
}

void heapsort(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	max_heapify(a,n,i);
	
	for(i=n;i>=1;i--)
	{
		swap(a[1],a[i]);
		max_heapify(a,i,1);
	}
}

void display(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	cout<"\n";
}

int main()
{
	int i,ch,key,pos,n,a[100],flag;
	cout<<"Enter size of heap:";
	cin>>n;
	cout<<"Enter elements in heap:\n";
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	cout<<"Original heap:\n";
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	
	cout<<"1.Heap Sort \n 2.Extract max element \n 3.Heap Increase Key \n 4.Insert element in heap\n";
	cout<<"Enter choice:\n";
	do
	{
		cin>>ch;
		switch(ch)
		{
			case 1:
				heapsort(a,n);
				display(a,n);
				break;
				case 2:
					cout<<"Maximum element is:"<<heap_extract_max(a,n)<<"\n";
					break;
					case 3:
						cout<<"Enter key and position:";
						cin>>key;
						cin>>pos;
						heap_increase_key(a,pos,key);
						display(a,n);
						break;
						case 4:
							cout<<"Enter key to be inserted:";
							cin>>key;
							heap_increase_key(a,n+1,key);
							display(a,n);
							break;
							default:
								cout<<"Invalid choice!";
		}
		cout<<"Enter 1 to continue:";
		cin>>flag;
	}while(flag==1);
	
}
