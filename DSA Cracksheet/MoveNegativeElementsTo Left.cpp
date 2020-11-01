//Move all the negative elements to one side of the array

#include<bits/stdc++.h>
using namespace std;

void shiftAll(int a[],int n){
    int left,right;
    left=0;
    right=n-1;

    while(left<right){
        if(a[left]<0 && a[right]<0){
            left++;
        }else if(a[left]>0 && a[right]<0){
            swap(a[left],a[right]);
            left++;
            right--;
        }else if(a[left]>0 && a[right]>0){
            right--;
        }else{
            left++;
            right--;
        }
    }
}

void display(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

int main(){
    int a[]={-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n=sizeof(a)/sizeof(a[0]);

    shiftAll(a,n);
    display(a,n);
    return 0;
}
