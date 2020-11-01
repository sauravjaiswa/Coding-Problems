//Circular Doubly Linked List
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
class Node
{
	public:
	int data;
	Node *prev;
	Node *next;
	
	Node(int data)
	{
		this->data=data;
		this->prev=prev;
		this->next=NULL;
	}
};
Node *head=NULL;
Node *temp=NULL;
//temp=head;
void insert(int element)
{
    if(head == NULL)
    {
        temp = new Node(element);
        head = temp;
    }
    else
    {
        temp->next = new Node(element);
        temp->next->prev = temp;
        temp = temp->next;
        
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
	head->prev=temp;
        temp->next=head;
}

void insert_begin(int val)
{
	Node* newnode=new Node(val);
	newnode->prev=head->prev;
	newnode->next=head;
	head->prev->next=newnode;
	head->prev=newnode;
	head=newnode;
}

void insert_end(int val)
{
	Node *newnode=new Node(val);
	temp=head;
	newnode->next=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	newnode->prev=temp;
	temp->next=newnode;
	head->prev=newnode;
}

void insert_before(int ele,int val)
{
	Node *pretemp;
	Node *newnode=new Node(val);
	pretemp=head;
	temp=head;
	if(head!=NULL&&head->data==ele)
	{
		while(temp->next!=head)
		temp=temp->next;
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	else
	{
		while(temp->data!=ele)
		{
			pretemp=temp;
			temp=temp->next;
		}
		newnode->next=pretemp->next;
		newnode->prev=pretemp;
		pretemp->next=newnode;
		temp->prev=newnode;
	}
}

void insert_after(int ele,int val)
{
	Node *pretemp;
	Node *newnode=new Node(val);
	pretemp=head;
	temp=head;
	if(head!=NULL&&head->data==ele)
	{
		while(temp->next!=head)
		temp=temp->next;
		temp->next=newnode;
		newnode->prev=temp;
		newnode->next=head;
		head->prev=newnode;
	}
	else
	{
		while(pretemp->data!=ele)
		{
			pretemp=temp;
			temp=temp->next;
		}
		newnode->next=pretemp->next;
		newnode->prev=pretemp;
		pretemp->next=newnode;
		temp->prev=newnode;
	}
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
		head->next->prev=temp;
		delete(head);
		head=temp->next;	
	}
}

void delete_end()
{
	temp=head;
	if(head==NULL)
	cout<<"Underflow\n";
	else if(head->next==NULL)
	{
		delete(head->next);
		head=NULL;
	}
	else
	{
		while(temp->next->next!=head)
		{
			temp=temp->next;
		}
		delete(temp->next);
		temp->next=head;
		head->prev=temp;
	}
}

void delete_k(int pos)
{
	int c;
	temp=head;
	if(head==NULL)
	cout<<"Underflow\n";
	else if(pos==0)
	{
		head=head->next;
		delete(temp);
	}
	else
	{
		while(temp!=head&&c<pos)
		{
			c++;
			temp=temp->next;
		}
		Node *nxt=temp->next->next;
		temp->next->prev=temp;
		delete (temp->next);
		temp->next=nxt;
	}
}

void delete_afterk(int pos)
{
	temp=head;
	int c=0;
	if(head==NULL)
	cout<<"Underflow\n";
	else
	{
		while(temp->next!=head&&c<=pos-1)
		{
			c++;
			temp=temp->next;
		}
		Node *nxt=temp->next->next;
		temp->next->prev=temp;
		delete (temp->next);
		temp->next=nxt;
	}
}

void print()
{
	Node *ptr=head;
	do
	{
		cout<<ptr->data<<"\n";
		ptr=ptr->next;
	}while(ptr!=head);
}

int main()
{
	int ch,val,ele;
	create();
	cout<<"Original Doubly Linked list:\n";
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
						//search(val);
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
							delete_afterk(val);
							print();
							break;
					default:
					cout<<"Enter valid input!!";	
		}
	}while(ch>0&&ch<=10);
}
