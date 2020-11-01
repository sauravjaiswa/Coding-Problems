//Insertion, deletion and searching operations on doubly link list

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

class DoublyLinkedList{
public:
    Node *head=NULL;

    void insertEnd(int val){
        Node *temp,*newNode;
        temp=head;
        newNode=new Node(val);

        if(head==NULL){
            head=newNode;
            temp=head;
            head->next=NULL;
            head->prev=NULL;
        }else{
            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=newNode;
            newNode->prev=temp;
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

        while(cnt!=pos&&temp->next!=NULL){
            cnt++;
            temp=temp->next;
        }

        if(temp->next==NULL){
            temp->next=newNode;
            newNode->prev=temp;
            newNode->next=NULL;
        }else{
            newNode->next=temp->next;
            newNode->prev=temp;
            temp->next=newNode;
            newNode->next->prev=newNode;
        }
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
            newNode->prev=NULL;
            head->prev=newNode;
            head=newNode;
            return;
        }

        while(cnt!=pos-1){
            cnt++;
            temp=temp->next;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next=newNode;
        newNode->next->prev=newNode;

    }

    int deleteNode(int val){
        Node *temp=head;

        if(temp->data==val){
            head=temp->next;
            return 1;
        }

        while(temp!=NULL){
            if(val==temp->next->data){
                temp->next=temp->next->next;
                temp->next->prev=temp;
                return 1;
            }
            temp=temp->next;
        }
        return 0;
    }

    int searchNode(int val){
        int cnt=0;
        Node *temp=head;

        while(temp!=NULL){
            cnt++;
            if(temp->data==val){
                cout<<"The searched element "<<val<<" is at "<<cnt<<" position\n";
                return 1;
            }
            temp=temp->next;
        }
        return 0;
    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};

int main(){
    DoublyLinkedList dll;

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
