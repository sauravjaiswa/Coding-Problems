//Diagonal Traversal of Binary Tree

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* left;
    Node* right;
    int data;

    Node(int data){
        this->data=data;
        this->left=this->right=NULL;
    }
};

int mp[1000][1000]={0},x=500;
void getVerticalOrder(Node* root,int hd,map<int,vector<int>> &m){
    vector<int> v;
    if(root==NULL)
        return;

    if(!m.count(hd)){
        v.push_back(root->data);
        m[hd]=v;
        mp[x+hd]=root->data;
    }else if(l<m[hd].first){
        v.push_back(root->data);
        m[hd]=v;
        mp[x+hd]=root->data;
    }

    getVerticalOrder(root->left,hd-1,m);
    getVerticalOrder(root->right,hd+1,m);
}

void diagnolTraversal(Node* root){
    map<int,vector<int>> m;
    vector<int> v;
    if(root==NULL)
        return v;

    getVerticalOrder(root,0,m);

    int cnt=0,i,j;
    for(i=0;i<1000;i++){
        for(j=0;j<1000;j++){
            if(i==j)
                cout<<mp[i][j]<<" ";
        }
    }
}

int main(){
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    /*  Node* root = newNode(1);
        root->left = newNode(2);
        root->right = newNode(3);
        root->left->left = newNode(9);
        root->left->right = newNode(6);
        root->right->left = newNode(4);
        root->right->right = newNode(5);
        root->right->left->right = newNode(7);
        root->right->left->left = newNode(12);
        root->left->right->left = newNode(11);
        root->left->left->right = newNode(10);*/

    diagonalTraversalroot);

    return 0;
}
