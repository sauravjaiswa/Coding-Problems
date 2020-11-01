//Stack using linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
		int data;
		Node *next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

class Stack{
	public:
		Node *head=NULL;
		int curr_size;
		
		Stack(){
			head=NULL;
			curr_size=0;
		}

		void push(int val){
			Node *newNode=new Node(val);
			
			if(head==NULL){
				head=newNode;
			}else{
				newNode->next=head;
				head=newNode;
			}
			curr_size++;
		}
		
		int pop(){
			Node *temp=head;
			int data;
			
			if(head!=NULL){
				data=head->data;
				head=head->next;
				return data;
				curr_size--;
			}else{
				cout<<"Stack Underflow"<<endl;
			}
			return 0;
		}
		
		int top(){
			Node *temp=head;
			int data;
			
			if(head!=NULL){
				data=head->data;
				return data;
			}else{
				cout<<"Stack Underflow"<<endl;
			}
			return 0;
		}
		
		int size(){
			return curr_size;	
		}
		
		void display(){
			Node *temp=head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};

int main(){
	int ch,data;
//	do{
//		cout<<"Enter choice:\n1)Push\n2)Pop\n3)Display\n";
//		cin>>ch;
//		switch(ch){
//			case 1:
//				cout<<"Enter data to be pushed:\n";
//				cin>>data;
//				push(data);
//				break;
//				
//			case 2:
//				cout<<"Popped data is: "<<pop();
//				break;
//				
//			case 3:
//				display();
//				cout<<"\n";
//				break;
//			
//			default:
//				cout<<"Invalid entry!!\n";	
//		}
//		cout<<"Enter 1 to continue:\n";
//		cin>>ch;
//	}while(ch==1);

	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<"Popped Element is: "<<s.pop();
	cout<<"Popped Element is: "<<s.pop();
	s.push(5);
	s.push(6);
	s.display();
	
	return 0;
}
