//Robot Program


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int x,y;

        cin>>x>>y;

        if(x==y)
            cout<<x+y<<"\n";
        else
            cout<<max(x,y)*2-1<<"\n";
    }

    return 0;

}
