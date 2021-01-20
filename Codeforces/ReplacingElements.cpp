//Replacing Elements

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,d,f=0;
        cin>>n>>d;
        int a[n],cnt=0,cnt1=0,cnt2=0;

        for(i=0;i<n;i++){
            cin>>a[i];

            if(a[i]<=d)
                cnt++;
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j){
                    if((a[i]+a[j])<=d){
                        f=1;
                        break;
                    }
                }
            }
        }
        if(cnt==n)
            f=1;

        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
