//Circular Queue Using Linked List
#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

Node *front=NULL;
Node *rear=NULL;
Node *temp=NULL;

void enqueue(int x)
{
	Node *newnode=new Node(x);
	if(front==NULL)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
}

int dequeue()
{
	int x;
	if(front==NULL)
	{
		cout<<"Underflow\n";
		return -1;
	}
	else if(front==rear)
	{
		x=front->data;
		front=rear=NULL;
		return x;
	}
	else
	{
		x=front->data;
		front=front->next;
		return x;
	}
}

int peek()
{
	int x;
	if(front==NULL)
	{
		cout<<"Stack is empty\n";
		return -1;
	}
	else
	{
		x=front->data;
		return x;
	}
}

void display() 
{ 
    temp=front; 
    cout<<"\nElements in Circular Queue are:"; 
    while(temp->next!=front) 
    { 
        cout<<temp->data<<" "; 
        temp=temp->next; 
    }
    cout<<temp->data;
} 

int main()
{
	int option,val;
	do
	{
	cout<<"\n ***** MAIN MENU *****";
	cout<<"\n 1. Insert an element";
	cout<<"\n 2. Delete an element";
	cout<<"\n 3. Peek";
	cout<<"\n 4. Display the queue";
	cout<<"\n 5. EXIT";
	cout<<"\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
		cout<<"Enter value to be entered:";
		cin>>val;
		enqueue(val);
		break;
		case 2:
		val=dequeue();
		if(val!=-1)
		cout<<"\n The number deleted is :"<<val;
		break;
		case 3:
		val=peek();
		if(val!=-1)
		cout<<"\n The first value in queue is :"<<val;
		break;
		case 4:
		display();
		break;
	}
	}while(option!=5);
}
