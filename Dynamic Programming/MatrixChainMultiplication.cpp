//Matrix Chain Multiplication
/*Input: p[] = {40, 20, 30, 10, 30}
Output: 26000
There are 4 matrices of dimensions 40x20, 20x30, 30x10 and 10x30.
Let the input 4 matrices be A, B, C and D.  The minimum number of
multiplications are obtained by putting parenthesis in following way
(A(BC))D --> 20*30*10 + 40*20*10 + 40*10*30

Input: p[] = {10, 20, 30, 40, 30}
Output: 30000
There are 4 matrices of dimensions 10x20, 20x30, 30x40 and 40x30.
Let the input 4 matrices be A, B, C and D.  The minimum number of
multiplications are obtained by putting parenthesis in following way
((AB)C)D --> 10*20*30 + 10*30*40 + 10*40*30

Input: p[] = {10, 20, 30}
Output: 6000
There are only two matrices of dimensions 10x20 and 20x30. So there
is only one way to multiply the matrices, cost of which is 10*20*30*/

#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int solve(int a[],int n,int i,int j){
    if(i>=j)
        return 0;

    int minimum=INT_MAX;
    int k;
    for(k=i;k<j;k++){
//        cout<<i<<" "<<k<<" "<<j<<"\n";
        int temp=solve(a,n,i,k)+solve(a,n,k+1,j)+(a[i-1]*a[k]*a[j]);

        minimum=min(minimum,temp);
    }
    return minimum;
}

int matrixChainMultiplication(int a[],int n,int i,int j){
    if(i==j)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    dp[i][j]=INT_MAX;
    int k;
    for(k=i;k<j;k++){
        dp[i][j]=min(dp[i][j],matrixChainMultiplication(a,n,i,k)+matrixChainMultiplication(a,n,k+1,j)+(a[i-1]*a[k]*a[j]));
    }
    return dp[i][j];
}


int main(){
    //{30,35,15,5,10,20,3};//{40, 20, 30, 10, 30};
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n],i;

    cout<<"Enter elements in array:";
    for(i=0;i<n;i++)
        cin>>a[i];

    memset(dp,-1,sizeof(dp));

    cout<<"Minimum cost of MCM: "<<matrixChainMultiplication(a,n,1,n-1)<<"\n";
}
