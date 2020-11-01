/*Given a list split it into two sublist one for front half one for back half if no. element is odd extra element should go in 
the front list. Print the two sublist.*/
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
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
Node *headlist1=NULL;
Node *headlist2=NULL;
Node *temp1=NULL;
Node *temp2=NULL;

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
		cnt++;
	}while(ch==1);
	temp->next=NULL;
}

void divide()
{
	int l,r,c=0;
	if(cnt%2!=0)
	{
		l=(cnt/2)+1;
		r=cnt-l;
	}
	else
	l=r=cnt/2;
	
	temp=head;
	while(temp!=NULL)
	{
		c++;
		if(c<=l)
		{
			if(headlist1==NULL)
			{
				temp1=new Node(temp->data);
				headlist1=temp1;
			}
			else
			{
				temp1->next=new Node(temp->data);
				temp1=temp1->next;	
			}
		}
		else
		{
			if(headlist2==NULL)
			{
				temp2=new Node(temp->data);
				headlist2=temp2;
			}
			else
			{
				temp2->next=new Node(temp->data);
				temp2=temp2->next;	
			}
		}
		temp=temp->next;
	}
	temp1->next=NULL;
	temp2->next=NULL;
}

void print()
{
	temp=head;
	cout<<"Original list:\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
	temp=headlist1;
	cout<<"First Sublist:\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
	temp=headlist2;
	cout<<"Second Sublist:\n";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}

int main()
{
	create();
	
	divide();
	print();
	
}
