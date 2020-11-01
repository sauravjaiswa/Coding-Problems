//Bishu Girlfriend Hackerearth

#include <bits/stdc++.h>
using namespace std;

int adj[1001][1001]={0};
int n,q,*visited;
map<int,int> dist;

void moveDown(int visited[],int u,int d){
    int i;
    visited[u]=1;
    dist[u]=d;

    for(i=1;i<=n;i++){
        if(adj[u][i]==1&&(!visited[i])){
            moveDown(visited,i,d+1);
        }
    }
}

void DFS(){
    int i,j,dist=0;
    visited=new int[n+1];

    for(j=0;j<=n;j++)
        visited[j]=0;

    moveDown(visited,1,dist);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int i,j,u,v,mini=INT_MAX,gfid=-1,id;
	cin>>n;

	for(i=1;i<n;i++){
		cin>>u>>v;
		adj[u][v]=1;
		adj[v][u]=1;
	}

	cin>>q;

	DFS();

    //for(auto it:dist)
      //  cout<<it.first<<"   "<<it.second<<"\n";

	for(i=0;i<q;i++){
		cin>>id;
		if(dist.find(id)!=dist.end()){
            if(dist[id]<mini){
                mini=dist[id];
                gfid=id;
            }
            else if(mini==dist[id]&&gfid>id)
                gfid=id;
		}

        //cout<<gfid<<"   "<<mini<<"\n";
	}

    //cout<<mini<<"   ";
    cout<<gfid<<"\n";

    return 0;
}
