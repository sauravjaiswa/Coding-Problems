//Create a mirror tree from the given binary tree

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* createNode(int val)
{
    Node* newNode=new Node(val);
    return newNode;
}

void inorder(Node* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void mirror(Node* root){
    if(root==NULL)
        return;

    mirror(root->left);
    Node* temp=(root->left!=NULL)?root->left:NULL;
    root->left=(root->right!=NULL)?root->right:NULL;
    root->right=temp;
    mirror(root->right);
}

int main(){
    Node* tree = createNode(5);
    tree->left = createNode(3);
    tree->right = createNode(6);
    tree->left->left = createNode(2);
    tree->left->right = createNode(4);

    // Print inorder traversal of the input tree
    printf("Inorder of original tree: ");
    inorder(tree);

    mirror(tree);

    // Print inorder traversal of the mirror tree
    printf("\nInorder of mirror tree: ");
    inorder(tree);

    return 0;
}
