//Segment Tree
//Range-Sum Query

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void build(lli a[],lli n,lli *tree,lli i,lli s,lli e){
    //i represents index
    //s represents start
    //e represents end

    if(s==e){
        //Leaf node will have a single element
        tree[i]=a[s];
    }else{
        lli mid=(s+e)/2;
        //Recursively build left subtree
        build(a,n,tree,2*i+1,s,mid);
        //Recursively build right subtree
        build(a,n,tree,2*i+2,mid+1,e);
        // Internal node will have the sum of both of its children
        tree[i]=tree[2*i+1]+tree[2*i+2];
    }
}

void update(lli a[],lli n,lli *tree,lli i,lli s,lli e,lli index,lli val){
    //index represents index that needs to be updated
    //val is the value with which the index element would be updated
    if(s==e){
        lli diff=val-a[index];
        a[index]+=diff;
        tree[i]+=diff;
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
        tree[i]=tree[2*i+1]+tree[2*i+2];
    }
}

lli query(lli a[],lli n,lli *tree,lli i,lli s,lli e,lli l,lli r){
    if(r<s||e<l){
        //Range lies completely outside the range
        return 0;
    }
    if(l<=s&&e<=r){
        //Range lies completely inside the range
        return tree[i];
    }
    //Range represented by a node is partially inside and partially outside the given range
    lli mid=(s+e)/2;
    lli res1=query(a,n,tree,2*i+1,s,mid,l,r);
    lli res2=query(a,n,tree,2*i+2,mid+1,e,l,r);
    return (res1+res2);
}

int main(){

    lli n,i,q;

    lli a[] = {1, 3, 5, 7, 9, 11, 21};
    n = sizeof(a)/sizeof(a[0]);

    //Height of segment tree
    lli h=(lli)ceil(log2(n));
    //Max size of segment tree
    lli max_size=(lli)pow(2,h+1)-1;

    lli *tree=new lli[max_size];

    build(a,n,tree,0,0,n-1);
    cout<<"Query range 1 to 3:\n";
    cout<<query(a,n,tree,0,0,n-1,1,3)<<"\n";
    cout<<"Query range 2 to 5:\n";
    cout<<query(a,n,tree,0,0,n-1,2,5)<<"\n";

    cout<<"Updated at position 2 with value 10\n";
    update(a,n,tree,0,0,n-1,2,10);
    cout<<"Query range 1 to 3:\n";
    cout<<query(a,n,tree,0,0,n-1,1,3)<<"\n";


    return 0;
}
