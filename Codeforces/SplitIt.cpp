//Split it!

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool isPalin(string s,lli k){
    lli i,cnt=0;
    lli n=s.length();

    for(i=0;i<k;i++){
        if(s[i]!=s[n-i-1])
            return false;
    }

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,j,n,k;
        string s;
        cin>>n>>k;
        cin>>s;

        if(n<=2*k)
            cout<<"NO\n";
        else{
            if(k==0||isPalin(s,k))
                cout<<"YES\n";
            else{
                cout<<"NO\n";
            }
        }
    }

    return 0;
}
