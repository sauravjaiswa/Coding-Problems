//Subtract Or Divide

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int lcs(string s1,string s2,int m,int n)
{
	if(m==0||n==0)
		return 0;
	if (s1[m-1]==s2[n-1])
		return 1+lcs(s1,s2,m-1,n-1);
	else
		return max(lcs(s1,s2,m,n-1),lcs(s1,s2,m-1,n));
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

                if(lcs(ns,refer,ns.length(),refer.length())==refer.length()){
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
