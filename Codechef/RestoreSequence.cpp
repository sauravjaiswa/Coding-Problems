//November 2020 Challenge
//Restore Sequence

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>b[i];
        }

        int start=n*2;
        for(i=0;i<n;i++){
            if(b[i]==i+1){
                a[i]=start;
                start-=2;
            }
        }

        for(i=0;i<n;i++){
            if(b[i]!=i+1)
                a[i]=a[b[i]-1];
        }

        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}
