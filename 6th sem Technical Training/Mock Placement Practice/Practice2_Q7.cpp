/**Suppose you are given an array of n integers, and you need to find all pairs of values in the array (if any) that sum to a given integer k.
write code that performs this task for you and outputs all of the pairs that it finds.
For example, if k is 12 and the array is {10, 4, 7, 7, 8, 5, 15}, your code should output something like the following:
All pairs should be unique, but input data can have duplicate values.

4+8=12

7+5=12**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

    char ch;
    do{
        lli n,i,j,value;
        unordered_map<lli,lli> mp;
        vector<pair<lli,lli>> res;

        cout<<"Enter size of array:\n";
        cin>>n;
        lli a[n];
        cout<<"Enter elements in array 1:\n";
        for(i=0;i<n;i++)
            cin>>a[i];

        cout<<"Enter value of k:\n";
        cin>>value;

        cout<<"The array is:\n";
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
            mp[a[i]]++;
        }
        cout<<"\n";

        for(i=0;i<n;i++){
            lli diff=value-a[i];
            if(mp[diff]>0){
                res.push_back({a[i],diff});
                mp[a[i]]=0;
                mp[diff]=0;
            }

        }

        cout<<"Pairs are ";
        for(i=0;i<res.size();i++){
            cout<<"("<<res[i].first<<", "<<res[i].second<<"), ";
        }
        cout<<"\n";

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}

