#include<bits/stdc++.h>
using namespace std;

class Graph{

    public:
        int n;
        int adj[1000][1000];
        unordered_map<int,int> mp;

public:
    Graph(int n){
        this->n=n;
    }

    void input(){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>adj[i][j];

            }
        }

    }

    void dfs(int p){
        int i,j,cnt=0;
        int visited[n][n];

        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                visited[i][j]=0;
        }

        int f=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){

                if(adj[i][j]==1){

                    if(i==0&&j==0)
                        visited[i][j]=++cnt;
                    else if(i==0&&j==n-1){
                        if(!visited[i][j-1]&&!visited[i+1][j])
                            visited[i][j]=++cnt;
                        //cout<<1<<" "<<cnt<<"\n";
                    }else if(i==n-1&&j==0){
                        if(!visited[i-1][j]&&!visited[i][j+1])
                            visited[i][j]=++cnt;
                        //cout<<2<<" "<<cnt<<"\n";
                    }else if(i==n-1&&j==n-1){
                        if(!visited[i-1][j]&&!visited[i][j-1])
                            visited[i][j]=++cnt;
                        //cout<<3<<" "<<cnt<<"\n";
                    }else if(i==0&&(j>0&&j<n-1)){
                        if(!visited[i][j-1]&&!visited[i][j+1]&&!visited[i+1][j])
                            visited[i][j]=++cnt;
                        //cout<<4<<" "<<cnt<<"\n";
                    }else if(i==n-1&&(j>0&&j<n-1)){
                        if(!visited[i][j-1]&&!visited[i][j+1]&&!visited[i-1][j])
                            visited[i][j]=++cnt;
                        //cout<<5<<" "<<cnt<<"\n";
                    }else if(j==0&&(i>0&&i<n-1)){
                        if(!visited[i-1][j]&&!visited[i+1][j]&&!visited[i][j+1])
                            visited[i][j]=++cnt;
                        //cout<<6<<" "<<cnt<<"\n";
                    }else if(j==n-1&&(i>0&&i<n-1)){
                        if(!visited[i-1][j]&&!visited[i+1][j]&&!visited[i][j-1])
                            visited[i][j]=++cnt;
                        //cout<<7<<" "<<cnt<<"\n";
                    }else{
                        if(!visited[i-1][j]&&!visited[i+1][j]&&!visited[i][j-1]&&!visited[i][j+1])
                            visited[i][j]=++cnt;
                        //cout<<8<<" "<<cnt<<"\n";
                    }

                    if(!visited[i][j]){
                        if((j+1)<n && visited[i][j+1])
                            visited[i][j]=visited[i][j+1];

                        if((j-1)>=0 && visited[i][j-1])
                            visited[i][j]=visited[i][j-1];

                        if((i+1)<n && visited[i+1][j])
                            visited[i][j]=visited[i+1][j];

                        if((i-1)>=0 && visited[i-1][j])
                            visited[i][j]=visited[i-1][j];
                    }

                    if((j+1)<n && adj[i][j+1])
                        visited[i][j+1]=visited[i][j];

                    if((j-1)>=0 && adj[i][j-1])
                        visited[i][j-1]=visited[i][j];

                    if((i+1)<n && adj[i+1][j])
                        visited[i+1][j]=visited[i][j];

                    if((i-1)>=0 && adj[i-1][j])
                        visited[i-1][j]=visited[i][j];

                }
            }

        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(visited[i][j]){
                    if((j+1)<n && visited[i][j+1])
                        visited[i][j]=visited[i][j+1];

                    if((j-1)>=0 && visited[i][j-1])
                        visited[i][j]=visited[i][j-1];

                    if((i+1)<n && visited[i+1][j])
                        visited[i][j]=visited[i+1][j];

                    if((i-1)>=0 && visited[i-1][j])
                        visited[i][j]=visited[i-1][j];
                }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
            	if(visited[i][j])
                    mp[visited[i][j]]++;
            }
        }

        for(auto it:mp){
            if(it.second==p){
                f=it.first;
                break;
            }
        }

        // for(i=0;i<n;i++){
        //     for(j=0;j<n;j++)
        //         cout<<visited[i][j]<<" ";
        //     cout<<"\n";
        // }

        if(f==0){
            cout<<"-1 -1\n";
        }else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(visited[i][j]==f){
                        cout<<i<<" "<<j<<"\n";
                        return;
                    }
                }
            }
        }


    }



};

int main(){
    // write your code
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,i,j,p;
    	cin>>n;
        int f=0;

        Graph g(n);
        g.input();

        cin>>p;

        g.dfs(p);



//         if(g.mp[p].first==0&&g.mp[p].second==0)
//             cout<<"-1 -1\n";
//         else
//             cout<<g.mp[p].first-1<<" "<<g.mp[p].second-1<<"\n";
    }

    return 0;
}




/*Manish ka code
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
ll mod=1000000007;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
int arr[1009][1009];
int cnt=0;
int p=1009,q=1009;
bool vis[1009][1009];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool valid(int x,int y)
{
    return (x>=0 && y>=0 && x<n && y<n);
}
void dfs(int x,int y)
{
    cnt++;
    vis[x][y]=1;
    if(p==1009)
        p=x,q=y;
    else
    {
        if(x<p)
            p=x,q=y;
        else if(x==p)
        {
            q=min(q,y);
        }
    }
    for(int i=0;i<4;i++)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy) && !vis[xx][yy] && arr[xx][yy]==1)
            dfs(xx,yy);
    }
}
int main()
{
    IOS;


    ll t;cin>>t;while(t--)
    {
        memset(vis,0,sizeof vis);
        p=q=1009;
        cnt=0;
        ll a,b,c,d,i,j,k,l,m,sum=0,temp=0,f=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>arr[i][j];
        }
        cin>>k;
        int pos[109][2];
        for(i=0;i<109;i++)
            pos[i][0]=pos[i][1]=-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i][j]==1 && vis[i][j]==0)
                {
                    p=1009;
                    q=1009;
                    cnt=0;
                    dfs(i,j);
                    //cout<<"yo "<<cnt<<" "<<p<< " "<<q<<endl;

                    pos[cnt][0]=p;
                    pos[cnt][1]=q;
                }

            }
        }
        cout<<pos[k][0]<<" "<<pos[k][1]<<endl;

    }
}*/
