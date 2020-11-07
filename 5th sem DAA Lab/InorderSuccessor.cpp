//Inorder Successor Of Binary Tree

#include<bits/stdc++.h>
using namespace std;

class Node{
public:

    Node *left,*right,*parent;
    int data;

    Node(int data){
        this->left=this->right=this->parent=NULL;
        this->data=data;
    }
};

class Tree{
public:
    Node* insertNode(Node* node,int data)
    {
        if(node==NULL){
            Node* n=new Node(data);
            return n;
        }else {
            Node* temp=NULL;

            if(data<=node->data) {
                temp=insertNode(node->left,data);
                node->left=temp;
                temp->parent=node;
            }else {
                temp=insertNode(node->right,data);
                node->right=temp;
                temp->parent=node;
            }

            return node;
        }
    }

    Node* inOrderSuccessor(Node* root,Node* temp) {

        if(temp->right!=NULL)
            return minValue(temp->right);

        Node* p=temp->parent;
        while(p!=NULL && temp==p->right) {
            temp=p;
            p=p->parent;
        }
        return p;
    }

    Node* minValue(Node* node)
    {
        Node* current=node;

        while(current->left!=NULL) {
            current=current->left;
        }
        return current;
    }
};

int main() {
    Tree tree;
    Node *root=NULL,*temp=NULL,*suc=NULL,*minNode=NULL;
    root=tree.insertNode(root,20);
    root=tree.insertNode(root,8);
    root=tree.insertNode(root,22);
    root=tree.insertNode(root,4);
    root=tree.insertNode(root,12);
    root=tree.insertNode(root,10);
    root=tree.insertNode(root,14);

    temp=root->left->right->right;
    suc=tree.inOrderSuccessor(root,temp);
    if (suc!=NULL)
        cout<<"Inorder successor of "<<temp->data<<" is "<<suc->data;
    else
        cout<<"Inorder successor does not exist\n";
}
