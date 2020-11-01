//Graph Adjacency Matrix
#include<bits/stdc++.h> 
using namespace std;

class Graph
{
	
		int nodes;
		int **adj;
		
	public:
		Graph(int nodes)
		{
			this->nodes=nodes;
			adj=new int* [nodes+1];
			for (int i=1; i<=nodes; i++) 
		    { 
		       adj[i] = new int[nodes+1]; 
		       memset(adj[i],0, nodes*sizeof(int)); 
		    } 
		}
		
		void addEdge(int u, int v) 
		{ 
		    adj[u][v]=1;
		} 
		
		void printGraph() 
		{ 
			int i,j;
			list<int>:: iterator it;
		    for(i=1;i<=nodes;i++) 
		    { 
		        cout<<"\nAdjacency Matrix of vertex "<<i<<":";
		        for(j=1;j<=nodes;j++)
				{
					if(adj[i][j]==1)
						cout<<j<<" ";
				} 
		        cout<<"\n"; 
		    } 
		}
};

int main() 
{ 
	
    int nodes;
    cout<<"Enter number of nodes:";
    cin>>nodes;   //Number of nodes
    Graph g(nodes);
    
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
		
