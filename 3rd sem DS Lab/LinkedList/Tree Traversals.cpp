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

/*Node* insert(Node* root) 
{
	int data,ch;
	do
	{
		cout<<"Enter data:";
		cin>>data;
		if(root == NULL)
		root=new Node(data);
		else
		{
		    Node* cur;
		    
				if(data <= root->data) 
				{
			        cur = insert(root->left);
			        root->left = cur;
			    } 
				else 
				{
			        cur = insert(root->right);
			        root->right = cur;
			    }	
				
		}
	cout<<"Enter 1 to continue:";
	cin>>ch;
	}while(ch==1);
	return root;
}	*/

void inorder(Node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(Node *root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int height(Node *root)
{
	if(root==NULL)
	return 0;
	else
	return 1+(height(root->left)>height(root->right)?height(root->left):height(root->right));
}

int main()
{
	int ch;/*
	Node *root=NULL;
	root=insert(root);*/
	Node *root=new Node(1); 
    root->left=new Node(2); 
    root->right=new Node(3); 
    root->left->left=new Node(4); 
    root->left->right=new Node(5);  
	cout<<"1.PreOrder Traversal\n2.InOrder Traversal\n3.PostOrder Traversal\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			 cout << "\nPreorder traversal of binary tree is \n";
			preorder(root);
			break;
			case 2:
				 cout << "\nInorder traversal of binary tree is \n";
				inorder(root);
				break;
				case 3:
					 cout << "\nPostorder traversal of binary tree is \n";
					postorder(root);
					break;
					default:
						cout<<"Invalid Choice!!\n";
	}
	cout<<"Height of tree:"<<height(root)<<"\n";
}
