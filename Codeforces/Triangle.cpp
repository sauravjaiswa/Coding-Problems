//Triangles

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        int n,i,j;
        cin>>n;
        char a[n][n];
        int freq[10]={0};
        int ans[10]={0};

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
                freq[a[i][j]]++;
            }
        }

        int miniR[10];
        int maxiR[10];

        int miniC[10];
        int maxiC[10];

        for(i=0;i<10;i++){
            miniC[i]=miniR[i]=n;
            maxiC[i]=maxiR[i]=-1;
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                int d=(int)a[i][j]-'0';
                miniR[d]=min(miniR[d],i);
                miniC[d]=min(miniC[d],j);
                maxiR[d]=max(maxiR[d],i);
                maxiC[d]=max(maxiC[d],j);
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                int d=(int)a[i][j]-'0';
                ans[d]=max(ans[d],max(maxiR[d]-i,i-miniR[d])*max(n-j-1,j));
                ans[d]=max(ans[d],max(maxiC[d]-j,j-miniC[d])*max(n-i-1,i));
            }
        }

        for(i=0;i<10;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
	}
}
