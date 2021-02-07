//Max Funds

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

		void explore(lli u,lli visited[],lli w[],lli &compWt){
			visited[u]=1;
			compWt+=w[u];

			list<lli>::iterator i;
		    for(i=adj[u].begin();i!=adj[u].end();i++) {
		        if(!visited[*i]){
		        	explore(*i,visited,w,compWt);
				}
			}
		}

		lli dfsToCheckComponents(lli w[]){
			lli i,countComp=0,maxi=0,compWt=0;
		    lli *visited=new lli[vertices+1];
		  	for(i=0;i<vertices+1;i++)
		  	visited[i]=0;

		    for(i=1;i<=vertices;i++) {
                compWt=0;
		        if(!visited[i]){
		        	//countComp++;
		        	explore(i,visited,w,compWt);
		        	maxi=max(maxi,compWt);
				}
			}
			//cout<<"Components:"<<countComp<<"\n";
			return maxi;
		}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,i,j,e,u,v;
    cin>>n;
    lli w[n+1];

    Graph g(n);

    for(i=1;i<=n;i++)
        cin>>w[i];

    cin>>e;
    for(i=0;i<e;i++){
        cin>>u>>v;
        g.addEdge(u,v);
    }

    cout<<g.dfsToCheckComponents(w)<<"\n";

    return 0;
}
