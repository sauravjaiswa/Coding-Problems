//Add Candies

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while( t-- ){
        lli n,m,i;
        cin>>n;

        if(n==2){
            m=1;
            cout<<m<<"\n";
            cout<<1<<"\n";
        }else{
            m=n;
            cout<<m<<"\n";
            for(i=1;i<=m;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }

    }

    return 0;
}
