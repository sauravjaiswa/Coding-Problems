//Xenia and Bit Operations

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

struct Node{
    lli level;
    lli val;
};

void build(lli a[],lli n,Node *tree,lli i,lli s,lli e){
    //i represents index
    //s represents start
    //e represents end

    if(s==e){
        //Leaf node will have a single element
        tree[i].val=a[s];
        tree[i].level=1;
        return;
    }else{
        lli mid=(s+e)/2;
        //Recursively build left subtree
        build(a,n,tree,2*i+1,s,mid);
        //Recursively build right subtree
        build(a,n,tree,2*i+2,mid+1,e);

        tree[i].level=tree[2*i+1].level+1;
        // Internal node will have the sum of both of its children
        if((tree[i].level%2)!=0){
            tree[i].val=tree[2*i+1].val^tree[2*i+2].val;
        }else{
            tree[i].val=tree[2*i+1].val|tree[2*i+2].val;
        }
    }
}

void update(lli a[],lli n,Node *tree,lli i,lli s,lli e,lli index,lli val){
    //index represents index that needs to be updated
    //val is the value with which the index element would be updated

	if(s==e){
        a[index]=val;
        tree[i].val=val;
    }else{
        lli mid=(s+e)/2;
        //If index lies in the left child
        if(s<=index&&index<=mid){
            update(a,n,tree,2*i+1,s,mid,index,val);
        }else{
            //If index lies in the right child
            update(a,n,tree,2*i+2,mid+1,e,index,val);
        }
        // Internal node will have the sum of both of its children
        if((tree[i].level%2)!=0){
            tree[i].val=tree[2*i+1].val^tree[2*i+2].val;
        }else{
            tree[i].val=tree[2*i+1].val|tree[2*i+2].val;
        }
    }

}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,i,m,p,b;
	cin>>n>>m;
    n=pow(2,n);
	lli a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	//Height of segment tree
    lli h=(lli)ceil(log2(n));
    //Max size of segment tree
    lli max_size=(lli)pow(2,h+1)-1;

    Node *tree=new Node[max_size];

    build(a,n,tree,0,0,n-1);

	char ch;
	for(i=1;i<=m;i++){
		cin>>p>>b;
		update(a,n,tree,0,0,n-1,p-1,b);
		cout<<tree[0].val<<"\n";
	}


    return 0;
}
