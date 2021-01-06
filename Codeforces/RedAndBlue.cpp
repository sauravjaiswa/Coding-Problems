//Red and Blue

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m,i,j;
        cin>>n;
        int r[n],sum=0,maxi=0;
        for(i=0;i<n;i++){
            cin>>r[i];
            sum+=r[i];

            if(sum>maxi)
                maxi=sum;

            cout<<r[i]<<" ";
            cout<<"MAXI:"<<maxi<<"\n";
        }
        cin>>m;
        int b[m];
        for(i=0;i<m;i++){
            cin>>b[i];
            sum+=b[i];

            if(sum>maxi)
                maxi=sum;

            cout<<b[i]<<" ";
            cout<<"MAXI:"<<maxi<<"\n";
        }

        cout<<maxi<<"\n";
    }

    return 0;
}
