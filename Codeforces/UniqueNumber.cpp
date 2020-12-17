//Unique Number

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli t;
    cin>>t;

    while(t--){
        lli n,i,j;
        cin>>n;
        vector<int> res;

        if(n>45)
            cout<<"-1\n";
        else{
            if(n<10){
                cout<<n<<"\n";
            }else{
                int cpy=n;
                int d=9;
                while(cpy!=0){
                    cpy=cpy-d;
                    res.push_back(d);

                    if(cpy<10&&(find(res.begin(),res.end(),cpy)==res.end())){
                        res.push_back(cpy);
                        cpy=0;
                    }
                    d--;
                }

                for(i=res.size()-1;i>=0;i--)
                    cout<<res[i];
                cout<<"\n";
            }
        }
    }

    return 0;
}
