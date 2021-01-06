//Cards for Friends

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,w,h,n,cnt=1;
        cin>>w>>h>>n;

        while(w%2==0){
            w=w/2;
            cnt*=2;
        }
        while(h%2==0){
            h=h/2;
            cnt*=2;
        }

        if(cnt>=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
