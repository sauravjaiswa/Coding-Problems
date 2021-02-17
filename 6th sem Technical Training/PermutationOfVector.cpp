//Write a program to compute all the permutations of a given vector which contains N integers. The value of N must be at least 5.

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void show(vector<lli> v){
    lli i;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}

void permutations(vector<lli> v){
    sort(v.begin(),v.end());
    show(v);
    //lli c=2;
    while(next_permutation(v.begin(),v.end())){
        //cout<<c<<"\n";
        //c++;
        show(v);
    }
}

int main(){

    lli i,n;
    do{
        cout<<"Enter size (must be atleast 5):\n";
        cin>>n;

        if(n<5)
            cout<<"Reenter the size\n";
    }while(n<5);

    vector<lli> v(n);

    cout<<"Enter elements in vector:\n";
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"All the possible permutations are:\n";
    permutations(v);

    return 0;
}
