//Balls of Steel

#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.first==b.first)
        return (a.second<b.second);
    return a.first<b.first;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,k;
        cin>>n>>k;

        vector<pair<int,int>> v;
        for(i=0;i<n;i++){
            int x,y;
            cin>>x>>y;

            v.push_back({x,y});
        }

        sort(v.begin(),v.end(),sortbysec);

        int x1,y1,x2,y2,cnt=0,f=0;


        for(i=0;i<n;i++){
            cnt=0;
            for(j=0;j<n;j++){
                if(i!=j){
                    x1=v[i].first;
                    y1=v[i].second;

                    x2=v[j].first;
                    y2=v[j].second;

                    int d=abs(x1-x2)+abs(y1-y2);

                    if(d<=k)
                        cnt++;
                }
            }
            if(cnt==n-1){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"1\n";
        }else
            cout<<"-1\n";

    }
}
