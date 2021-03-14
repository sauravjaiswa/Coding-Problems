//Dungeon

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli mini,i,j,a,b,c,tot;
        cin>>a>>b>>c;
        tot=a+b+c;

        if(tot%9==0){
            mini=tot/9; //Minimum health should be there to satisfy the question's requirement
            if(a>=mini&&b>=mini&&c>=mini)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }else
            cout<<"NO\n";

    }
}
