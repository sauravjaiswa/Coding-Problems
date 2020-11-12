//Building a BST and checking whether it is balanced or not.

#include<bits/stdc++.h>
using namespace std;

class Tree{
public:
    int data;
    Tree *left,*right;

    Tree(int data){
        this->data=data;
        this->left=this->right=NULL;
    }

    Tree* insertNode(Tree *root,int data){
        if(root==NULL)
            return new Tree(data);

        if(data<=root->data)
            return insertNode(root->left,data);
        else
            return insertNode(root->right,data);
    }

    bool checkBalancedTree(Tree *root,int &ht){
        int lh,rh;
        bool lFlag,rFlag;
        lh=rh=0;
        lFlag=rFlag=false;

        if(root==NULL){
            ht=0;
            return true;
        }

        lFlag=checkBalancedTree(root->left,lh);
        rFlag=checkBalancedTree(root->right,rh);

//        ht=(lh>rh?lh:rh)+1;
        if(lh>rh)
            ht=lh+1;
        else
            ht=rh+1;

        if(abs(lh-rh)>1)
            return false;
        else
            return lFlag&&rFlag;

    }
};

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,i;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        Tree *root=NULL;
        Tree t(-1);
        root=t.insertNode(root,a[0]);

        for(i=1;i<n;i++)
            t.insertNode(root,a[i]);

        int ht=0;
        if(t.checkBalancedTree(root,ht))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
