//Maximise Function

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
        lli a[n],maxi=INT_MIN,temp=0;

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        maxi=abs(a[0]-a[1])+abs(a[1]-a[n-1])+abs(a[0]-a[n-1]);


        // for(i=0;i<n-2;i++){
        //     temp=abs(a[i]-a[i+1])+abs(a[i+1]-a[i+2])+abs(a[i]-a[i+2]);
        //     maxi=max(maxi,temp);
        // }
        cout<<maxi<<"\n";
    }
    return 0;
}
