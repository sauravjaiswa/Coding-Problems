//Non String Subsequence

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int lcs(string s1,string s2)
{
    int i,j,m,n;
    m=s1.length();
    n=s2.length();
    int t[m+1][n+1];


    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
                t[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[m][n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,i,q,l,r,c0,c1,j;
        string s,ns,refer;
        cin>>n>>q;
        cin>>s;

        lli f=0;
        for(i=0;i<q;i++){
            cin>>l>>r;
            f=0;
            refer="";

            for(j=l-1;j<=r-1;j++)
                refer+=s[j];

            for(j=l-1;j<=r-1;j++){
                ns=s;
                ns[j]='X';

                if(lcs(ns,refer)==refer.length()){
                    f=1;
                    break;
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
