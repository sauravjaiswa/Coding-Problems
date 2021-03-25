//Meximization

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli n,i,a;
        cin>>n;
        map<lli,lli> mp;
        for(i=0;i<n;i++){
            cin>>a;
            mp[a]++;
        }

        for(auto it:mp){
            cout<<it.first<<" ";
            mp[it.first]--;
        }

        for(auto it:mp){
            for(i=0;i<it.second;i++){
                cout<<it.first<<" ";
            }
        }
        cout<<"\n";

    }

    return 0;
}
