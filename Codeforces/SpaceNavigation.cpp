//Space Navigation

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli x,y,i,l,r,u,d,signx,signy;
        cin>>x>>y;
        string s;
        cin>>s;
        l=r=u=d=0;

        if(x<0)
            signx=-1;
        else
            signx=1;

        if(y<0)
            signy=-1;
        else
            signy=1;

        for(i=0;i<s.length();i++){
            if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
            else if(s[i]=='U')
                u++;
            else
                d++;
        }

        lli f=0;
        if(signx==-1){
            if(-x<=l)
                f++;
        }else{
            if(x<=r)
                f++;
        }

        if(signy==-1){
            if(-y<=d)
                f++;
        }else{
            if(y<=u)
                f++;
        }

        if(f==2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
