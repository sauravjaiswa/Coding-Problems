//Cat Cycle

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;

    while(t--){
        lli n,k,mid;
        cin>>n>>k;
        k--;
        if(n%2==0){
            cout<<k%n+1<<"\n";
        }
        else{
            
            lli ans;
            mid=n/2;
            ans=((k/mid)+k)%n;
            cout<<ans+1<<"\n";
        }
    }

    return 0;
}
