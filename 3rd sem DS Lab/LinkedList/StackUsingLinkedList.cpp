//Stack Using Linked List
#include<bits/stdc++.h>
using namespace std;

class StackNode
{
	public:
	int data;
	StackNode *next;
	StackNode(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};

StackNode *top=NULL;
StackNode *temp=NULL;

void push(int data)
{
	StackNode *newnode=new StackNode(data);
	if(top!=NULL)
	{
		newnode->next=top;
		top=newnode;
	}
	else
	top=newnode;
}

int pop()
{
	int x;
	if(top!=NULL)
	{
		temp=top;
		x=top->data;
		top=top->next;
		delete (temp);
		return x;
	}
	else
	{
		cout<<"Stack Underflow\n";
		return 0;
	}
}

int peek()
{
	int x;
	if(top!=NULL)
	{
		x=top->data;
		return x;
	}
	else
	{
		cout<<"Stack is Empty\n";
		return 0;
	}
}

int main()
{
	int x,ch;
	do
	{
		cout<<"1)Push\n2)Pop\n3)Peek\n";
		cout<<"Enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to be pushed:";
				cin>>x;
				push(x);
				break;
				case 2:
					cout<<pop()<<" popped out of stack\n";
					break;
					case 3:
						cout<<peek()<<" peeked out of stack\n";
						break;
						default:
							cout<<"Invalid choice!!\n";
		}
	}while(ch>=1&&ch<=3);
}
