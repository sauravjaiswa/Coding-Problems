/*Write a program to find the longest paths of 1s available in a square matrix, which consists of 0s and 1s only, and the only possible movements are right and down.
Example :
For a given input matrix is
 0 0 0 1 1
 1 1 1 0 1
 0 1 1 1 0
 0 0 1 0 0
 1 1 1 1 1

A possible longest path is as follows:
1th -- [ 1, 0]
2th -- [ 1, 1]
3th -- [ 2, 1]
4th -- [ 2, 2]
5th -- [ 3, 2]
6th -- [ 4, 2]
7th -- [ 4, 3]
8th -- [ 4, 4]
The length of longest path is 8*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli countLength(vector<vector<lli>> a,lli j,lli k,lli cnt){
    lli n=a.size();

    if(j==n||k==n)
        return 0;

    if(k>0&&a[j][k-1]==1&&a[j][k]==0){
        //cout<<cnt<<"\n";
        return 0;
    }

    if(j>0&&a[j-1][k]==1&&a[j][k]==0){
        //cout<<cnt<<"\n";
        return 0;
    }

    if(a[j][k]==-1)
        return 0;

    if(a[j][k]==0){
        //cout<<cnt<<"\n";
        //return countLength(a,j,k+1,0);
        return 0;
    }

    cnt++;
    a[j][k]=-1;

    //cout<<"ENTERING: "<<j<<" , "<<k<<"\n";

    return 1+max(countLength(a,j,k+1,cnt),countLength(a,j+1,k,cnt));

}

int main(){

    char ch;
    do{
        lli n,i,j,k,inp;
        cout<<"Enter size of matrix:\n";
        cin>>n;
        vector<vector<lli> > a;
        vector<lli> temp;

        cout<<"Enter values in matrix:\n";
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>inp;
                temp.push_back(inp);
            }
            a.push_back(temp);
            temp.clear();
        }

        vector<lli> res;
        lli cnt=0;

        for(i=0;i<n;i++){
            j=i;
            k=0;
            cnt=0;
            cnt=countLength(a,j,k,cnt);
            //cout<<cnt<<"\n";
            res.push_back(cnt);
        }
        cout<<"Longest Path length is : "<<*max_element(res.begin(),res.end())<<"\n";

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
