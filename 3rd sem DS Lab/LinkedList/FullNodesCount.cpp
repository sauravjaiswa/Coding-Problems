//Count Full Nodes
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

int getFullNodes(Node* root) 
{ 
    if(root==NULL)      
        return 0;  
    if(root->left&&root->right)  
        return 1+getFullNodes(root->left)+getFullNodes(root->right);
}

int main()
{
	int ch;
	Node *root=new Node(1); 
   	root->left=new Node(2);
    root->right=new Node(3); 
    root->left->left=new Node(4); 
    root->left->right=new Node(5);  
	root->right->left=new Node(6);
	cout<<"Number of full nodes in tree:"<<getFullNodes(root)<<"\n";
}
