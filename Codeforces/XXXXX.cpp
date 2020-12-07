//XXXXX

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,x;
        cin>>n>>x;
        int a[n];

        int f=1,sum=0,l=-1,r=-1;
        for(i=0;i<n;i++){
            cin>>a[i];

            if(a[i]%x!=0){
                if(l==-1)
                    l=i;
                r=i;

                f=0;
            }

            sum+=a[i];
        }

        if(sum%x!=0)
            cout<<n<<"\n";
        else if(l==-1)
            cout<<"-1\n";
        else{
            cout<<n-min(l+1,n-r)<<"\n";
        }

    }
}
