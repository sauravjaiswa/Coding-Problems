//Palindrome Check Using Stack
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

Node *head=NULL;
Node *top=NULL;
Node *temp=NULL;
int l=0;

void insert(int val)
{
	if(head==NULL)
	{
		temp=new Node(val);
		head=temp;
	}
	else
	{
		temp->next=new Node(val);
		temp=temp->next;	
	}
}

void create()
{
	int val,ch;
	cout<<"Enter a values in the list:\n";
	do
	{
		cin>>val;
		insert(val);
		cout<<"Enter 1 to continue:";
		cin>>ch;
	}while(ch==1);
	temp->next=NULL;
}

void push(int data)
{
	Node *newnode=new Node(data);
	if(top!=NULL)
	{
		newnode->next=top;
		top=newnode;
	}
	else
	top=newnode;
	l++;
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
		l--;
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

void print()
{
	Node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}

void Palindrome()
{
	int f=0;
	temp=head;
	while(temp!=NULL)
	{
		push(temp->data);
		temp=temp->next;
	}
	
	while(head!=NULL)
	{
		int x=peek();
		pop();
		if(head->data!=x)
		{
			f=1;
			break;
		}
		else
		f=0;
		head=head->next;
	}
	if(f==0)
	cout<<"Yes\n";
	else
	cout<<"No\n";
}

int main()
{
	create();
	cout<<"Original Linked list:\n";
	print();
	Palindrome();
}
