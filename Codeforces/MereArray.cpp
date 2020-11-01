//Mere Array

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli n,mini,i,j;

        cin>>n;
        lli a[n];
        vector<lli> div;

        for(i=0;i<n;i++)
            cin>>a[i];

        mini=*min(a,a+n);

        for(i=0;i<n;i++){
            if(a[i]%mini==0)
                div.push_back(i);
        }


    }
}
