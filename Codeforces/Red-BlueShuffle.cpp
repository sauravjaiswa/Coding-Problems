//Red-Blue Shuffle

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n;
        cin>>n;
        char r[n],b[n];

        for(i=0;i<n;i++)
            cin>>r[i];
        for(i=0;i<n;i++)
            cin>>b[i];

        int cnt1=0,cnt2=0;
        for(i=0;i<n;i++){
            if(r[i]>b[i]){
                cnt1++;
            }else if(r[i]<b[i]){
                cnt2++;
            }
        }

        if(cnt1>cnt2)
            cout<<"RED\n";
        else if(cnt1<cnt2)
            cout<<"BLUE\n";
        else
            cout<<"EQUAL\n";
    }
}
