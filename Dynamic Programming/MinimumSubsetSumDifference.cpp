//Minimum Subset Sum Difference
/*Input:  arr[] = {1, 6, 11, 5}
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12
Subset2 = {11}, sum of Subset2 = 11*/

#include<bits/stdc++.h>
using namespace std;

int isSubsetTopDown(int a[],int sum,int n){
    int i,j,minDiff=INT_MAX;
    bool t[n+1][sum+1];

    for(i=0;i<=n;i++){
        for(j=0;j<=sum;j++){
            if(i==0)
                t[i][j]=false;
            if(j==0)
                t[i][j]=true;
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=sum;j++){
            if(a[i-1]<=sum)
                t[i][j]=t[i-1][j-a[i-1]]||t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }

    for(i=sum/2;i>=0;i--){
        if(t[n][i]==true){
            minDiff=sum-(2*i);
            break;
        }
    }

    return minDiff;

}

int main(){
    int a[]={3, 1, 4, 2, 2, 1};
    int sum=0,sub;
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i++)
        sum+=a[i];

    cout<<"Minimum Subset Sum Difference? : "<<isSubsetTopDown(a,sum,n)<<"\n";
}
