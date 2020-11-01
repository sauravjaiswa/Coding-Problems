//MinMax Algorithm

#include<bits/stdc++.h>
#define p pair<int,int>
using namespace std;

p min_max(int a[],int l,int r){
    if(l==r)
        return {a[l],a[l]};
    if((r-1)==1)
        return {min(a[l],a[r]),max(a[l],a[r])};

    int mid=(l+r)/2;
    p x=min_max(a,l,mid);
    p y=min_max(a,mid+1,r);

    return {min(x.first,y.first),max(x.second,y.second)};
}

int main(){
    int n,i;
    cout<<"Enter length:\n";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    p result=min_max(a,0,n-1);
    cout<<result.first<<" "<<result.second;
}
