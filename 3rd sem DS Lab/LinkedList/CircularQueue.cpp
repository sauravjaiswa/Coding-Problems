//Circular Queue
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class CQueue
{
	public:
		int front,rear,*arr,capacity;
	public:
		CQueue()
		{
			front=-1;
			rear=-1;
			cout<<"Enter capacity:";
			cin>>capacity;
			arr=new int[capacity];
		}
		
		void enqueue(int x)
		{
			if(front==-1)
			{
				front=rear=0;
				arr[rear]=x;
				cout<<x<<" is enqueued\n";
			}
			else if(front==0&&rear==capacity-1)
			cout<<"Overflow\n";
			else if(front!=0&&rear==capacity-1)
			{
				rear=0;
				arr[rear]=x;
				cout<<x<<" is enqueued\n";
			}
			else
			{
				arr[++rear]=x;
				cout<<x<<" is enqueued\n";
			}
		}
		
		int dequeue()
		{
			int x;
			if(front==-1)
			cout<<"Underflow\n";
			x=arr[front];
			if(front==rear)
			front=rear=-1;
			else
			{
				if(front==capacity-1)
				front=0;
				else
				front++;
			}
			return x;
		}
		
		int peek()
		{
			int x;
			if(front==-1||rear==-1)
			cout<<"Underflow\n";
			else
			return arr[front];
		}
		
		void display()
		{
			int i;
			cout<<"\n";
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
					for(i=front;i<capacity;i++)
					cout<<" "<<arr[i];
					for(i=0;i<=rear;i++)
					cout<<" "<<arr[i];
				}
			}
			cout<<"\n";
		}
};

int main()
{
	CQueue q;
	int option,val;
	do
	{
	printf("\n 1. Insert an element");
	printf("\n 2. Delete an element");
	printf("\n 3. Peek");
	printf("\n 4. Display the queue");
	printf("\n 5. EXIT");
	printf("\n Enter your option : ");
	cin>>option;
	switch(option)
	{
		case 1:
		cout<<"Enter value to be entered:";
		cin>>val;
		q.enqueue(val);
		break;
		case 2:
		val = q.dequeue();
		if(val!=-1)
		cout<<"\n The number deleted is :"<<val;
		break;
		case 3:
		val = q.peek();
		if(val!=-1)
		cout<<"\n The first value in queue is :"<<val;
		break;
		case 4:
		q.display();
		break;
	}
	}while(option!=5);
}
