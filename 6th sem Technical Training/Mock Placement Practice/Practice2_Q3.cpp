/**Write a method named findIntersect() that takes two unsorted arrays of integers as parameters and uses an approach based on merging to find and
return the intersection of the two arrays. The order of elements remains unchanged.
Sample Test Case: A
Array1 = { 7, 1, 5, 2, 3, 6 };
Array2 = { 3, 8, 6, 20, 7 };

Intersection array = {7,3,6}**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

    char ch;
    do{
        lli m,n,i,j,maxi=0,diff;

        cout<<"Enter size of array 1:\n";
        cin>>m;
        cout<<"Enter size of array 2:\n";
        cin>>n;
        lli a[m],b[n];

        unordered_map<lli,lli> mp;
        vector<lli> common;

        cout<<"Enter elements in array 1:\n";
        for(i=0;i<m;i++){
            cin>>a[i];
            mp[a[i]]++;
        }

        cout<<"Enter elements in array 2:\n";
        for(i=0;i<n;i++){
            cin>>b[i];

            if(mp[b[i]]>0){
                common.push_back(b[i]);
                mp[b[i]]--;
            }
        }

        cout<<"Intersection array:\n";
        for(i=0;i<common.size();i++){
            cout<<common[i]<<" ";
        }
        cout<<"\n";


        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}

