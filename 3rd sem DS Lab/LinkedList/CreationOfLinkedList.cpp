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

void search(int val)
{
	int f=0,pos=0;
	temp=head;
	while(temp!=NULL)
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
	}
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
	Node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"\n";
		ptr=ptr->next;
	}
}

void reverse()
{
	Node *curr,*nxt,*prev;
	nxt=NULL;
	prev=NULL;
	curr=head;
	while(curr!=NULL)
	{
		nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
	}
	head=prev;
}

Node* delduplicacy(Node *head)
{
	Node *temp1,*temp2,*dup; 
    temp1=head;

    while(temp1!=NULL&&temp1->next!=NULL) 
    { 
        temp2=temp1;
        while(temp2->next != NULL) 
        { 
            if(temp1->data==temp2->next->data) 
            { 
                dup=temp2->next; 
                temp2->next=temp2->next->next; 
                delete(dup); 
            }
            else
                temp2=temp2->next; 
        }
        temp1=temp1->next; 
    } 
    return head;
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
		cout<<"10)Reverse the linked list\n";
		cout<<"11)Reverse the linked list\n";
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
							case 10:
								reverse();
								print();
								break;
								case 11:
									delduplicacy(head);
									print();
									break;
					default:
					cout<<"Enter valid input!!";	
		}
	}while(ch>0&&ch<=10);
	
}
