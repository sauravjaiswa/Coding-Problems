//Coin Change-1 -> Maximum number of ways

/*Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins,
how many ways can we make the change? The order of coins doesn’t matter.
For example, for N = 4 and S = {1,2,3}, there are four solutions: {1,1,1,1},{1,1,2},{2,2},{1,3}. So output should be 4. For N = 10 and S = {2, 5, 3, 6},
there are five solutions: {2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} and {5,5}. So the output should be 5.*/

#include<bits/stdc++.h>
using namespace std;

int maxNoOfWays(int coins[],int sum,int n){
    int i,j;
    int t[n+1][sum+1];

    for(i=0;i<=n;i++){
        for(j=0;j<=sum;j++){
            if(i==0)
                t[i][j]=0;
            if(j==0)
                t[i][j]=1;
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=sum;j++){
            if(coins[i-1]<=j)
                t[i][j]=t[i][j-coins[i-1]]+t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][sum];

}

void printAll(int coins[],int sum,int n){
    vector<int> v;
    vector<vector<int>> result;
    vector<int> temp;
    int i,j,freq,curr=0;

    for(i=0;i<n;i++){
        freq=sum/coins[i];
        v.insert(v.end(),freq,coins[i]);
    }

    sort(v.begin(),v.end());

    int l=v.size();
    for(i=0;i<l;i++){
        curr=0;
        temp.clear();
        for(j=i;j<l;j++){
            if(curr<sum){
                curr=curr+v[j];
                temp.push_back(v[j]);
                if(curr==sum){
                    result.push_back(temp);
                    break;
                }
            }else if(curr>sum){
                break;
            }
        }
    }

    for(i=0;i<result.size();i++){
        for(j=0;j<result[i].size();j++)
            cout<<result[i][j]<<" ";
        cout<<"\n";
    }
}

int main(){
    int coins[]={2, 1, 5};
    int sum=5;
    int n=sizeof(coins)/sizeof(coins[0]);

    cout<<"Number of ways for change are? : "<<maxNoOfWays(coins,sum,n)<<"\n";

    printAll(coins,sum,n);
}
