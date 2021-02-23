//Card Deck

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        lli n,i,j;
        cin>>n;
        lli a[n];
        bool visited[n+1]={false};
        priority_queue<lli> pq;
        vector<lli> temp;
        vector<vector<lli> > res;

        for(i=0;i<n;i++){
            cin>>a[i];
            pq.push(a[i]);
        }

        for(i=n-1;i>=0;i--){
            while(visited[pq.top()]){
                pq.pop();
            }

            if(a[i]!=pq.top()){
                visited[a[i]]=true;
                temp.push_back(a[i]);
            }else{
                visited[a[i]]=true;
                temp.push_back(a[i]);
                reverse(temp.begin(),temp.end());

                res.push_back(temp);
                temp.clear();
            }
        }

        for(i=0;i<res.size();i++){
            for(j=0;j<res[i].size();j++){
                cout<<res[i][j]<<" ";
            }
        }

        cout<<"\n";
    }
}
