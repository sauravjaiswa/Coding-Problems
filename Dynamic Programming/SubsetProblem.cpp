//Subset problem
/*Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: True
There is a subset (4, 5) with sum 9.*/

//01 Knapsack Problem

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
            if(a[i-1]<=sum)
                t[i][j]=t[i-1][j-a[i-1]]||t[i-1][j];
            else
                t[i][j]=t[i-1][j];
        }
    }

    int s;
    i=n;
    j=s=sum;
    vector<vector<int>> result;
    vector<int> temp;

    while(i>0&&j>0){
        cout<<i<<" "<<j<<"\n";
        cout<<t[i][j]<<"\n";
        if(t[i][j]&&j-a[i-1]>=0){
            j=j-a[i-1];
            cout<<j<<"\n";
            temp.push_back(a[i-1]);
            i=i-1;

            if(j==0){
                result.push_back(temp);
                s=s-1;
                j=s;
                i=n;
                temp.clear();
            }
        }else{
            s=s-1;
            j=s;
            i=n;
            temp.clear();
        }
    }

    for(i=0;i<result.size();i++){
        for(j=0;j<result[i].size();j++)
            cout<<result[i][j]<<" ";
        cout<<"\n";
    }

    return t[n][sum];

}

int main(){
    //int a[]={5, 12, 3, 17, 1, 18, 15, 3, 17};
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

    cout<<"Subset possible? : ";
    if(isSubsetTopDown(a,sum,n))
        cout<<"True\n";
    else
        cout<<"False\n";
}
