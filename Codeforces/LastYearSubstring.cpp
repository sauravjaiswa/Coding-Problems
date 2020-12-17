//Last Year's Substring

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli t;
    cin>>t;

    while(t--){
        lli n,i,j;
        cin>>n;
        string txt,p;
        cin>>txt;
        p="2020";

        string temp="";
        if(txt.substr(0,4)=="2020")
            cout<<"YES\n";
        else if(txt.substr(n-4,n)=="2020")
            cout<<"YES\n";
        else if(txt[0]=='2'&&txt.substr(n-3,n)=="020")
            cout<<"YES\n";
        else if(txt.substr(0,3)=="202"&&txt[n-1]=='0')
            cout<<"YES\n";
        else if(txt.substr(0,2)=="20"&&txt.substr(n-2,n)=="20")
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}
