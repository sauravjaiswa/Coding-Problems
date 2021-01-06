//Long Jumps

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n;
        cin>>n;
        lli a[n];

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        lli maxi=INT_MIN,sum[n];
        sum[n-1]=a[n-1];
        for(i=n-2;i>=0;i--){
            if(i+a[i]<n)
                sum[i]=a[i]+sum[i+a[i]];
            else
                sum[i]=a[i];
        }
        cout<<*max_element(sum,sum+n)<<"\n";
    }
}
