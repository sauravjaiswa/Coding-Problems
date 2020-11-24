//Unique Bid Auction

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
        lli a[n];

        map<lli,lli> freq;

        for(i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }

        map<lli,lli>::iterator itr;
        lli flag=0,key=-1;
        for(itr=freq.begin();itr!=freq.end();itr++){
            if(itr->second==1){
                key=itr->first;
                flag=1;
                break;
            }
        }

        if(flag==0)
            cout<<-1<<"\n";
        else{
            for(i=0;i<n;i++){
                if(a[i]==key){
                    cout<<(i+1)<<"\n";
                    break;
                }
            }
        }

    }

    return 0;

}
