//Array Rearrangment

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,n,x,flag=0;
        cin>>n>>x;
        lli a[n],b[n];

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }

        sort(a,a+n,greater<lli>());
        sort(b,b+n);

        for(i=0;i<n;i++){
            if((a[i]+b[i])>x){
                flag=1;
                break;
            }
        }

        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}
