//Dense Array

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,n,cnt=0;
        cin>>n;
        lli a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n-1;i++){

            lli b=min(a[i],a[i+1]);
            lli c=max(a[i],a[i+1]);

            while((b*2)<c){
                b=b*2;
                cnt++;
            }
        }

        cout<<cnt<<"\n";
    }

    return 0;
}
