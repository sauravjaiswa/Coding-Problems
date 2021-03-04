//Minimal Cost

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,j,n,u,v;
        cin>>n>>u>>v;
        lli pos[n],ans=LONG_MAX;

        for(i=0;i<n;i++){
            cin>>pos[i];
        }

        for(i=1;i<n;i++){
            if(abs(pos[i]-pos[i-1])>1)
                ans=0;
            if(abs(pos[i]-pos[i-1])==1)
                ans=min(ans,min(u,v));
            if(pos[i]==pos[i-1]){
                ans=min(ans,v+min(u,v));
            }
        }
        cout<<ans<<"\n";

    }

    return 0;
}
