//Circular Queue
#include<bits/stdc++.h>
#define MAX 5
using namespace std;

int arr[MAX];
int front,rear;
void enqueue(int val)
{
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		arr[rear]=val;
		cout<<val<<" is enqueued\n";
	}
	else if(front==0&&rear==MAX-1)
	cout<<"Overflow\n";
	else if(front!=0&&rear==MAX-1)
	{
		rear=0;
		arr[rear]=val;
		cout<<val<<" is enqueued\n";	
	}
	else
	{
		arr[++rear]=val;
		cout<<val<<" is enqueued\n";
	}
}

int dequeue()
{
	int x=-999;			//Denotes invalidity
	if(front==-1)
	cout<<"Underflow\n";
	x=arr[front];
	if(front==rear)
	front=rear=-1;
	else
	{
		if(front==MAX-1)
		front=0;
		else
		front++;
	}
	return x;
}

void display()
{
	int i;
	if(front==-1&&rear==-1)
	cout<<"\nQueue Empty\n";
	else
	{
		if(front<rear)
		{
			for(i=front;i<=rear;i++)
			cout<<" "<<arr[i];
		}
		else
		{
			for(i=front;i<MAX;i++)
			cout<<" "<<arr[i];
			for(i=0;i<=rear;i++)
			cout<<" "<<arr[i];
		}
	}
	cout<<"\n";
}

int main()
{
	front=rear=-1;
	int ch,x;
	do
	{
		cout<<"1)Enqueue\n2)Dequeue\n";
		cout<<"Enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to be enqueued:";
				cin>>x;
				enqueue(x);
				break;
				case 2:
					cout<<dequeue()<<" is dequed\n";
					break;
						default:
							cout<<"Invalid choice!!\n";
		}
	}while(ch>=1&&ch<=2);
	display();
}
