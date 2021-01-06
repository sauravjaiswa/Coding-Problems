//Fair Division

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n;
        cin>>n;
        lli a[n],one=0,two=0;

        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)
                one++;
            else
                two++;
        }
        lli sum=one+(two*2);
        lli f=0;
        if(sum%2==0){
            sum/=2;
            if(sum%2==0||(sum%2==1&&one!=0))
                f=1;
            else
                f=0;
        }else{
            f=0;
        }

        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
