//Another Tree with Number Theory

#include<bits/stdc++.h>
#define lli long long int
#define M 998244353
using namespace std;

class Tree{

	int vertices;
	list<lli> *adj;
	lli wasted=0;

	public:
		Tree(lli vertices){
			this->vertices=vertices;
			adj=new list<lli>[vertices+1];
		}

		void addEdge(lli u,lli v){
			adj[u].push_back(v);
			//adj[v].push_back(u);
		}

		void printGraph()
		{
			lli i;
			list<lli>:: iterator it;
		    for(i=1;i<=vertices;i++)
		    {
		        cout<<"Adjacency list of vertex "<<i<<":";
		        for(it=adj[i].begin();it!=adj[i].end();it++)
		           cout<<*it<<" ";
		        cout<<"\n";
		    }
		}

		lli explore(lli u,lli visited[],lli tasks[]){
			visited[u]=1;

			lli gained=0;
			lli numChilds=adj[u].size();
			list<lli>::iterator i;

			if(numChilds>0){
                if(tasks[u]%numChilds!=0){
                    wasted+=tasks[u];
                }else{
                    gained=tasks[u]/numChilds;
                }
			}


		    for(i=adj[u].begin();i!=adj[u].end();i++) {
		        if(!visited[*i]){
                    tasks[*i]=gained;
		        	explore(*i,visited,tasks);
				}
			}
		}

		lli DFS(lli start,lli w){
		    wasted=0;
			lli i,countComp=0;
		    lli *visited=new lli[vertices+1];
		    lli *tasks=new lli[vertices+1];

		  	for(i=0;i<vertices+1;i++){
                visited[i]=0;
                tasks[i]=0;
		  	}

		  	tasks[start]=w;
            explore(start,visited,tasks);
            return wasted;
		}
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,j,k,n,q,v,w;
    cin>>n;
    lli p[n+1],sum=0;

    p[0]=p[1]=-1;
    Tree tree(n);
    for(i=2;i<=n;i++){
        cin>>p[i];

        tree.addEdge(p[i],i);
    }
    //tree.printGraph();

    cin>>q;
    for(k=1;k<=q;k++){
        cin>>v>>w;

        cout<<tree.DFS(v,w)<<"\n";
    }

    return 0;
}
