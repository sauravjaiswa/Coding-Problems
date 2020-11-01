//Unbounded Knapsack Problem
//Rod Cutting Problem uses the same logic
/*Input : W = 100
       val[]  = {1, 30}
       wt[] = {1, 50}
Output : 100
There are many ways to fill knapsack.
1) 2 instances of 50 unit weight item.
2) 100 instances of 1 unit weight item.
3) 1 instance of 50 unit weight item and 50
   instances of 1 unit weight items.
We get maximum value with option 2.

Input : W = 8
       val[] = {10, 40, 50, 70}
       wt[]  = {1, 3, 4, 5}
Output : 110
We get maximum value with one unit of
weight 5 and one unit of weight 3.*/

#include<bits/stdc++.h>
using namespace std;

int unboundedKnapsack(int val[],int wt[],int W,int n){
    int i,j;
    int t[n+1][W+1];

    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++)
            if(i==0||j==0)
                t[i][j]=0;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=W;j++){
            if(wt[i-1]<=j)
                t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][W];
}

int main(){
    int val[]={1, 30};
    int wt[]={1, 50};
    int W=100;
    int n=sizeof(val)/sizeof(val[0]);

    cout<<"Maximum value (Top Down) : "<<unboundedKnapsack(val,wt,W,n)<<"\n";
}
