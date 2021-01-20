//Different Divisors

#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    int i,flag=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return true;
    else
        return false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int i,d,a=1;
        cin>>d;

        int ans=a;
        int num=a+d;
        while(prime(num)==false){
            num++;
        }
        ans*=num;
        num=num+d;
        while(prime(num)==false){
            num++;
        }
        ans*=num;
        cout<<ans<<"\n";
    }

    return 0;
}
