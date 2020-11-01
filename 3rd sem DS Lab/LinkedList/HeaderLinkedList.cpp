//Header Linked List
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
class Header
{
	public:
	int max,min,count;
	Header *next;
	
	Node()
	{
		this->max=0;
		this->min=0;
		this->count=0;
		this->next=NULL;
	}
};
class Node
{
	public:
	int data;
//	int max,min,count;
	Node *next;
	
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
};
Header *head=NULL;
Node *temp=NULL;
Node *start=NULL;

void insert_head()
{
	head=new Header();
}

void insert(int val)
{
	temp->next=new Node(val);
	temp=temp->next;
}

void create()
{
	insert_head();
	int val,ch;
	cout<<"Enter a values in the list:\n";
	do
	{
		cin>>val;
		insert(val);
		if(val>head->max)
		head->max=val;
		else if(val<head->min)
		head->min=val;
		cout<<"Enter 1 to continue:";
		cin>>ch;
		cnt++;
	}while(ch==1);
	temp->next=NULL;
	head->count=cnt;
}

void print()
{
	Node *ptr=head->next;
	cout<<head->count<<" "<<head->max<<" "<<head->min<<"\n";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}

int main()
{
	int ch,val,ele;
	create();
	cout<<"Original Linked list:\n";
	print();
}
