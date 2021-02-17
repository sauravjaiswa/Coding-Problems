//Prime Game

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool isprime(lli n)
{
    lli i;
    if(n<=1)
        return false;

    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i;
    lli primeCount[1000001];
    primeCount[0]=primeCount[1]=0;

    lli t;
    cin>>t;

    // cout<<primeCount[0]<<" "<<primeCount[1]<<" ";
    for(i=2;i<1000001;i++){
        if(isprime(i))
            primeCount[i]=primeCount[i-1]+1;
        else
            primeCount[i]=primeCount[i-1];

        // cout<<i<<" : "<<primeCount[i]<<" ";
    }
    // cout<<"\n";

    while(t--){
        lli x,y;
        cin>>x>>y;

        if(primeCount[x]>y)
            cout<<"Divyam\n";
        else
            cout<<"Chef\n";

    }
    return 0;
}
