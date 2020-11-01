//Count number of subset of given sum

/*Input: arr[] = {1, 2, 3, 3}, X = 6
Output: 3
All the possible subsets are {1, 2, 3},
{1, 2, 3} and {3, 3}

Input: arr[] = {1, 1, 1, 1}, X = 1
Output: 4*/

#include<bits/stdc++.h>
using namespace std;

//Top Down
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
    //int a[]={3, 2, 3, 1};
    //int sum=6;
    //int n=sizeof(a)/sizeof(a[0]);
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n],i,sum;

    cout<<"Enter elements in array:";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Enter a value of sum:";
    cin>>sum;



    cout<<"Number of subsets? : "<<countSubsetTopDown(a,sum,n)<<"\n";
}
