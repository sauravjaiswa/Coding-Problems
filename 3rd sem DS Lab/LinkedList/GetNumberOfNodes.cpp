//Calculate total number of nodes in a tree.
#include<iostream>
using namespace std;

class Node
{
	public:
		Node *left,*right;
		int data;
		Node(int data)
		{
			this->left=NULL;
			this->right=NULL;
			this->data=data;
		}
};

int getNodesCount(Node* root) 
{ 
    if (root==NULL)  
        return 0;  
    else
        return(getNodesCount(root->left)+1+getNodesCount(root->right)); 
}

int main()
{
	int ch;
	Node *root=new Node(1); 
   	root->left=new Node(2); 
    root->right=new Node(3); 
    root->left->left=new Node(4); 
    root->left->right=new Node(5);  
	cout<<"Number of nodes in tree:"<<getNodesCount(root)<<"\n";
}
