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
        lli n,k,c1,c2,mid;
        cin>>n>>k;
        
        if(n%2==0){
            if(k<=n){
                cout<<k<<"\n";
            }else{
                cout<<k%n<<"\n";
            }
        }
        else{
            
            lli a[k+1],i;
            mid=(lli)ceil(n/2);

            i=1;
            c1=1;
            while(i<k){
                c1=(c1+mid)%n;
                i+=mid;
            }

            if(i==k){
                cout<<c1<<"\n";
            }else{
                
                while(i!=k){
                    c1=c1-1;
                    i--;
                }

                cout<<c1-1<<"\n";

            }
            
        }
    }

    return 0;
}
