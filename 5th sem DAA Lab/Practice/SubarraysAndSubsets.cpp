//Print subarrays and subsets

#include<bits/stdc++.h>
using namespace std;

void subsetUtil(int a[],int ind,int n,vector<vector<int>> &result,vector<int> &subset){

    result.push_back(subset);
    int i;
    for(i=ind;i<n;i++){
        subset.push_back(a[i]);

        subsetUtil(a,i+1,n,result,subset);

        subset.pop_back();
    }
    return;
}

void subarray(int a[],int n,vector<vector<int>> &result,vector<int> &subset){
    int i,j,k;

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++)
                subset.push_back(a[k]);
            result.push_back(subset);
            subset.clear();
        }
    }
}

int main(){
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j;
    vector<int> subset;
    vector<vector<int>> result;

    cout<<"The subsets are:\n";
    subsetUtil(a,0,n,result,subset);
    for(i=0;i<result.size();i++){
        for(j=0;j<result[i].size();j++)
            cout<<result[i][j]<<" ";
        cout<<"\n";
    }

    subset.clear();
    result.clear();
    cout<<"The subarrays are:\n";
    subarray(a,n,result,subset);
    for(i=0;i<result.size();i++){
        for(j=0;j<result[i].size();j++)
            cout<<result[i][j]<<" ";
        cout<<"\n";
    }
}
