//Nezzar and Board

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
        lli n,k,i,j,f=0;
        cin>>n>>k;
        lli a[n];

        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k)
                f=1;
        }

        if(f==1){
            cout<<"YES\n";
        }else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    lli temp=(2*a[i])-a[j];
                    if(temp==k){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

	}

	return 0;
}
