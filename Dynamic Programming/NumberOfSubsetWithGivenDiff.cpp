//NumberOfSubsetWithGivenDiff
/*Input:  arr[] = {1, 6, 11, 5}
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12
Subset2 = {11}, sum of Subset2 = 11*/

#include<bits/stdc++.h>
using namespace std;

int countSubsetTopDown(int a[],int sum,int n){
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
            if(a[i-1]<=j)
                t[i][j]=t[i-1][j-a[i-1]]+t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][sum];

}

int main(){
    int a[]={1,1,2,3};
    int diff=1;
    int range=0,sum;
    int n=sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i++)
        range+=a[i];

    sum=(range+diff)/2;

    cout<<"Number of Subset with given Difference? : "<<countSubsetTopDown(a,sum,n)<<"\n";
}
