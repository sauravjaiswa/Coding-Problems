//Strange List

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n,x,f=0,sum=0,temp;
        cin>>n>>x;
        vector<lli> a;

        for(i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(i=0;i<a.size();i++){
            if(a[i]%x==0)
                a.push_back(a[i]/x);
            else
                break;
        }
        for(i=0;i<a.size();i++){
            //cout<<a[i]<<" ";
            if(i<n)
                sum+=a[i];
            else
                sum+=a[i%n];
        }
        cout<<sum<<"\n";
    }
}
