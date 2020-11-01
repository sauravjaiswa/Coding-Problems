#include<bits/stdc++.h>
using namespace std;
class input
{
public:
    int r;
    int d;
};
void add_edge(vector<int> adj[],int start,int end)
{
    adj[start].push_back(end);
}
bool searchBFS(vector<int>adj[],int start,int end,int v,int pred[],int dist[])
{
    int i;
    list<int> q;
    bool *visited=new bool[v];
    for(i=0;i<v;i++)
       {
           visited[i]=false;
           dist[i]=INT_MAX;
           pred[i]=-1;
       }
    visited[start]=true;
    dist[start]=0;
    q.push_back(start);
    while(!q.empty())
    {
        int u=q.front();
        q.pop_front();
        for(i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==false)
            {
                visited[adj[u][i]]=true;
                dist[adj[u][i]]=dist[u]+1;
                pred[adj[u][i]]=u;
                q.push_back(adj[u][i]);
               if(adj[u][i]==end)
                    return true;
            }
        }
    }
    return false;
}
void shortdistance(vector<int> adj[],int start,int end,int vertical)
{
    int *pred=new int[vertical];
    int *dist=new int[vertical];
    searchBFS(adj,start,end,vertical,pred,dist);
        cout<< dist[end]<<"\n";
}
int main()
{
    int i,j,k,m,n,x=1;
    cin>>m>>n;
    input val[m][n];
    int arr[m][n];
    vector<int> adj[m*n+1];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
         cin>>val[i][j].r;

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
         cin>>val[i][j].d;

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
         arr[i][j]=x++;

    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {
        for(k=1;k<=val[i][j].r;k++)
        if((j+k)<n)
          {
                add_edge(adj,arr[i][j],arr[i][j+k]);
          }
      }
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        for(k=1;k<=val[i][j].d;k++)
        if((i+k)<m)
           {
                add_edge(adj,arr[i][j],arr[i+k][j]);
           }
   shortdistance(adj,arr[0][0],arr[m-1][n-1],m*n);
    return 0;
}
