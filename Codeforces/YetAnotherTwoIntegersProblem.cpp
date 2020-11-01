//YetAnotherTwoIntegersProblem

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli a,b,diff,steps;

        cin>>a>>b;
        diff=abs(a-b);
        steps=diff%10==0?diff/10:(diff/10+1);

        cout<<steps<<"\n";
    }

    return 0;
}
