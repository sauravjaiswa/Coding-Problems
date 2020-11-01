//Equal Sum Partition
/*Input: arr[] = {1, 5, 11, 5}
Output: true
The array can be partitioned as {1, 5, 5} and {11}

Input: arr[] = {1, 5, 3}
Output: false
The array cannot be partitioned into equal sum sets.*/

#include<bits/stdc++.h>
using namespace std;

//Recursive
bool isSubset(int a[],int sum,int n){
    if(n==0)
        return false;
    if(sum==0)
        return true;

    if(a[n]<=sum)
        return isSubset(a,sum-a[n],n-1)||isSubset(a,sum,n-1);
    else
        return isSubset(a,sum,n-1);
}

//Top Down
bool isSubsetTopDown(int a[],int sum,int n){
    int i,j;
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
            if(a[i-1]<=j)
                t[i][j]=t[i-1][j-a[i-1]]||t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }

    return t[n][sum];

}

int main(){
    int a[]={1, 5, 11, 5};
    int sum=0;
    int n=sizeof(a)/sizeof(a[0]);
    int i;

    for(i=0;i<n;i++)
        sum+=a[i];

    if(sum%2==0){
        sum=sum/2;
        cout<<"Equal Partition Possible? : "<<isSubsetTopDown(a,sum,n)<<"\n";
    }else{
        cout<<"Equal Partition Possible? : 0\n";
    }

}
