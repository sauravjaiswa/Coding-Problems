//Sequence Transformation

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

        unordered_map<lli,lli> freq;
        unordered_map<lli,lli> visits;

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        if(n==1)
            cout<<0<<"\n";
        else if(n==2){
            if(a[0]!=a[1])
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        }else{

            lli f=0;
            for(i=1;i<n;i++){
                if(a[i]!=a[i-1]){
                    f=1;
                    freq[a[i]]++;
                }
            }

            if(f==0)
                cout<<0<<"\n";
            else{
                for(i=0;i<n-1;i++){
                    if(a[i]==a[n-1])
                        visits[a[i]]=1;
                    if(a[i]!=a[i+1]&&visits[a[i]]==0){
                        freq[a[i]]++;
                        visits[a[i]]=1;
                    }
                }

                unordered_map<lli,lli>::iterator itr;
                lli mini=INT_MAX;
                for(itr=freq.begin();itr!=freq.end();itr++){

                    //cout<<itr->first<<" : "<<itr->second<<"\n";

                    if(itr->second<mini){
                        mini=itr->second;
                    }
                }

                cout<<mini<<"\n";
            }


        }


    }

    return 0;

}
