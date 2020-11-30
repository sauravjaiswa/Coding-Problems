//Ping Pong

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],i;

        for(i=0;i<n;i++)
            cin>>a[i];

        int f=0;
        int pairs=0,mini=INT_MAX;
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                pairs++;

                if((a[i]>=x&&x>a[i+1])||(a[i]<x)){
                    f=-1;
                    break;
                }
            }
        }

        if(f!=0)
            cout<<f<<"\n";
        else{
            if(pairs==0)
                cout<<pairs<<"\n";
            else
                cout<<n-pairs<<"\n";
        }
	}
}
