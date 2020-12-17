//Find the Spruce

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int i,j,n,m;
        cin>>n>>m;
        char a[n][m];
        int levels[n][m];

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(i==n-1){
                    if(a[i][j]=='*')
                        levels[i][j]=1;
                    else
                        levels[i][j]=0;
                }else
                    levels[i][j]=0;
            }
        }

        int mini=INT_MAX;
        for(i=n-2;i>=0;i--){
            for(j=0;j<m;j++){
                if(a[i][j]=='*'){
                    if((j-1)>=0)
                        mini=min(levels[i+1][j-1],levels[i+1][j]);
                    else
                        mini=min(0,levels[i+1][j]);
                    if((j+1)<m)
                        mini=min(mini,levels[i+1][j+1]);
                    else
                        mini=min(mini,0);

                    levels[i][j]=mini+1;
                }
            }
        }

        int ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ans+=levels[i][j];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
