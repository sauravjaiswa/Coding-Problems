//String LCM

#include<bits/stdc++.h>
using namespace std;

int gcd(int m,int n){
    if(n==0)
        return m;
    return gcd(n,m%n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,m,n,f=0;
        string s1,s2,tmp;
        cin>>s1;
        cin>>s2;
        m=s1.length();
        n=s2.length();

        int l,t;
        if(m<n){
            tmp=s1;
            s1=s2;
            s2=tmp;

            t=m;
            m=n;
            n=t;
        }
        int lcm=(m*n)/gcd(m,n);
        string ns1="",ns2="";
        for(i=0;i<lcm;i++){
            ns1+=s1[i%m];
            ns2+=s2[i%n];
        }
        if(ns1==ns2)
            cout<<ns1<<"\n";
        else
            cout<<"-1\n";
    }
}
