//XOR Sums

#include<bits/stdc++.h>
#define lli long long int
#define M 998244353
using namespace std;

void setBits(lli n,vector<lli> &ones,vector<lli> &zeroes,lli bits){
    lli cnt=0,k=0;
    while(bits--){
        if(n&1){
            ones[k]++;
            cnt++;
        }else{
            zeroes[k]++;
        }
        k++;

        n>>=1;

    }
}

lli factorial(lli n) {
    lli f=1;
    lli i;
    for(i=2;i<=n;i++)
        f=(f*i)%M;
    return f;
}

lli nCr(lli n,lli r) {
    return factorial(n)/((factorial(r)*factorial(n- r)%M));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,j,k,n,q,m,l;
    cin>>n;
    lli a[n],xors[n],sum=0,maxi=INT_MIN,bits;

    for(i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }

    bits=log2(maxi)+1;
    vector<lli> ones(bits,0);
    vector<lli> zeroes(bits,0);

    for(i=0;i<n;i++){
        setBits(a[i],ones,zeroes,bits);
    }

    /*for(i=0;i<bits;i++)
        cout<<ones[i]<<" ";
    cout<<"\n";
    for(i=0;i<bits;i++)
        cout<<zeroes[i]<<" ";
    cout<<"\n";*/


    cin>>q;
    for(k=1;k<=q;k++){
        cin>>m;

        sum=0;

        for(i=1;i<=m;i++){
            for(j=0;j<bits;j++){
                //cout<<"J:"<<j<<"\n";
                lli temp1=nCr(ones[j],1);
                lli temp2=nCr(zeroes[j],m-i);
                sum=(sum+((temp1*temp2*(lli)pow(2,j))%M))%M;
            }
        }

        cout<<sum<<"\n";
    }

    return 0;
}
