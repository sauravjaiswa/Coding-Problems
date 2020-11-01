//Height of tree
#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	Node *left,*right;
	int data;
	Node(int data)
	{
		left=NULL;
		right=NULL;
		this->data=data;
	}
};

int height(Node *root)
{
	if(root==NULL)
	return 0;
	else
	return 1+(height(root->left)>height(root->right)?height(root->left):height(root->right));
}

int main()
{
	Node *root=new Node(1); 
    root->left=new Node(2); 
    root->right=new Node(3); 
    root->left->left=new Node(4); 
    root->left->right=new Node(5);  
	cout<<"Height of tree:"<<height(root)<<"\n";
}
