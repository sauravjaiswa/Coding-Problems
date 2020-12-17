//String Generation

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int i,n,x;
        cin>>n>>x;
        string ns="";

        for(i=0;i<x;i++)
            ns+='a';
        for(i=0;i<(n-x);i++){
            if(i%3==0)
                ns+='c';
            else if(i%3==1)
                ns+='b';
            else
                ns+='a';
        }

        cout<<ns<<"\n";
    }
    return 0;
}
