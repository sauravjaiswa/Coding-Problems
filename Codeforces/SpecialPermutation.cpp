//Special Permutation

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,i;
        cin>>n;
        lli a[n+1];

        for(i=n;i>=1;i--){
            a[i]=i;
        }

            if(n%2!=0){
                lli mid=(int)ceil((float)n/2);
                lli temp=a[mid];
                a[mid]=a[mid-1];
                a[mid-1]=temp;
            }


        for(i=n;i>=1;i--){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }

    return 0;

}
