//Count leaf nodes
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

int getLeafCount(Node* root) 
{ 
    if(root==NULL)      
        return 0;  
    if(root->left==NULL&&root->right==NULL)  
        return 1;          
    else
        return getLeafCount(root->left)+getLeafCount(root->right);
}

int main()
{
	int ch;
	Node *root=new Node(1); 
   	root->left=new Node(2);
    root->right=new Node(3); 
    root->left->left=new Node(4); 
    root->left->right=new Node(5);  
	cout<<"Number of leaf nodes in tree:"<<getLeafCount(root)<<"\n";
}
