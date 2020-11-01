//Prim's Algorithm

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class Graph{

	int vertices;
	list<pair<int,int> > *adj;

	public:
	Graph(int vertices){
		this->vertices=vertices;
		adj=new list<pair<int,int> >[vertices+1];
	}

	void addEdge(int u,int v,int wt){
		adj[u].push_back(make_pair(v,wt));
		adj[v].push_back(make_pair(u,wt));
	}

	void prims(int u){
		int i;
		int *distance=new int[vertices+1];

		for(i=0;i<vertices+1;i++){
			distance[i]=-1;
		}
		distance[u]=0;

		priority_queue<pair<int,int>,vector <pair<int,int> > > pq;

		pq.push(make_pair(0,u));

		while(!pq.empty()){
			int vertex=pq.top().second;
			pq.pop();

			list<pair<int,int> >:: iterator it;
			for(it=adj[vertex].begin();it!=adj[vertex].end();it++){

				int v1=(*it).first;
				int w1=(*it).second;

				if(distance[v1]==-1){
					distance[v1]=distance[vertex]+w1;
					pq.push(make_pair(distance[v1],v1));
				}
				else if(distance[v1]>distance[vertex]+w1){
					distance[v1]=distance[vertex]+w1;
					pq.push(make_pair(distance[v1],v1));
				}
			}
		}


		cout<<"Vertex   Distance from Source\n";
    	for (i=1;i<=vertices; i++)
        	cout<<i<<"\t\t"<<distance[i]<<"\n";
	}
};

int main()
{
    int V = 9;
    Graph g(V);

    g.addEdge(1, 2, 7);
    g.addEdge(1, 3, 8);
    g.addEdge(2, 3, 3);
    g.addEdge(2, 4, 6);
    g.addEdge(3, 5, 3);
    g.addEdge(3, 4, 4);
    g.addEdge(4, 5, 2);
    g.addEdge(4, 6, 5);
    g.addEdge(5, 6, 2);

    g.prims(1);

    return 0;
}
