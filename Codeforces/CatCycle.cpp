//Cat Cycle

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n,k,c1,c2;
        cin>>n>>k;
        lli i,a[k];
        c1=n;
        c2=1;

        for(i=0;i<k;i++){
            if(c1!=c2){
                a[i]=c2;
            }else{
                while(c2==c1){
                    c2++;

                    if(c2==n+1)
                        c2=1;
                }

                a[i]=c2;
            }
            c1--;
            c2++;

            if(c1==0){
                c1=n;
            }
            if(c2==n+1){
                c2=1;
            }
        }

        cout<<a[k-1]<<"\n";
    }

    return 0;
}
