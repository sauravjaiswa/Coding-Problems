//Most socially-distanced subsequence

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,x,mini,maxi,posmin,posmax;
        cin>>n;
        int a[n];

        unordered_set<int> s;

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        if(n==2){
            s.insert(a[0]);
            s.insert(a[1]);
        }else{
            int prev;
            prev=a[0];
            s.insert(a[0]);
            for(i=1;i<n;i++){
                if(a[i]>a[i-1])
                    continue;
                else{
                    s.insert(a[i-1]);
                    prev=a[i];
                }
            }
            s.insert(a[n-1]);
        }

        cout<<s.size()<<"\n";
        for(i=0;i<n;i++){
            if(s.find(a[i])!=s.end())
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
}
