//No More Inversions

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,k;
        cin>>n>>k;
        int a[n],cnt=1,totInv=0,freq[k+1]={0};
        vector<int> p(k);
        vector<int> result;

        for(i=0;i<n;i++){
            if((i+1)>=k){
                a[i]=cnt;
                cnt--;
            }else{
                a[i]=cnt;
                cnt++;
            }
        }
        totInv=k-cnt;

        cnt=a[n-1];
        for(i=n-1;i>=0;i--){
            if(p[a[i]-1]==1)
                continue;
            else{
                result.push_back(a[i]);
                p[a[i]-1]=1;
            }
        }


        for(i=k-1;i>=0;i--)
            cout<<result[i]<<" ";
        cout<<"\n";
    }
}
