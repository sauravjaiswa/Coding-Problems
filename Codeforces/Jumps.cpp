//Jumps

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        int x,root;
        cin>>x;

        root=((int)sqrt(1+(4*2*x))-1)/2;
        int temp=root*(root+1)/2;

        //cout<<"ROOT: "<<root<<"\n";

        if(temp==x){
            cout<<(int)root<<"\n";
        }else{
            temp=(root+1)*(root+2)/2;
            if((temp-x)!=1)
                cout<<root+1<<"\n";
            else
                cout<<root+2<<"\n";
        }
	}
}
