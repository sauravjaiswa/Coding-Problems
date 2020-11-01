//ProblemB94

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	lli p,f,s,w,cnts,cntw,i,s1,s2,w1,w2,total,ans=0;

    	cin>>p>>f;
    	cin>>cnts>>cntw;
    	cin>>s>>w;

    	if(s>w){
            swap(s,w);
            swap(cnts,cntw);
    	}

    	for(i=0;i<=min(cnts,p/s);i++){
            s1=i;
            w1=min(cntw,(p-(s*s1))/w);
            s2=min(cnts-s1,f/s);
            w2=min(cntw-w1,(f-(s*s2))/w);
            total=s1+s2+w1+w2;
            ans=max(ans,total);
    	}

    	cout<<ans<<"\n";
	}
}
