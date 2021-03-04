//Find a subarray with minimum product of size k in a given array

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j;
    cin>>n;
    int a[n],k;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;

    if(k>n)
        cout<<"INVALID\n";
    else{

        int prod=1,mini=INT_MAX;

        i=0;
        for(j=0;j<n;j++){
            prod=prod*a[j];
            if(j-i+1==k){
                mini=min(mini,prod);
                prod/=a[i];
                i++;
            }
        }
        cout<<"Min product subarray:"<<mini<<"\n";

    }
    return 0;
}
