//01 Knapsack Problem

#include<bits/stdc++.h>
using namespace std;

//Recursive
int knapsackRecursive(int val[],int wt[],int W,int n){
    if(n==0||W==0)
        return 0;

    if(wt[n]<=W)
        return max(val[n-1]+knapsackRecursive(val,wt,W-wt[n],n-1),knapsackRecursive(val,wt,W,n-1));
    else
        return knapsackRecursive(val,wt,W,n-1);
}

//Memoized version
int knapsackMemoized(int val[],int wt[],int W,int n){
    int t[n+2][W+2];
    memset(t,-1,sizeof(t));

    if(n==0||W==0)
        return 0;

    if(t[n][W]!=-1)
        return t[n][W];

    if(wt[n]<=W)
        return t[n][W]=max(val[n-1]+knapsackRecursive(val,wt,W-wt[n],n-1),knapsackRecursive(val,wt,W,n-1));
    else
        return t[n][W]=knapsackRecursive(val,wt,W,n-1);
}

//Top-Down approach
int knapsackTopDown(int val[],int wt[],int W,int n){
    int t[n+1][W+1],i,j;

    for(i=0;i<=n;i++){
        for(j=0;j<=W;j++)
            if(i==0||j==0)
                t[i][j]=0;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=W;j++){
            if(wt[i-1]<=j)
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][W];
}

int main(){
    //int val[]={ 60, 100, 120 };
    //int wt[]={ 10, 20, 30 };
    //int W=50;
    //int n=sizeof(val)/sizeof(val[0]);

    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int val[n],wt[n],i,W;

    cout<<"Enter value and weight respectively for each item:";
    for(i=0;i<n;i++)
        cin>>val[i]>>wt[i];

    cout<<"Enter total weight:";
    cin>>W;

    cout<<"Maximum value (Recursive) : "<<knapsackRecursive(val,wt,W,n)<<"\n";
    cout<<"Maximum value (Memoized) : "<<knapsackMemoized(val,wt,W,n)<<"\n";
    cout<<"Maximum value (Top Down) : "<<knapsackTopDown(val,wt,W,n)<<"\n";
}
