//Insertion, deletion and searching operations on circular doubly link list

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *prev,*next;

    Node(int data){
        this->data=data;
        this->prev=this->next=NULL;
    }
};

class CircularDoublyLinkedList{
public:
    Node *head=NULL;

    void insertEnd(int val){
        Node *temp,*newNode;
        temp=head;
        newNode=new Node(val);

        if(head==NULL){
            head=newNode;
            temp=head;
            head->next=head;
            head->prev=head;
        }else{
            while(temp->next!=head)
                temp=temp->next;

            temp->next=newNode;
            newNode->prev=temp;
            newNode->next=head;
            head->prev=newNode;
        }
    }

    void insertAfter(int pos,int val){
        Node *temp,*pretemp,*newNode;
        int cnt=0;
        temp=head;
        newNode=new Node(val);

        if(temp==NULL){
            cout<<"Sorry the list is empty!!";
            return;
        }

        while(cnt!=pos&&temp->next!=head){
            cnt++;
            temp=temp->next;
        }

        newNode->prev=temp;
        newNode->next=temp->next;
        temp->next->prev=newNode;
        temp->next=newNode;
    }

    void insertBefore(int pos,int val){
        Node *temp,*pretemp,*newNode;
        int cnt=0;
        temp=head;
        newNode=new Node(val);

        if(temp==NULL){
            cout<<"Sorry the list is empty!!";
            return;
        }

        if(pos==0){
            newNode->next=head;
            newNode->prev=head->prev;
            head->prev->next=newNode;
            head->prev=newNode;
            head=newNode;
            return;
        }

        while(cnt!=pos){
            cnt++;
            temp=temp->next;
        }

        newNode->prev=temp->prev;
        newNode->next=temp;
        temp->prev->next=newNode;
        temp->prev=newNode;

    }

    int deleteNode(int val){
        Node *temp=head;

        if(temp->data==val){
            temp->next->prev=head->prev;
            head=temp->next;
            head->prev->next=head;
            return 1;
        }

        do{
            if(val==temp->next->data){
                temp->next=temp->next->next;
                temp->next->prev=temp;
                return 1;
            }
            temp=temp->next;
        }while(temp!=head);
        return 0;
    }

    int searchNode(int val){
        int cnt=0;
        Node *temp=head;

        do{
            cnt++;
            if(temp->data==val){
                cout<<"The searched element "<<val<<" is at "<<cnt<<" position\n";
                return 1;
            }
            temp=temp->next;
        }while(temp!=head);
        return 0;
    }

    void display(){
        Node *temp=head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
        cout<<"\n";
    }
};

int main(){
    CircularDoublyLinkedList dll;

    dll.insertEnd(1);
    dll.insertEnd(2);
    dll.insertEnd(3);
    dll.insertBefore(2,22);
    dll.insertAfter(2,4);
    dll.insertAfter(2,33);
    dll.insertBefore(0,11);
    dll.deleteNode(2);
    dll.searchNode(22);
    dll.display();


}
