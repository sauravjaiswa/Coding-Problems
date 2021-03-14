//Elimination

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli a,b,c,d,ans;
        cin>>a>>b>>c>>d;

        ans=max(a+b,c+d);

        cout<<ans<<"\n";
    }

    return 0;
}
