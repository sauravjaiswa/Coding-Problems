//New Colony

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,j,n,k,f=0;
        cin>>n>>k;
        lli h[n];
        for(i=0;i<n;i++)
            cin>>h[i];

        for(j=0;j<n-1;j++){
            if(h[j]<h[j+1]){
                h[j]=h[j]+(h[j+1]-h[j]);
                k=k-(h[j+1]-h[j]);
            }
            if(j>0&&h[j]>h[j-1]){
                j--;
            }

            if(k<=0){
                f=1;
                break;
            }
        }

        if(f==1){
            cout<<"-1\n";
        }else{
            cout<<j+1<<"\n";
        }
    }

    return 0;
}
