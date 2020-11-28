//Calculate square of a number without using *, / and pow()

#include<bits/stdc++.h>
using namespace std;

int square(int n){
    if(n==0)
        return 0;
    if(n<0)
        n=-n;

    int x=n>>1;//Calculates floor(n/2)
    if((n&1)==1)
        return ((square(x)<<2)+(x<<2)+1);
    else
        return (square(x)<<2);
}

int main(){
    int n;
    cin>>n;

    cout<<square(n);
}
