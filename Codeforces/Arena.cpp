//Arena

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;
        lli i,a[n],mini=LONG_MAX;
        unordered_map<lli,lli> mp;

        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            mini=min(mini,a[i]);
        }

        cout<<n-mp[mini]<<"\n";
    }

    return 0;
}
