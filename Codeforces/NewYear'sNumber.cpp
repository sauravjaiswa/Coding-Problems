//New Year's Number

#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--){
        lli n,cpy,a,b;
        cin>>n;
        cpy=n;
        b=n%2020;
        cpy=cpy-(b*2021);
        a=cpy/2020;

        //cout<<"ANS:"<<((a*2020)+(b*2021))<<"\n";
        if(((a*2020)+(b*2021))==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}

	return 0;
}
