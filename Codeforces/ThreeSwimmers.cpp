//Three Swimmers

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        lli p,a,b,c,temp1,temp2,temp3,f=0,aa,bb,cc;
        cin>>p>>a>>b>>c;
        temp1=temp2=temp3=LONG_MAX;

        aa=(lli)ceil((float)p/(float)a)*a;
        bb=(lli)ceil((float)p/(float)b)*b;
        cc=(lli)ceil((float)p/(float)c)*c;

        // cout<<aa<<" "<<bb<<" "<<cc<<"\n";
        cout<<min(aa,min(bb,cc))-p<<"\n";
    }
}
