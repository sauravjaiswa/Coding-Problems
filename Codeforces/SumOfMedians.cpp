//Sum of Medians

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,n,k,sum=0,j=0,skip=0;
        cin>>n>>k;
        lli a[n*k];

        for(i=0;i<n*k;i++)
            cin>>a[i];

        if(n<=2)
            skip=n;
        else
            skip=n-1;

        for(i=(n*k)-skip;i>=0;i=i-skip){
            if(j==k)
                break;
            //cout<<a[i]<<" + ";
            sum+=a[i];
            j++;
        }
        //cout<<" = ";

        cout<<sum<<"\n";
    }

    return 0;
}
