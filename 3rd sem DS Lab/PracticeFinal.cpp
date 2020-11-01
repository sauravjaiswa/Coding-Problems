//Depth First Search

#include<bits/stdc++.h> 
using namespace std;

class Graph
{
	public:
		int nodes;
		list<int> *adj;
		
		Graph(int nodes)
		{
			this->nodes=nodes;
			adj=new list<int>[nodes];
		}
		
		void addEdge(int u,int v)
		{
			adj[u].push_back(v);
		}
		
		void printGraph()
		{
			int i;
			list <int>::iterator it;
			for(i=1;i<nodes;i++)
			{
				cout<<"Vertex "<<i<<":";
				for(it=adj[i].begin();it!=adj[i].end();it++)
				cout<<*it<<" ";
				cout<<"\n";
			}
		}
		
		void DFSUtil(int v,int *visited)
		{
			visited[v]=1;
			cout<<v<<" ";
			
			list <int>::iterator it;
			for(it=adj[v].begin();it!=adj[v].end();it++)
			{
				if(!visited[*it])
				DFSUtil(*it,visited);
			}
		}
		
		void DFS(int v)
		{
			int *visited=new int[nodes];
			int i;
			for(i=1;i<nodes;i++)
			visited[i]=0;
			DFSUtil(v,visited);
		}
};

int main() 
{ 
	
    int nodes,start;
    cout<<"Enter number of nodes:";
    cin>>nodes;   //Number of nodes
    Graph g(nodes+1);
    
    g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(2,5);
	g.addEdge(3,1);
	g.addEdge(3,6);
	g.addEdge(3,7);
	g.addEdge(4,2);
	g.addEdge(4,8);
	g.addEdge(5,2);
	g.addEdge(5,8);
	g.addEdge(6,2);
	g.addEdge(6,8);
	g.addEdge(7,2);
	g.addEdge(7,8);
	g.addEdge(8,4);
	g.addEdge(8,5);
	g.addEdge(8,6);
	g.addEdge(8,7);
    g.printGraph(); 
    
    cout<<"\nEnter the start vertex:";
    cin>>start;
    cout<<"\nBreadth First Search Traversal:\n";
    g.DFS(start);
    return 0; 
} 

/*		 1
		/\
	   /  \
	  2   3
	 /\  /\
	4 5 6 7
	\ \ / /
	 \ \
	 	8  */
