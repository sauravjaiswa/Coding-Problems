//Find The Array

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n;
        cin>>n;
        lli a[n],b[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        b[0]=a[0];
        for(i=1;i<n;i++){
            if(a[i]>=b[i-1]){
                lli mul=a[i]/b[i-1];
                b[i]=b[i-1]*mul;
            }else{
                b[i]=a[i];
            }
        }

        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";

    }
}
