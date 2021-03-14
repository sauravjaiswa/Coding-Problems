//Anti-knapsack

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,k,i;
        unordered_map<lli,lli> mp;
        vector<lli> res;
        cin>>n>>k;

        for(i=n;i>=1;i--){
            if(i!=k&&mp[k-i]==0){
                res.push_back(i);
                mp[i]++;
            }
        }

        cout<<res.size()<<"\n";
        for(i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<"\n";
    }

    return 0;
}
