//Creation of linked list.
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

void insert(int val)
{
	if(head==NULL)
	{
		temp=new Node(val);
		head=temp;
	}
//	temp->data=val;

	else
	{
		temp->next=new Node(val);
		temp=temp->next;
	}

}

void insert_begin(int val)
{
	temp=head;
	head=new Node(val);
	head->next=temp;
}

void insert_end(int val)
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new Node(val);
}

void insert_before(int ele,int val)
{
	Node *pretemp=NULL;
	Node *new_node=new Node(val);
	temp=head;
	pretemp=head;
	if(head!=NULL&&head->data==ele)
	{
		new_node->next=head;
		head=new_node;
	}
	else
	{
		while(temp->data!=ele)
		{
			pretemp=temp;
			temp=temp->next;
		}

		pretemp->next=new_node;
		new_node->next=temp;
	}

}

void insert_after(int ele,int val)
{
	Node *pretemp=NULL;
	Node *new_node=new Node(val);
	temp=head;
	pretemp=head;

	if(head!=NULL&&head->data==ele)
	{
		new_node->next=head->next;
		head->next=new_node;

	}
	else
	{
		while(pretemp->data!=ele)
		{
			pretemp=temp;
			temp=temp->next;
		}

		pretemp->next=new_node;
		new_node->next=temp;
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

void delete_beg()
{
	temp=head;
	if(head==NULL)
	cout<<"Underflow\n";
	else
	{
		head=head->next;
		delete(temp);
	}

}

void delete_end()
{
	temp=head;
	if(head==NULL)
	cout<<"Underflow\n";
	else if(head->next==NULL)
	{
		delete head->next;
		head=NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		delete (temp->next);
		temp->next=NULL;
	}
}

void delete_k(int pos)
{
	int c=0;
	temp=head;
	if(pos>cnt-1||pos<0)
	cout<<"Index out of bound\n";
	else if(head==NULL)
	cout<<"Underflow\n";
	else if(pos==0)
	{
		head=head->next;
		delete(temp);
	}
	else
	{
		while(temp!=NULL&&c<pos-1)
		{
			c++;
			temp=temp->next;
		}
		Node *nxt=temp->next->next;
		delete (temp->next);
		temp->next=nxt;
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

int main()
{
	int ch,val,ele;
	create();
	cout<<"Original Linked list:\n";
	print();

	cout<<"Inserting 78 at beginning of Linked List\n";
	insert_begin(78);
    print();

    cout<<"Inserting 187 at end of Linked List\n";
	insert_end(187);
    print();

    cout<<"Inserting 197 after 12\n";
	insert_after(12,197);
    print();

    cout<<"Delete from beginning of Linked List\n";
    delete_beg();
    print();

    cout<<"Delete from end of Linked List\n";
	delete_end();
    print();

    cout<<"Delete from 1st position of Linked List\n";
	delete_k(1);
    print();

}
