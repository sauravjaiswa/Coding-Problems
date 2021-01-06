//Strange Partition

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n,x,f=0,sum=0,mini=0,maxi=0;
        cin>>n>>x;
        lli a[n];

        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%x!=0)
                f=1;
        }
        if(f==1){
            mini=(lli)ceil((double)sum/(double)x);
            for(i=0;i<n;i++){
                //cout<<(lli)ceil(a[i]/x)<<"\n";
                maxi=maxi+(lli)ceil((double)a[i]/(double)x);
            }
        }else{
            mini=maxi=sum/x;
        }
        cout<<mini<<" "<<maxi<<"\n";
    }
}
