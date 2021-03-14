//01 Game

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        string s;
        cin>>s;
        lli i,cnt=0;

        for(i=0;i<s.length()-1;i++){
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
                i++;
                cnt++;
        }

        if(cnt%2==0)
            cout<<"NET\n";
        else
            cout<<"DA\n";


    }
}
