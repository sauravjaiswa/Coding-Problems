//Regular Bracket Sequence

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n;
        string str;
        cin>>str;
        n=str.length();
        if(n%2==0&&str[0]!=')'&&str[n-1]!='(')
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
