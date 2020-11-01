//Queue Using LinkedList
#include<bits/stdc++.h>
using namespace std;

class QueueNode
{
	public:
		int data;
		QueueNode *next;
		QueueNode(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
QueueNode *front=NULL;
QueueNode *rear=NULL;
QueueNode *temp=NULL;

void enqueue(int x)
{
	QueueNode *newnode=new QueueNode(x);
	if(front==NULL)
	{
		front=rear=newnode;
		front->next=rear->next=NULL;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=NULL;
	}
}

int dequeue()
{
	if(front==NULL)
	{
		cout<<"Underflow\n";
	}
	else
	{
		temp=front;
		cout<<temp->data<<" is dequeued\n";
		front=front->next;
		delete(temp);
	}
	return temp->data;
}

int main()
{
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
					dequeue();
					break;
						default:
							cout<<"Invalid choice!!\n";
		}
	}while(ch>=1&&ch<=2);
}
