//Binary Search Tree

//Inorder traversal of binary search tree will always generate the sequence in increasing order.
#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *left,*right;
		Node(int data)
		{
			this->data=data;
			this->left=this->right=NULL;
		}
};

void inorder(Node *root) 
{ 
    if(root!=NULL) 
    { 
        inorder(root->left); 
        cout<<root->data<<"\n";
        inorder(root->right); 
    } 
}

Node* insert(Node *root,int val)
{
	if(root==NULL)
	{
		Node *newnode=new Node(val);
		return newnode;	
	}
	if(root->data>val)
	root->left=insert(root->left,val);
	else if(root->data<val)
	root->right=insert(root->right,val);
	return root;
}

int main()
{
	int a[]={55,75,68,10,12,18};
	int i;
	Node *root=NULL;
	root=insert(root,a[0]);
	for(i=1;i<6;i++)
	insert(root,a[i]);
	
	cout<<"The Binary Seacrch Tree formation is:\n";
	inorder(root);
}
