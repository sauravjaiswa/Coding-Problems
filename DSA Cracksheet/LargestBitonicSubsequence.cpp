//Largest Bitonic Subsequence

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int LongestBitonicSequence(int nums[],int n)
{
    // code here
    int i,j;
    int lis[n],lds[n];
    
    for(i=0;i<n;i++){
        lis[i]=lds[i]=1;
    }
    
    //For checking increasing subsequence
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(nums[i]>nums[j]&&lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    
    //For checking decreasing subsequence
    for(i=n-2;i>=0;i--){
        for(j=n-1;j>i;j--){
            if(nums[i]>nums[j]&&lds[i]<lds[j]+1)
                lds[i]=lds[j]+1;
        }
    }
    
    int ans=lis[0]+lds[0]-1;
    for(i=1;i<n;i++){
        if(ans<(lis[i]+lds[i]-1))
            ans=lis[i]+lds[i]-1;
    }
    
    return ans;
}

int main() 
{ 
  int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 
              13, 3, 11, 7, 15}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  printf("Length of LBS is %d\n", LongestBitonicSequence( arr, n ) ); 
  return 0; 
} 