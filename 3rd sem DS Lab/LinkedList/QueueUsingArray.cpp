//Queue using array
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Queue
{
	public:
		int front,rear,*arr,capacity;
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			cout<<"Enter capacity:";
			cin>>capacity;
			arr=new int[capacity];
		}
		
		void enqueue(int x)
		{
			if(front==-1&&rear==-1)
			front=rear=0;
			if(rear>=capacity)
			cout<<"Overflow\n";
			else
			{
				arr[rear++]=x;
				cout<<x<<" is enqueued\n";
			}
		}
		
		void dequeue()
		{
			int x;
			if(front==-1||front>rear)
			cout<<"Underflow\n";
			else
			{
				x=arr[front++];
				cout<<x<<" deuqued\n";
				if(front>rear)
				front=rear=-1;
			}
		}
		
		int peek()
		{
			int x;
			if(front==-1||front>rear)
			cout<<"Underflow\n";
			else
			return arr[front];
		}
		
		void display()
		{
			int i;
			if(front==-1||front>rear)
			cout<<"Underflow\n";
			else
			{
				for(i=front;i<=rear;i++)
				cout<<arr[i]<<" ";	
			}
			cout<<"\n";
		}
};

int main()
{
	int ch,x;
	Queue q;
	do
	{
		cout<<"1)Enqueue\n2)Dequeue\n3)Peek\n";
		cout<<"Enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to be enqueued:";
				cin>>x;
				q.enqueue(x);
				break;
				case 2:
					q.dequeue();
					break;
					case 3:
						cout<<q.peek()<<" peeked out of stack";
						break;
						default:
							cout<<"Invalid choice!!\n";
		}
	}while(ch>=1&&ch<=3);
	q.display();
}
