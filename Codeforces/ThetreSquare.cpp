//Theatre square

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    lli n,m,a,c1,c2;
    cin>>n>>m>>a;
    
    if(m%a==0)
    c1=m/a;
    else
    c1=(m/a)+1;
    
    if(n%a==0)
    c2=n/a;
    else
    c2=(n/a)+1;
    
    cout<<(c1*c2)<<endl;
    return 0;
}
