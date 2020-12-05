//Cancel the Trains

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        int n,m,i;
        cin>>n>>m;
        int a[n],b[m],cnt=0;

        unordered_map<int,int> mp;

        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        for(i=0;i<m;i++){
            cin>>b[i];
            if(mp[b[i]]==0)
                mp[b[i]]++;
            else
                cnt++;
        }

        cout<<cnt<<"\n";
	}
}
