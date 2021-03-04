//Maximum Width

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,m,i,maxi=0;
    string s,t;
    unordered_map<char,lli> mp;
    cin>>n>>m;
    cin>>s;
    cin>>t;

    for(i=0;i<n;i++){
        mp[s[i]]=i;
    }

    for(i=1;i<m;i++){
        lli diff;
        if(t[i]==t[i-1]){
            diff=mp[t[i]]-0;
        }else{
            diff=mp[t[i]]-mp[t[i-1]];
        }
        maxi=max(maxi,diff);
    }

    cout<<maxi<<"\n";

    return 0;
}
