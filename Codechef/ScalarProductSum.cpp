//November 2020 Challenge
//Scalar Product Sum

#include<bits/stdc++.h>
#define lli unsigned long long int
#define MOD 4294967296
using namespace std;

lli computeMod(lli n){
    return (n&(MOD-1));
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,n,q,u,v,n1,n2,ans=0;
    cin>>n>>q;
    lli w[n],p[n+1];

    for(i=0;i<n;i++)
        cin>>w[i];

    p[0]=-1;
    p[1]=0;
    for(i=0;i<n-1;i++){
        cin>>u>>v;
        p[v]=u;
    }

    for(i=0;i<q;i++){
        cin>>n1>>n2;
        ans=0;

        while(n1!=0&&n2!=0){
            ans=computeMod(ans+computeMod(w[n1-1]*w[n2-1]));
            n1=p[n1];
            n2=p[n2];
        }
        cout<<ans<<"\n";
    }

}
