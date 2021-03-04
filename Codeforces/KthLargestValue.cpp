//K-th Largest Value

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,j,n,q;
    cin>>n>>q;
    lli a[n];
    unordered_map<lli,lli> mp;

    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    for(i=1;i<=q;i++){
        lli ch,x;
        cin>>ch>>x;

        if(ch==1){
            mp[a[x-1]]--;
            a[x-1]=1-a[x-1];
            mp[a[x-1]]++;
        }else{
            if(x<=mp[1])
                cout<<"1\n";
            else
                cout<<"0\n";
        }
    }


    return 0;
}
