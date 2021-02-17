//Range Minimum query

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
        tree[i]=min(tree[2*i+1],tree[2*i+2]);
    }
}

void update(lli a[],lli n,lli *tree,lli i,lli s,lli e,lli index,lli val){
    //index represents index that needs to be updated
    //val is the value with which the index element would be updated

	if(s==e){
        a[index]=val;
        tree[i]=val;
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
        tree[i]=min(tree[2*i+1],tree[2*i+2]);
    }

}

lli query(lli a[],lli n,lli *tree,lli i,lli s,lli e,lli l,lli r){
    if(r<s||e<l){
        //Range lies completely outside the range
        return LONG_MAX;
    }
    if(l<=s&&e<=r){
        //Range lies completely inside the range
        return tree[i];
    }
    //Range represented by a node is partially inside and partially outside the given range
    lli mid=(s+e)/2;
    lli res1=query(a,n,tree,2*i+1,s,mid,l,r);
    lli res2=query(a,n,tree,2*i+2,mid+1,e,l,r);
    return min(res1,res2);
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,i,q,l,r;
	cin>>n>>q;
	lli a[n];

	for(i=0;i<n;i++)
		cin>>a[i];

	//Height of segment tree
    lli h=(lli)ceil(log2(n));
    //Max size of segment tree
    lli max_size=(lli)pow(2,h+1)-1;

    lli *tree=new lli[max_size];

	for(i=0;i<max_size;i++)
	tree[i]=LONG_MAX;

    build(a,n,tree,0,0,n-1);

	// for(i=0;i<max_size;i++)
	// cout<<tree[i]<<" ";
	// cout<<"\n";

	char ch;
	for(i=1;i<=q;i++){
		cin>>ch>>l>>r;

		if(ch=='q'){
			cout<<query(a,n,tree,0,0,n-1,l-1,r-1)<<"\n";
		}else{
			update(a,n,tree,0,0,n-1,l-1,r);
		}
	}


    return 0;
}
