//Close Tuples (easy version)

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n,ans=0;
        cin>>n;
        vector<lli> v(n);

        for(i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        for(i=0;i<n;i++){
            lli t1=v[i];
            lli t2=v[i]+2;

            lli pos=upper_bound(v.begin(),v.end(),t2)-v.begin();
            pos=pos-1;

            //if(pos>i)
                ans=ans+(((pos-i-1)*(pos-i))/2);
        }

        cout<<ans<<"\n";
    }
}
