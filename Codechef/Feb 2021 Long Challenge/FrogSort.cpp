//Frog Sort

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
        lli w[n],l[n],pos[n+1],steps[n+1],cnt=0;

        pos[0]=-1;
        for(i=0;i<n;i++){
            cin>>w[i];
            pos[w[i]]=i;
        }

        for(i=0;i<n;i++){
            cin>>l[i];
            steps[w[i]]=l[i];
        }

        for(i=1;i<=n;i++){
            while(pos[i]<=pos[i-1]){
                pos[i]=pos[i]+steps[i];
                cnt++;
            }
        }
        //cout<<"POS:\n";
        //for(i=0;i<=n;i++)
        //    cout<<pos[i]<<" ";
        //cout<<"\n";

        cout<<cnt<<"\n";
    }
    return 0;
}
