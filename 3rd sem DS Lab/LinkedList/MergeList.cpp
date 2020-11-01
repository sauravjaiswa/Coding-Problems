/*Wap that takes two list each of which is sorted in increasing order merge the two list in one in increasing order. Your
program should written the merged list.*/
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
Node *head1=NULL;
Node *temp1=NULL;
Node *head2=NULL;
Node *temp2=NULL;
Node *head3=NULL;
Node *temp3=NULL;

void insert1(int val)
{
	if(head1==NULL)
	{
		temp1=new Node(val);
		head1=temp1;
	}
	else
	{
		temp1->next=new Node(val);
		temp1=temp1->next;	
	}
	
}

void create1()
{
	int val,ch;
	cout<<"Enter a values in the list:\n";
	do
	{
		cin>>val;
		insert1(val);
		cout<<"Enter 1 to continue:";
		cin>>ch;
		cnt++;
	}while(ch==1);
	temp1->next=NULL;
}

void insert2(int val)
{
	if(head2==NULL)
	{
		temp2=new Node(val);
		head2=temp2;
	}
	else
	{
		temp2->next=new Node(val);
		temp2=temp2->next;	
	}
	
}

void create2()
{
	int val,ch;
	cout<<"Enter a values in the list:\n";
	do
	{
		cin>>val;
		insert2(val);
		cout<<"Enter 1 to continue:";
		cin>>ch;
		cnt++;
	}while(ch==1);
	temp2->next=NULL;
}

void merge(Node *head1,Node *head2)
{
	Node *t, *temp;
    if(head1==NULL&&head2==NULL)
    t=NULL;
    else if(head1==NULL)
    t= head2;
    else if(head2==NULL)
    t= head1;
    if(head1->data<=head2->data)
    head1->next=merge(head1->next,head2);
    else
    {
        temp=head2;
        head2=head2->next;
        temp->next=head1;
        head1=temp;
        head1->next=merge(head1->next,head2);
    }
	
	t=head1;
	while(t!=NULL)
	{
		cout<<t->data<<" ";
		t=t->next;
	}
}

