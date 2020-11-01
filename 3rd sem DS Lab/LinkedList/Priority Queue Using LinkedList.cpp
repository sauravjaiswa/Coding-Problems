// Priority Queue using Linked List 
#include <bits/stdc++.h> 
using namespace std;

class Node 
{ 
	public:
	int data;
	int priority;
	Node* next; 
	Node(int data, int priority) 
	{ 
		this->data = data; 
		this->priority = priority; 
		this->next = NULL; 
	}
};  

int peek(Node* head) 
{ 
	return head->data; 
} 
 
void pop(Node* head) 
{ 
	Node* temp=head; 
	head=head->next; 
	delete(temp); 
} 
 
void push(Node* head, int d, int p) 
{ 
	Node* start=head; 
 
	Node* temp=new Node(d,p); 
 
	if (head->priority > p) 
	{
		temp->next = head; 
		head=temp; 
	} 
	else 
	{
		while (start->next != NULL&&start->next->priority < p) 
			start = start->next; 
		temp->next = start->next; 
		start->next = temp; 
	} 
} 
 
int isEmpty(Node* head) 
{ 
	return head==NULL; 
} 

int main() 
{
	int n1,n2,n3,n4;
	cin>>n1>>n2>>n3>>n4;
	Node* pq = new Node(4, 1); 
	push(pq, 5, 2); 
	push(pq, 6, 3); 
	push(pq, 7, 0); 

	while (!isEmpty(pq)) 
	{ 
		cout<<" "<<peek(pq); 
		pop(pq); 
	} 
} 

