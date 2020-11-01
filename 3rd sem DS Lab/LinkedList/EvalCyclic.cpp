//Linked List is Cyclic or not.
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
Node *temp=NULL;
int cnt=0;

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
		cnt++;
		cout<<"Enter 1 to continue:";
		cin>>ch;
	}while(ch==1);
	temp->next=NULL;
}

void print()
{
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}
}


void checkCyclic()
{
	Node *preptr,*ptr;
	preptr=head;
	ptr=head;
	int f=0;
	
	while(ptr=NULL&&ptr->next!=NULL)
	{
		ptr=ptr->next;
		preptr=preptr->next->next;
		if(ptr==preptr)
		{
			f=1;
			break;	
		}
		else
		f=0;
		
	}
	cout<<f<<"\n";
}

int main()
{
	create();
	cout<<"Original Linked list:\n";
	print();
	checkCyclic();
}
