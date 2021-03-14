//Berland Crossword

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n,u,r,d,l,i,j,cu,cr,cd,cl;
        cu=cr=cd=cl=0;

        cin>>n>>u>>r>>d>>l;

        cu=u;
        if(cu==n){
            cr++;
            r--;
        }
        if(cr<r){
            cr+=r;
        }

        if(cr==n-1)

    }

    return 0;
}
