//Toy Blocks

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,i,maxi=INT_MIN,posmax=-1,sum=0;
        cin>>n;
        lli a[n];

        for(i=0;i<n;i++){
            cin>>a[i];

            sum+=a[i];

            if(a[i]>maxi){
                maxi=a[i];
                posmax=i;
            }
        }
        if(sum%(n-1)==0)
            cout<<0<<"\n";
        else{
            float temp=ceil((float)sum/(n-1));

            int t=(int)temp;
//            cout<<"TEMP:"<<t<<"\n";
//            cout<<"SUM:"<<sum<<"\n";
            int ans=abs(t-maxi);

            cout<<ans<<"\n";
        }
    }

    return 0;

}
