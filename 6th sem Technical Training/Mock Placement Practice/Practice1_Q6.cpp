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

int main(){

    char ch;
    do{
        lli n,i,j,value;
        unordered_map<lli,lli> mp;
        vector<pair<lli,lli>> res;

        cout<<"Enter size of array:\n";
        cin>>n;
        lli a[n];
        cout<<"Enter elements in array:\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter value needed:\n";
        cin>>value;

        for(i=0;i<n;i++){
            lli diff=value-a[i];

            if(mp.find(diff)!=mp.end()){
                for(j=0;j<mp[diff];j++){
                    res.push_back({a[i],diff});
                }
            }
            mp[a[i]]++;
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
