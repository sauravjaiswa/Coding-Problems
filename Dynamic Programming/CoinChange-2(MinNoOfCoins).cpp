//Coin Change-2 -> Minimum number of coins

/*Input: coins[] = {25, 10, 5}, V = 30
Output: Minimum 2 coins required
We can use one coin of 25 cents and one of 5 cents

Input: coins[] = {9, 6, 5, 1}, V = 11
Output: Minimum 2 coins required
We can use one coin of 6 cents and 1 coin of 5 cents*/

#include<bits/stdc++.h>
using namespace std;

int minNoOfCoins(int coins[],int sum,int n){
    int i,j;
    int t[n+1][sum+1];

    for(i=0;i<=n;i++){
        for(j=0;j<=sum;j++){
            if(i==0)
                t[i][j]=INT_MAX-1;
            if(j==0)
                t[i][j]=0;
        }
    }

    t[0][0]=INT_MAX-1;

    //Initialize second row
    for(j=1;j<=sum;j++){
        if(j%coins[0]==0)
            t[1][j]=j/coins[0];
        else
            t[1][j]=INT_MAX-1;
    }

    for(i=2;i<=n;i++){
        for(j=1;j<=sum;j++){
            if(coins[i-1]<=j)
                t[i][j]=min((t[i][j-coins[i-1]]+1),t[i-1][j]);
            else
                t[i][j]=t[i-1][j];

        }
    }

    i=n;
    j=sum;
    vector<int> result;

    while(i>0&&j>0){

        if((t[i][j]-t[i][j-coins[i-1]])==1){
            result.push_back(coins[i-1]);
            j=j-coins[i-1];
        }
        else
            i=i-1;
    }

    cout<<"Set of coins:\n";
    for(i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    cout<<"\n";

    return t[n][sum];

}

int main(){
    int coins[]={9, 6, 5, 1};
    int sum=11;
    int n=sizeof(coins)/sizeof(coins[0]);

    int numOfCoins=minNoOfCoins(coins,sum,n);
    cout<<"Minimum number of coins are? : "<<numOfCoins<<"\n";
}
