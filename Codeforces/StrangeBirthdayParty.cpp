//Strange Birthday Party

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n,m,f=0,sum=0,temp;
        cin>>n>>m;
        lli k[n],c[m],visited[m],gift[n];

        for(i=0;i<n;i++){
            cin>>k[i];
        }

        for(i=0;i<m;i++){
            cin>>c[i];
            visited[i]=0;
        }

        for(i=0;i<n;i++){
            gift[i]=c[k[i]-1];
        }

        for(i=0;i<n;i++){
            for(j=0;j<k[i];j++){
                if(visited[j]==0){
                    if(c[j]<gift[i]){
                        gift[i]=c[j];
                        visited[j]=1;
                    }else
                        break;
                }
            }
        }

        for(i=0;i<n;i++){
            cout<<gift[i]<<" ";
            sum+=gift[i];
        }
        cout<<"\n";
        cout<<sum<<"\n";
    }
}
