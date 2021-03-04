/*Write a program to find all pairs of integers in an array, which sums to a specified value.
Test Case 1:
For the given array :
 1 1 1 2 0 2 2 3 4 5 5 -1 -2 -3
value = -4
 Pair is (-1, -3)

Test Case 2:
For the given array :
 1 1 1 2 0 2 2 3 4 5 5 -1 -2 -3
value = -3
Pairs are (0, -3), (-1,-2)*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli binarySearch(lli a[],lli x,lli s,lli e){
    while(s<e){
        lli mid=(s+e)/2;
        if(x==a[mid]){
            return mid;
        }else if(x<a[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }

    }
    return -1;
}

int main(){

    char ch;
    do{
        lli n,i,j,value;

        cout<<"Enter size of array:\n";
        cin>>n;
        lli a[n];
        cout<<"Enter elements in array:\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter value needed:\n";
        cin>>value;

        sort(a,a+n);

        i=0;
        j=n-1;

        cout<<"Pairs approach 2:\n";
        while(i<j){
            if(a[i]+a[j]==value){
                cout<<a[i]<<", "<<a[j]<<"\n";
                i++;
                j--;
            }else if(a[i]+a[j]<value){
                i++;
            }else{
                j--;
            }
        }

        cout<<"Pairs approach 2:\n";
        for(i=0;i<n;i++){
            lli diff=value-a[i];
            if(binarySearch(a,diff,0,n-1)!=-1&&binarySearch(a,diff,0,n-1)!=i){
                cout<<a[i]<<", "<<diff<<"\n";
            }
        }

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
