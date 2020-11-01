//Distance and Axis

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli n,k,diff;

        cin>>n>>k;
        diff=k-n;
        if(diff<0){
            diff=abs(diff);
            if(diff%2==0)
                cout<<0<<"\n";
            else
                cout<<1<<"\n";
        }else
            cout<<abs(diff)<<"\n";
    }
}
