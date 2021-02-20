//Minimum Ties

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli n,i,j,totalGames,k=0,limit;
        cin>>n;
        vector<lli> v;
        map<lli,lli> scores;

        totalGames=n*(n-1)/2;
        limit=totalGames/n;

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(k>limit){
                    v.push_back(0);
                }else{
                    if(scores[i]<=scores[j]){
                        scores[i]++;
                        v.push_back(1);
                    }else{
                        scores[j]++;
                        v.push_back(-1);
                    }
                }
                k++;
            }
        }

        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
