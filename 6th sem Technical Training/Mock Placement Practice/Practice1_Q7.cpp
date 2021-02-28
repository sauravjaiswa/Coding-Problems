/*Given a linked list, which is sorted in ascending order, but, contains a sublist which is reversed. Write a program to correct the order of the elements of the sublist.
Test Case 1:
1 2 3 4 8 7 6 5 9 10
After correcting
1 2 3 4 5 6 7 8 9 10

Test Case 2:
Before correcting
1
Only one node in the list
After correcting
1

Test Case 3:
Before correcting
1 2 3 10 9 8 7 6 5 4
After correcting
1 2 3 4 5 6 7 8 9 10*/

#include<bits/stdc++.h>
#define lli long long int
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

void insertEle(int val)
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

void create(int n)
{
	int val,ch;
	cout<<"Enter values in the list:\n";
	do
	{
		cin>>val;
		insertEle(val);
		cnt++;
	}while(cnt<n);
	temp->next=NULL;
}

Node* reverseList(lli i,lli j)
{
    Node *s,*s_prev,*e,*e_next,*curr;
    s=s_prev=e=e_next= NULL;
    lli cnt;

	if(i==j)
        return head;

    curr=head;
    cnt=1;
    while(curr!=NULL && cnt<=j) {
        if(cnt<i)
            s_prev=curr;

        if(cnt==i)
            s=curr;

        if(cnt==j) {
            e=curr;
            e_next=curr->next;
        }

        curr=curr->next;
        cnt++;
    }
    e->next=NULL;

    Node *prev=NULL;
    curr=s;
    while(curr!=NULL) {
        Node* nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    e=prev;

    if(s_prev!=NULL)
        s_prev->next=e;
    else
        head=e;

    s->next=e_next;
    return head;
}

pair<lli,lli> findIndex(lli n){
    Node *ptr=head,*start=NULL;
    lli cnt=0,i=0,j=n-1;
	while(ptr->next!=NULL)
	{
		if(ptr->data>ptr->next->data){
            i=cnt;
            start=ptr;
            break;
        }
        ptr=ptr->next;
        cnt++;
	}

	cnt=i;
	ptr=start;
	while(ptr->next!=NULL){
        if(ptr->data<ptr->next->data){
            j=cnt;
            break;
        }
        ptr=ptr->next;
        cnt++;
	}

	return {i,j};
}

bool isAscending(){
    Node *ptr=head;
    while(ptr->next!=NULL){
        if(ptr->data>ptr->next->data)
            return false;

        ptr=ptr->next;
    }
    return true;
}

void print(){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"\n";
}


int main(){

    char ch;
    do{
        head=temp=NULL;
        cnt=0;
        int n,i,j,s,e;
        s=0;
        e=n-1;
        cout<<"Enter size of array:\n";
        cin>>n;
        lli a[n];
        vector<lli> res;
        create(n);

        cout<<"Before correcting:\n";
        print();
        cout<<"\n";

        if(isAscending()){
            cout<<"After correcting:\n";
            print();
            cout<<"\n";
        }else{

            pair<lli,lli> p=findIndex(n);

            cout<<"After correcting:\n";
            //cout<<p.first<<" "<<p.second<<"\n";

            head=reverseList(p.first+1,p.second+1);
            print();
            cout<<"\n";
        }

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
