//BFS and DFS

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left,*right;

    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

class Tree{

public:

    void BFS(Node *root){
        if(root==NULL)
            return;

        Node *vertex;
        queue<Node *> q;
        q.push(root);

        while(!q.empty()){
            vertex=q.front();
            q.pop();

            cout<<vertex->data<<" ";

            if(vertex->left)
                q.push(vertex->left);
            if(vertex->right)
                q.push(vertex->right);
        }
    }

    void DFS(Node *root){
        cout<<"Preorder:\n";
        preorder(root);
        cout<<"\n";
        cout<<"Inorder:\n";
        inorder(root);
        cout<<"\n";
        cout<<"Postorder:\n";
        postorder(root);
    }

    void preorder(Node *root){
        if(root==NULL)
            return;

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node *root){
        if(root==NULL)
            return;

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }

    void postorder(Node *root){
        if(root==NULL)
            return;

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

};

int main(){
    Tree t;

    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"The BFS of the tree is:\n";
    t.BFS(root);
    cout<<"\n";
    cout<<"The DFS of the tree are:\n";
    t.DFS(root);
    cout<<"\n";
}
