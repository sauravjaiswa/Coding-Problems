//Largest sum contiguous subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(arr)/sizeof(int);

    int max_curr=INT_MIN,max_end=0,i,j;

    for(i=0;i<n;i++){
        max_end+=arr[i];

        if(max_end<0)
            max_end=0;
        else if(max_end>max_curr)
            max_curr=max_end;
    }
    cout<<max_curr<<"\n";
}
