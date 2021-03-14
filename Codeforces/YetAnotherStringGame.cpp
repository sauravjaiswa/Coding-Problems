//Yet Another String Game

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,n;
        string s,ns="";
        cin>>s;

        n=s.length();

        for(i=0;i<n;i++){
            if(i%2==0){
                if(s[i]>'a'){
                    ns=ns+'a';
                }else{
                    ns=ns+'b';
                }
            }else{
                if(s[i]<'z'){
                    ns=ns+'z';
                }else{
                    ns=ns+'y';
                }
            }
        }

        cout<<ns<<"\n";

    }

    return 0;
}
