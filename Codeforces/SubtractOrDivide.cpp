//Subtract Or Divide

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,i,ans;
        cin>>n;

        if(n==1)
            ans=0;
        else if(n==2)
            ans=1;
        else if(n==3)
            ans=2;
        else{
            if(n%2==0)
                ans=2;
            else
                ans=3;
        }
        cout<<ans<<"\n";
    }

    return 0;

}
