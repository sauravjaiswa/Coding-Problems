//Favourite Sequence

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
        lli a[n];
        vector<lli> res;

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n/2;i++){
            res.push_back(a[i]);
            res.push_back(a[n-i-1]);
        }
        if(n%2!=0)
            res.push_back(a[n/2]);
        for(i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
