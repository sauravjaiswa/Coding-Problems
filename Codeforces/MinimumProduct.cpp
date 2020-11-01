//MinimumProduct

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli a,b,x,y,n,prod,p1,p2,p3,minP;

        cin>>a>>b>>x>>y>>n;

        prod=a*b;
        while(a>=x&&b>=y&&n>0){

            p1=(a-1)*b;
            p2=a*(b-1);
            p3=(a-1)*(b-1);

            minP=min(p3,min(p1,p2));

            if(minP==p1){
                a=a-1;
            }else if(minP==p2){
                b=b-1;
            }else{
                a=a-1;
                b=b-1;
                n--;
            }
            prod=minP;
            n--;
        }

        if(a>x){
            a=a-n;
        }
        if(b>y){
            b=b-n;
        }
        prod=a*b;

        cout<<prod<<"\n";
    }

    return 0;
}
