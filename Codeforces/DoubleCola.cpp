//Double Cola

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,pos;
    cin>>n;
    string names[5]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    
    if(n<=5)
    n=n-1;
    else{
    	int p=(int)log2(n);
	}
    
    pos=n%6;
    cout<<names[pos];
}
