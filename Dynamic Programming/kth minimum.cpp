//k-th minimum element in array in O(n) time.

#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int *t=a;
    a=b;
    b=t;
}

int _partition(int a[],int s,int e,int pivot)
{
    int i,j;
    for(i=s;i<e;i++)
        if(a[i]==pivot)
           break;
    swap(&a[i],&a[e]);

    i=s;
    for(j=s;j<=e-1;j++)
    {
        if(a[j]<=pivot)
        {
            swap(&a[i],&a[j]);
            i++;
        }
    }
    swap(&a[i],&a[e]);
    return i;
}

int findMedian(int a[],int n){
    sort(a,a+n);
    return a[n/2];
}

int kthSmallest(int a[],int s,int e,int k){
    if(k>0&&k<=(e-s+1)){
        int n=e-s+1;

        int i,median[(n+4)/5];
        for(i=0;i<n/5;i++)
            median[i]=findMedian(a+s+(i*5),5);
        if(i*5<n)
        {
            median[i]=findMedian(a+s+i*5,n%5);
            i++;
        }

        int medOfMed=(i==1)?median[i-1]:kthSmallest(median,0,i-1,i/2);

        int pivot=_partition(a,s,e,medOfMed);

        if(k-1==pivot-s)
            return a[pivot];
        else if(k-1>pivot-s)
            return kthSmallest(a,pivot+1,e,k);
        else
            return kthSmallest(a,s,pivot-1,k);
    }
    return -1;
}

int main(){
    int a[]={12, 3, 5, 7, 4, 19, 26};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    cout<<"K'th smallest element is "<<kthSmallest(a,0,n-1,k);

    return 0;
}
