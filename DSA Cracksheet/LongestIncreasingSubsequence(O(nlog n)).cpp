//Largest Increasing Subsequence

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int ceilIndex(int a[],int activeList[],int s,int e){
    int mid;
    int start=0;
    int end=e;
    while(start<=end){
        mid=(start+end)/2;
        if(mid<e&&a[activeList[mid]]<s&&s<=a[activeList[mid+1]]){
            return mid+1;
        }else if(a[activeList[mid]]<s){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

// return length of longest strictly increasing subsequence

int longestSubsequence(int n, int a[])
{
   // your code here
   int i,j,indx,activeList[n],len,elements[n];
   
    for(i=0;i<n;i++)
        elements[i]=-1;
        
    // for(i=1;i<n;i++){
    //     for(j=0;j<i;j++){
    //         if(a[i]>a[j]&&lis[i]<lis[j]+1){
    //             lis[i]=lis[j]+1;
    //         }
    //     }
    // }
    
    // return *max_element(lis,lis+n);
    
    activeList[0]=0;
    len=0;
    for(i=1;i<n;i++){
        if(a[activeList[0]]>a[i]){//if a[i] is less than minimum value in the active list
            activeList[0]=i;
        }else if(a[activeList[len]]<a[i]){//if a[i] is greater than maximum value in the active list
            len++;
            activeList[len]=i;
            elements[activeList[len]]=activeList[len-1];
        }else{//if a[i] doesn't belongs to any of the above ranges
            indx=ceilIndex(a,activeList,a[i],len);
            activeList[indx]=i;
            elements[activeList[indx]]=activeList[indx-1];
        }
    }
    
    return (len+1);
    
}

int main() 
{ 
  int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 
              13, 3, 11, 7, 15}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  printf("Length of LIS is %d\n", longestSubsequence( n,arr ) ); 
  return 0; 
} 