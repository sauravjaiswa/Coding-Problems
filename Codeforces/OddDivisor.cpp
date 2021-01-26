//Odd Divisor

#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--){
        lli n;
        cin>>n;
        lli p=log2(n);
        lli temp=pow(2,p);

        if(temp!=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}

	return 0;
}
