//Dijkstra's Algorithm

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class Graph{

	int vertices;
	list<pair<int,int> > *adj;
	vector<int> result;

	public:
	Graph(int vertices){
		this->vertices=vertices;
		adj=new list<pair<int,int> >[vertices+1];
	}

	void addEdge(int u,int v,int wt){
		adj[u].push_back(make_pair(v,wt));
		adj[v].push_back(make_pair(u,wt));
	}

	void path(int parent[],int i)
    {
        if(parent[i]==-1)
            return;

        path(parent,parent[i]);
        cout<<i<<" ";
    }

    void display(int distance[],int vertices,int parent[])
    {
        for(int i=2;i<vertices;i++)
        {
            path(parent,i);
        }
    }

	vector<int> dijkstra(int u){
		int i;
		int *distance=new int[vertices+1];
		int *parent=new int[vertices+1];

		for(i=0;i<vertices+1;i++){
            parent[i]=-1;
			distance[i]=-1;
		}
		distance[u]=0;

		priority_queue<pair<int,int>,vector <pair<int,int> >,greater<pair<int,int> > > pq;

		pq.push(make_pair(0,u));

		while(!pq.empty()){
			int vertex=pq.top().second;
			pq.pop();

			list<pair<int,int> >:: iterator it;
			for(it=adj[vertex].begin();it!=adj[vertex].end();it++){

				int v1=(*it).first;
				int w1=(*it).second;

				if(distance[v1]==-1){
                    parent[v1]=vertex;
					distance[v1]=distance[vertex]+w1;
					pq.push(make_pair(distance[v1],v1));
				}
				else if(distance[v1]>distance[vertex]+w1){
                    parent[v1]=vertex;
					distance[v1]=distance[vertex]+w1;
					pq.push(make_pair(distance[v1],v1));
				}
			}
		}

		vector<int> ans;
		int f=14;
		ans.push_back(f);
		while(f!=-1) {
            ans.push_back(parent[f]);
            f=parent[f];
        }
        return ans;


		//cout<<"Vertex   Distance from Source\n";
    	//for (i=1;i<=vertices; i++)
        	//cout<<i<<"\t\t"<<distance[i]<<"\n";

        //display(distance,vertices,parent);

//        result.push_back(1);
  //      for(i=2;i<vertices+1;i++){
    //        if(distance[i]!=-1)
                //result.push_back(i);
      //  }
        //return result;
	}
};

int main()
{
    int V=14;
    int a,b,c,d;
    unordered_map<int,char> m;
    Graph g(V);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>a>>b>>c>>d;

    m[1]='X';
    m[2]='a';
    m[3]='b';
    m[4]='c';
    m[5]='d';
    m[6]='e';
    m[7]='f';
    m[8]='g';
    m[9]='h';
    m[10]='i';
    m[11]='j';
    m[12]='k';
    m[13]='m';
    m[14]='Y';

    g.addEdge(1,2,2);
    g.addEdge(1,3,1);
    g.addEdge(1,6,4);
    g.addEdge(1,8,d);
    g.addEdge(2,5,1);
    g.addEdge(5,9,3);
    g.addEdge(5,13,a);
    g.addEdge(9,14,b);
    g.addEdge(8,12,3);
    g.addEdge(12,14,1);
    g.addEdge(6,10,5);
    g.addEdge(10,14,7);
    g.addEdge(10,4,c);
    g.addEdge(3,4,1);
    g.addEdge(4,7,3);
    g.addEdge(7,11,6);
    g.addEdge(11,14,7);
    g.addEdge(13,14,3);

    vector<int> vec=g.dijkstra(1);

    for(int i=vec.size()-1;i>=0;i--){
        char ch=m[vec[i]];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        cout<<ch<<" ";
    }

    return 0;
}
