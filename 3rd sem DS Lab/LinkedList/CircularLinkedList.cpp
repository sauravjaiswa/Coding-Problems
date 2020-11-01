//Circular linked list.
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
	temp->next=head;
}

void insert_begin(int val)
{
	temp=head;
	Node *new_node=new Node(val);
	while(temp->next!=head)
	temp=temp->next;
	temp->next=new_node;
	new_node->next=head;
	head=new_node;
}

void insert_end(int val)
{
	temp=head;
	Node *new_node=new Node(val);
	while(temp->next!=head)
	temp=temp->next;
	temp->next=new_node;
	new_node->next=head;
}

void insert_before(int ele,int val)
{
	Node *pretemp=NULL;
	Node *new_node=new Node(val);
	temp=head;
	pretemp=head;
	if(head!=NULL&&head->data==ele)
	{
		while(temp->next!=head)
		temp=temp->next;
		temp->next=new_node;
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
		while(temp!=head)
		temp=temp->next;
		temp->next=new_node;
		new_node->next=head->next;
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

void search(int val)
{
	int f=0,pos=0;
	temp=head;
	do
	{
		if(temp->data==val)
		{
			f=1;
			break;
		}
		else
		{
			pos++;
			temp=temp->next;
		}
		
	}while(temp!=head);
	if(f==1)
	cout<<val<<" present at "<<pos<<"\n";
	else
	cout<<"Not present\n";
}

void delete_beg()
{
	temp=head;
	if(head==NULL)
	cout<<"Underflow\n";
	else
	{
		while(temp->next!=head)
		temp=temp->next;
		
		temp->next=head->next;
		delete(head);
		head=temp->next;
	}
	
}

void delete_end()
{
	Node *pretemp=head;
	temp=head;
	while(temp->next!=head)
	{
		pretemp=temp;
		temp=temp->next;
	}
	pretemp=temp->next;
	delete (temp);
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

void delete_after_k(int pos)
{
	int c=0;
	temp=head;
	if(pos>cnt-2||pos<1)
	cout<<"Index out of bound\n";
	else if(head==NULL)
	cout<<"Underflow\n";
	else
	{
		while(temp->next!=NULL&&c<=pos-1)
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
	temp=head;
	do
	{
		cout<<temp->data<<"\n";
		temp=temp->next;
	}while(temp!=head);
}

int main()
{
	int ch,val,ele;
	create();
	cout<<"Original Linked list:\n";
	print();
	do
	{
		cout<<"1)Insert at beginning of Linked List\n";
		cout<<"2)Insert at end of Linked List\n";
		cout<<"3)Insert before position of element of Linked List\n";
		cout<<"4)Insert after position of element of Linked List\n";
		cout<<"5)Search element\n";
		cout<<"6)Delete at beginning\n";
		cout<<"7)Delete at end\n";
		cout<<"8)Delete at a given position\n";
		cout<<"9)Delete next element of a given position\n";
		cout<<"Enter choice:\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value:";
				cin>>val;
				insert_begin(val);
				print();
				break;
				case 2:
					cout<<"Enter value:";
					cin>>val;
					insert_end(val);
					print();
					break;
					case 3:
						cout<<"Enter element before which and value:";
						cin>>ele;
						cin>>val;
						insert_before(ele,val);
						print();
						break;
						case 4:
						cout<<"Enter element after which and value:";
						cin>>ele;
						cin>>val;
						insert_after(ele,val);
						print();
						break;
						case 5:
						cout<<"Enter element to search:";
						cin>>val;
						search(val);
						break;
						case 6:
							delete_beg();
							print();
							break;
						case 7:
							delete_end();
							print();
							break;
						case 8:
							cout<<"Enter position to be deleted:";
							cin>>val;
							delete_k(val);
							print();
							break;
							case 9:
							cout<<"Enter position whose next element is to be deleted:";
							cin>>val;
							delete_after_k(val);
							print();
							break;
					default:
					cout<<"Enter valid input!!";	
		}
	}while(ch>0&&ch<=10);
	
}
