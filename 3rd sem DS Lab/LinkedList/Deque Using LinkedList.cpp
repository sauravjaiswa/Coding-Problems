//Deque Using Linked List
#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node *prev;
	Node(int data)
	{
		this->data=data;
		this->next=this->prev=NULL;
	}
};

Node *front=NULL;
Node *rear=NULL;
Node *temp=NULL;

void insert_front(int val)
{
	Node *newnode=new Node(val);
	if(front==NULL)
	front=rear=newnode;
	else
	{
		newnode->next=front;
		front->prev=newnode;
		front=newnode;
	}
}

void insert_rear(int val)
{
	Node *newnode=new Node(val);
	if(rear==NULL)
	front=rear=newnode;
	else
	{
		rear->next=newnode;
		newnode->prev=rear;
		rear=newnode;
		rear->next=NULL;
	}
}

int del_front()
{
	int x;
	if(front==NULL)
	{
		cout<<"Underflow\n";
		return -1;
	}
	else
	{
		temp=front;
		x=temp->data;
		front=front->next;
		if(front==NULL)
		rear=NULL;
		else
		front->prev=NULL;
		delete(temp);
		return x;
	}
}

int del_rear()
{
	int x;
	if(front==NULL)
	{
		cout<<"Underflow\n";
		return -1;
	}
	else
	{
		temp=rear;
		x=temp->data;
		rear=rear->prev;
		if(rear==NULL)
		front=NULL;
		else
		rear->next=NULL;
		delete(temp);
		return x;
	}
}

int getFront()
{
	int x=-1;
	if(front==NULL)
	cout<<"Queue is empty\n";
	else
	x=front->data;
	return x;
}

int getRear()
{
	int x=-1;
	if(rear==NULL)
	cout<<"Queue is empty\n";
	else
	x=rear->data;
	return x;
}

int main()
{
	int option,val;
	do
	{
	cout<<"\n ***** MAIN MENU *****";
	cout<<"\n 1. Insert at front";
	cout<<"\n 2. Insert at rear";
	cout<<"\n 3. Delete at front";
	cout<<"\n 4. Delete at rear";
	cout<<"\n 5. Get front";
	cout<<"\n 6. Get rear";
	cout<<"\n 7. EXIT";
	cout<<"\n Enter your option : ";
	cin>>option;
	switch(option)
	{
		case 1:
		cout<<"Enter value to be entered:";
		cin>>val;
		insert_front(val);
		break;
		case 2:
		cout<<"Enter value to be entered:";
		cin>>val;
		insert_rear(val);
		break;
		case 3:
		val=del_front();
		if(val!=-1)
		cout<<"\n The number deleted is :"<<val;
		break;
		case 4:
		val=del_rear();
		if(val!=-1)
		cout<<"\n The front value in queue is :"<<val;
		break;
		case 5:
		val=getFront();
		if(val!=-1)
		cout<<"\n The rear value in queue is :"<<val;
		break;
		case 6:
		val=getRear();
		if(val!=-1)
		cout<<"\n The first value in queue is :"<<val;
		break;
	}
	}while(option!=6);
}
