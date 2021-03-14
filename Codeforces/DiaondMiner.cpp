//Diamond Miner

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class Pair{
public:
    lli x,y;
    Pair(lli x,lli y){
        this->x=x;
        this->y=y;
    }
};

bool cmp(Pair p1,Pair p2){
    if(p1.x==p2.x)
        return p1.y<p2.y;

    return p1.x<p2.x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,j,n,x,y;
        double ans=0.0,area;

        cin>>n;
        vector<Pair> miners,mines;

        for(i=0;i<2*n;i++){
            cin>>x>>y;

            if(x==0)
                miners.push_back(Pair(x,y));
            if(y==0)
                mines.push_back(Pair(x,y));
        }

        sort(miners.begin(),miners.end(),cmp);
        sort(mines.begin(),mines.end(),cmp);

        for(i=0;i<n;i++){
            lli x1,y1,x2,y2;

            x1=miners[i].x;
            y1=miners[i].y;

            x2=mines[i].x;
            y2=mines[i].y;

            area=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

            ans=ans+area;
        }

        cout<<ans<<"\n";
    }

    return 0;
}
