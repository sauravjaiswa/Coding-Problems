//Ball in Berland

#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--){
        lli a,b,k,i,j;
        cin>>a>>b>>k;
        lli m[k],f[k];
        //To count the degree of each vertices of male and female respectively
        unordered_map<int,int> mf,ff;

        for(i=0;i<k;i++){
            cin>>m[i];
            mf[m[i]]++;
        }
        for(i=0;i<k;i++){
            cin>>f[i];
            ff[f[i]]++;
        }

        lli sum=0;
        for(i=0;i<k;i++){
            sum=sum+((k-1)-(mf[m[i]]-1)-(ff[f[i]]-1));
        }

        cout<<sum/2<<"\n";
	}

	return 0;
}
