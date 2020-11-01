//Count Non-Leaf Nodes
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
    if(root->left||root->right)  
        return 1+getLeafCount(root->left)+getLeafCount(root->right);
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
	cout<<"Number of non-leaf nodes in tree:"<<getLeafCount(root)<<"\n";
}
