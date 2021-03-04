//Given an array, find a subarray which has the greatest sum.

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j,maxi,max_end;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    maxi=0;
    max_end=0;

    for(i=0;i<n;i++){
        max_end=max_end+a[i];

        if(maxi<max_end){
            maxi=max_end;
        }else{
            max_end=0;
        }
    }
    cout<<"Greatest sum subarray:"<<maxi<<"\n";
    return 0;
}
