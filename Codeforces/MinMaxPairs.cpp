//MinMax using Pairs

#include<bits/stdc++.h>
#define p pair<int,int>
using namespace std;

p min_max(int a[],int n){

    p minMax;
    int i;

    if(n%2!=0){
        minMax.first=minMax.second=a[0];
        i=1;
    }else{
        if(a[0]>a[1]){
            minMax.first=a[0];
            minMax.second=a[1];
        }else{
            minMax.first=a[1];
            minMax.second=a[0];
        }
        i=2;
    }

    for(;i<n-1;i+=2){
        if(a[i]>a[i+1])
        {
          if(a[i]>minMax.first)
            minMax.first=a[i];
          if(a[i+1]<minMax.second)
            minMax.second=a[i+1];
        }else
        {
          if(a[i+1]>minMax.first)
            minMax.first=a[i+1];
          if(a[i]<minMax.second)
            minMax.second=a[i];
        }
    }

    return minMax;
}

int main(){
    int n,i;
    cout<<"Enter length:\n";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    p result=min_max(a,n);
    cout<<result.first<<" "<<result.second;
}
