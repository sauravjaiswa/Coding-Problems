//Advertising Agency

#include<bits/stdc++.h>
#define lli unsigned long long int
#define mod 1000000007
using namespace std;

//Taken from codeforces solution need to understand logics behind these functions
lli fast_pow(lli a, lli p) {
  lli res = 1;
  while (p) {
    if (p % 2 == 0) {
      a = a * 1ll * a % mod;
      p /= 2;
    } else {
      res = res * 1ll * a % mod;
      p--;
    }
  }
  return res;
}

lli fact(lli n) {
  lli res = 1;
  for (lli i = 1; i <= n; i++) {
    res = res * 1ll * i % mod;
  }
  return res;
}

int C(int n, int k) {
  return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
	while(t--){
        lli n,k,i,j,tot=0,cnt=0;
        cin>>n>>k;
        int a[n];
        unordered_map<lli,lli> m;

        for(i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }

        for(i=n;i>=0;i--){
            if(m[i]>=k){
                cout<<C(m[i],k)<<"\n";
                //Simply evaluating nCk=n!/(n-k)!*k!
                break;
            }else{
                k=k-m[i];
            }
        }
	}

	return 0;
}
