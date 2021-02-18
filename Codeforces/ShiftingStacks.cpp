//Shifting Stacks

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        lli n,i,s=0,f=0;
        cin>>n;
        lli a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n-1;i++){
            if(a[i]>i){
                a[i+1]=a[i+1]+(a[i]-i);
                a[i]=i;
            }

            if(a[i]>=a[i+1]){
                f=1;
                break;
            }
        }

        if(f==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
