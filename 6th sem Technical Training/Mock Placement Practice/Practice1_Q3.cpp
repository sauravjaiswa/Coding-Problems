/*Create two binary arrays, A and B, which should contain only 0s and 1s, each of size N. Write a function find_index, to find indices i, j
in such a manner, that sum of elements from i to j in both arrays is equal and the difference j-i [length of the set I,j] is maximum possible value.*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

pair<lli,lli> find_index(lli arr1[],lli arr2[],lli n) {
    // code here
    lli i,j,preSum[n],s=0,maxi=0,starting,ending;
    unordered_map<lli,lli> mp;

    for(i=0;i<n;i++){
        preSum[i]=arr1[i]-arr2[i];
    }

    for(i=0;i<n;i++){
        s+=preSum[i];

        if(s==0)
            maxi=i+1;

        if(mp.find(s)!=mp.end()){
            if((i-mp[s])>maxi){
                maxi=i-mp[s];
                starting=mp[s]+1;
                ending=i;
            }
        }else{
            mp[s]=i;
        }
    }

    return {starting,ending};
}

int main(){

    char ch;
    do{
        lli m,n,i,j;
        cout<<"Enter size of array:\n";
        cin>>n;
        lli a1[n],a2[n];
        cout<<"Enter elements in array 1:\n";
        for(i=0;i<n;i++)
            cin>>a1[i];
        cout<<"Enter elements in array 2:\n";
        for(i=0;i<n;i++)
            cin>>a2[i];

        cout<<"The array 1 is:\n";
        for(i=0;i<n;i++)
            cout<<a1[i]<<" ";
        cout<<"\n";
        cout<<"The array 2 is:\n";
        for(i=0;i<n;i++)
            cout<<a2[i]<<" ";
        cout<<"\n";

        cout<<"The start and end indices are:\n";
        pair<lli,lli> p=find_index(a1,a2,n);
        cout<<"Start index : "<<p.first<<"\n"<<"End index : "<<p.second<<"\n";

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
