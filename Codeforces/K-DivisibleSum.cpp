//K-divisible Sum

#include<bits/stdc++.h>
#define lli unsigned long long int
#define mod 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--){
        lli n,k,i,j,maxi;
        cin>>n>>k;

        lli temp=k;
        if(temp<n){
            lli a=n/k;
            lli b=n%k;
            if(b!=0)
                a++;
            temp=temp*a;
        }

        lli q1=temp/n;
        lli q2=temp%n;


        if(q2!=0)
            cout<<q1+1<<"\n";
        else
            cout<<q1<<"\n";

	}

	return 0;
}
