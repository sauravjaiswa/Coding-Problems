//Nezzar and Colorful Balls

#include<bits/stdc++.h>
#define lli unsigned long long int
#define mod 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--){
        lli n,k,i,j,maxi=0;
        cin>>n;
        lli a[n];
        unordered_map<lli,lli> mp;

        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        for(auto it:mp){
            if(it.second>maxi)
                maxi=it.second;
        }

        cout<<maxi<<"\n";
	}

	return 0;
}
