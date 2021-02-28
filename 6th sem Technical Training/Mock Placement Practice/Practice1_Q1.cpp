/*Write a program to find greatest common integer from two unordered list of integers.
Test Case 1:
1 3 5 7 9
The array2 is
4 8 12 16 20 22
 No common integer in two arrays.

-----------------------

Test Case 2:
The array1 is
11 2 4
The array2 is
9 2 3 7
The greatest common integer is 2

------------------------

Test Case 3:
The array1 is
3 14 6 1 8 13 2
The array2 is
1 10 2 4 13 11 0
The greatest common integer is 13*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli greatestCommonInteger(lli a1[],lli a2[],lli m,lli n){
    unordered_map<lli,lli> mp;
    lli i,j,maxi=LONG_MIN;

    for(i=0;i<m;i++){
        mp[a1[i]]++;
    }

    for(i=0;i<n;i++){
        if(mp[a2[i]]>0){
            if(a2[i]>maxi)
                maxi=a2[i];
        }
    }

    return maxi;
}

int main(){

    char ch;
    do{
        lli m,n,i,j;
        cout<<"Enter size of array 1 and array 2 respectively:\n";
        cin>>m>>n;
        lli a1[m],a2[n],gci;
        cout<<"Enter elements in array 1:\n";
        for(i=0;i<m;i++)
            cin>>a1[i];
        cout<<"Enter elements in array 2:\n";
        for(i=0;i<n;i++)
            cin>>a2[i];

        cout<<"The array 1 is:\n";
        for(i=0;i<m;i++)
            cout<<a1[i]<<" ";
        cout<<"\n";
        cout<<"The array 2 is:\n";
        for(i=0;i<n;i++)
            cout<<a2[i]<<" ";
        cout<<"\n";

        gci=greatestCommonInteger(a1,a2,m,n);
        if(gci==LONG_MIN){
            cout<<"No common integer in two arrays.\n";
        }else{
            cout<<"The greatest common integer is "<<gci<<"\n";
        }

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
