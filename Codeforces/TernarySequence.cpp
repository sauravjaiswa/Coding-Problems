//Ternary Sequence

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t,sum;
    cin>>t;
    while(t--){
        lli xyz[2][3],freq1[3],freq2[3],times,sum=0;

        cin>>xyz[0][0]>>xyz[0][1]>>xyz[0][2];
        cin>>xyz[1][0]>>xyz[1][1]>>xyz[1][2];

        times=min(xyz[0][0],xyz[1][2]);
        xyz[0][0]-=times;
        xyz[1][2]-=times;

        times=min(xyz[0][1],xyz[1][0]);
        xyz[0][1]-=times;
        xyz[1][0]-=times;

        times=min(xyz[0][2],xyz[1][1]);
        xyz[0][2]-=times;
        xyz[1][1]-=times;

        sum+=(2*times);
        times=min(xyz[0][1],xyz[1][2]);
        sum-=(2*times);
        cout<<sum<<"\n";
    }
}
