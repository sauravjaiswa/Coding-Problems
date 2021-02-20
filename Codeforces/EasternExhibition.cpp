//Eastern Exhibition

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        lli n,i,s=0,f=0;
        cin>>n;
        lli x[n],y[n];

        for(i=0;i<n;i++)
            cin>>x[i]>>y[i];

        if(n%2!=0)
            cout<<"1\n";
        else{
            sort(x,x+n);
            sort(y,y+n);

            lli mx=x[n/2]-x[n/2-1]+1;
            lli my=y[n/2]-y[n/2-1]+1;

            cout<<mx*my<<"\n";
        }
    }
}
