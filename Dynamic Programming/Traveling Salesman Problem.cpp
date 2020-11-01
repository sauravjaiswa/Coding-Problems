//Traveling Salesman Problem

#include<bits/stdc++.h>
using namespace std;

int n=4;//No. of vertices of graph
int dist[10][10]={{0,10,15,20},
                {10,0,35,25},
                {15,35,0,30},
                {20,25,30,0}};

//Mask when all cities are visited
int visitedAll=(1<<n)-1;

int tsp(int mask,int currPos){
    int i,j;

    if(mask==visitedAll)
        return dist[currPos][0];

    int ans=INT_MAX;
    for(i=0;i<n;i++){
        if((mask&(1<<i))==0){
            int newAns=dist[currPos][i]+tsp(mask|(1<<i),i);
            ans=min(ans,newAns);
        }
    }

    return ans;
}

int main(){
    cout<<"Minimum distance in TSP: "<<tsp(1,0)<<"\n";

    return 0;
}
