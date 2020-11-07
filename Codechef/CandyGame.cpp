//November 2020 Challenge
//Candy Game

#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,i,j,q;
        cin>>n;
        int a[n],prefix[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];

        prefix[0]=0;
        for(i=1;i<n;i++){
            if(a[i-1]%2==0)
                prefix[i]=(prefix[i-1]+a[i-1])%MOD;
            else
                prefix[i]=(prefix[i-1]+(a[i-1]-1))%MOD;
        }
        if(a[n-1]%2==0)
            prefix[n]=(prefix[n-1]+(a[n-1]-1))%MOD;
        else
            prefix[n]=(prefix[n-1]+a[n-1])%MOD;

        /*for(i=0;i<=n;i++)
            cout<<prefix[i]<<" ";
        cout<<"\n";*/

        cin>>q;
        int r,ans=0;
        for(i=0;i<q;i++){
            ans=0;
            cin>>r;
            int times=r/n;
            int left=r%n;

            for(j=0;j<times;j++)
                ans=(ans+prefix[n])%MOD;

            if(left==0&&a[n-1]%2==0)
                ans=(ans+1)%MOD;
            else
                ans=(ans+prefix[left])%MOD;

            cout<<ans<<"\n";
        }

    }
}
