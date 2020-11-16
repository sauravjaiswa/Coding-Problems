//November 2020 Challenge
//Unusual Queries

#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,q,s,x,y,l,r,i,j;
    cin>>n>>q>>s;
    lli h[n],last=0,prefix[n+1],maxi;

    for(i=0;i<n;i++){
        cin>>h[i];
    }

    for(i=0;i<q;i++){
        lli satisfaction;
        cin>>x>>y;
        l=(x+(s*last)-1)%n;
        r=(y+(s*last)-1)%n;

        //cout<<l<<" "<<r<<"\n";
        if(l>r){
            int temp=l;
            l=r;
            r=temp;
        }

        lli prev=0,cnt=0,maxi,lastCnt=0;
        maxi=*(max_element(h+l,h+r+1));

        cout<<"MAX : "<<maxi<<"\n";
        //cout<<l<<" "<<r<<"\n";
        for(j=l;j<=r;j++){
            if(h[j]>prev){
                cnt++;

            }
            prev=h[j];

            if(h[j]==maxi){
                cnt=max(lastCnt,cnt);
                //prev=0;
                lastCnt=cnt;
                cnt=0;
            }
        }

        last=lastCnt;
        cout<<lastCnt<<"\n";

    }

}
