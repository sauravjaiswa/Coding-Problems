//Nezzar and Lucky Number

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
        lli q,d,k,i,j,ans,f=0;
        cin>>q>>d;
        lli a[q];

        for(i=0;i<q;i++){
            cin>>a[i];
        }

        for(i=0;i<q;i++){
            ans=0;
            f=0;

            for(j=d;j<=a[i];j+=d){
                int temp=(a[i]-j);
                while(temp%10==0){
                    int tt=temp%10;
                    temp=temp/10;
                    if(tt==d){
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
