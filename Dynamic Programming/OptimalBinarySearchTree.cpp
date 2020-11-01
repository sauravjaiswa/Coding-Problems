//Optimal binary search tree

/*Input:  keys[] = {10, 12}, freq[] = {34, 50}
There can be following two possible BSTs
        10                       12
          \                     /
           12                 10
          I                     II
Frequency of searches of 10 and 12 are 34 and 50 respectively.
The cost of tree I is 34*1 + 50*2 = 134
The cost of tree II is 50*1 + 34*2 = 118


Input:  keys[] = {10, 12, 20}, freq[] = {34, 8, 50}
There can be following possible BSTs
    10                12                 20         10              20
      \             /    \              /             \            /
      12          10     20           12               20         10
        \                            /                 /           \
         20                        10                12             12
     I               II             III             IV             V
Among all possible BSTs, cost of the fifth BST is minimum.
Cost of the fifth BST is 1*50 + 2*34 + 3*8 = 142*/

#include<bits/stdc++.h>
using namespace std;

int optimalBST(int nodes[],int freq[],int n){
    int g,i,j,k,prefixSum[n];
    int t[n][n];
    prefixSum[0]=freq[0];

    for(i=1;i<n;i++)
        prefixSum[i]=prefixSum[i-1]+freq[i];

    for(g=0;g<n;g++){
        for(i=0,j=g;j<n;i++,j++){

            if(g==0)
                t[i][j]=freq[i];
            else if(g==1){
                int f1=freq[i];
                int f2=freq[j];

                t[i][j]=min((f1+2*f2),(f2+2*f1));
            }else{
                int minimum=INT_MAX;
                int sum=prefixSum[j]-(i==0?0:prefixSum[i-1]);//[a'+b'+c'+...]

                for(k=i;k<=j;k++){
                    int left=k==i?0:t[i][k-1];
                    int right=k==j?0:t[k+1][j];

                    minimum=min(minimum,(left+right+sum));
                }
                t[i][j]=minimum;
            }
        }
    }
    return t[0][n-1];
}

int main(){
    int nodes[]={10,12,20};
    int freq[]={34,8,50};
    int n=sizeof(nodes)/sizeof(nodes[0]);
    cout<<"Cost of Optimal BST is "<<optimalBST(nodes,freq,n)<<"\n";
    return 0;
}
