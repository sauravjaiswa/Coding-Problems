//Ping Pong

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        int a,b;
        cin>>a>>b;

//        if(a<=b){
//            cout<<0<<" "<<b<<"\n";
//        }else{
//            cout<<(max(a,b)-min(a,b))<<" "<<min(a,b)<<"\n";
//        }
        cout<<a-1<<" "<<b<<"\n";
	}
}
