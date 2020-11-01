//Shovels and Swords

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        lli a,b,minimum;
        cin>>a>>b;

        minimum=min(min(a,b),(a+b)/3);
        cout<<minimum<<"\n";
    }
}
