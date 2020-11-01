//BFS and DFS on graph

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class Graph{

	int vertices;
	list<lli> *adj;

	public:
		Graph(lli vertices){
			this->vertices=vertices;
			adj=new list<lli>[vertices+1];
		}

		void addEdge(lli u,lli v){
			adj[u].push_back(v);
		}

		void BFS(){
			int j;
			int *visited=new int[vertices+1];

			for(j=0;j<vertices+1;j++)
				visited[j]=0;

            for(j=1;j<=vertices;j++){
                if(visited[j]==0)
                    BFSUtil(j,visited);
            }
		}

		void BFSUtil(lli u,int *visited){
			visited[u]=1;

			queue<lli> q;
			q.push(u);

			list<lli>::iterator i;
			lli vertex;
			while(!q.empty()){
				vertex=q.front();
				q.pop();
                cout<<vertex<<" ";

			    for(i=adj[vertex].begin();i!=adj[vertex].end();i++) {
			        if(visited[*i]==0){
			        	q.push(*i);
			        	visited[*i]=1;
					}
				}
			}
		}

		void DFS(){
		    int *visited=new int[vertices+1];
            int i;
            for(i=0;i<=vertices;i++)
                visited[i]=0;

            for(i=1;i<=vertices;i++)
                if(visited[i]==0)
                    DFSUtil(i,visited);
		}

		void DFSUtil(int u,int *visited){
		    visited[u]=1;
		    cout<<u<<" ";

            list<lli>::iterator it;
            for(it=adj[u].begin();it!=adj[u].end();it++)
                if(!visited[*it])
                    DFSUtil(*it,visited);
		}

};


int main(){
    Graph g(6);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(3, 4);
    g.addEdge(4, 4);
    g.addEdge(2, 6);
    g.addEdge(3, 5);

    cout<<"BFS of the graph is:\n";
    g.BFS();
    cout<<"\n";

    cout<<"DFS of the graph is:\n";
    g.DFS();
    cout<<"\n";
}
