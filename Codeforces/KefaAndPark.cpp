//Kefa and Park

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class Graph{

	lli vertices;
	list<lli> *adj;

	public:
		Graph(lli vertices){
			this->vertices=vertices;
			adj=new list<lli>[vertices+1];
		}

		void addEdge(lli u,lli v){
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		lli total=0;

		void explore(lli u,lli* visited,lli cats[],lli m,lli cnt){

		    if(cats[u]){
                cnt++;
		    }else{
		        cnt=0;
		    }

		    if(cnt>m)
                return;
			visited[u]=1;

			lli flag=1;

			list<lli>::iterator i;
		    for(i=adj[u].begin();i!=adj[u].end();i++) {
		        if(!visited[*i]){
                    explore(*i,visited,cats,m,cnt);
                    flag=0;
				}
			}

			if(flag)
                total++;

		}

		void DFS(lli cats[],lli m){
			lli i,countComp=0;
		    lli *visited=new lli[vertices+1];
//		    memset(visited,0,sizeof(visited));
		  	for(i=0;i<vertices+1;i++)
		  	visited[i]=0;

            //countComp++;
            explore(1,visited,cats,m,0);
            //cout<<"\n";
		}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,n,m,u,v;
    cin>>n>>m;
    lli cats[n+1];
    cats[0]=0;
    for(i=0;i<n;i++){
        cin>>cats[i+1];
    }
    Graph g(n);

    for(i=0;i<n-1;i++){
    	cin>>u>>v;
    	g.addEdge(u,v);
	}
// 	g.printGraph();
	g.DFS(cats,m);

	cout<<g.total<<"\n";

    return 0;
}
