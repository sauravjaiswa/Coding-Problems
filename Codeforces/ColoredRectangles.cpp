//ProblemC

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int r,g,b,i,j,max1=INT_MIN,limit;
	cin>>r>>g>>b;
	int rr[r],gg[g],bb[b];
	vector<int> v;

	for(i=0;i<r;i++)
        cin>>rr[i];
	for(i=0;i<g;i++)
        cin>>gg[i];
	for(i=0;i<b;i++)
        cin>>bb[i];

    sort(rr,rr+r,greater<int>());
    sort(gg,gg+g,greater<int>());
    sort(bb,bb+b,greater<int>());

    max1=max(r,g);
    max1=max(max1,b);

    static int a[2001][2001];

    for(i=0;i<r;i++){
        a[rr[i]][i]++;
    }
    for(i=0;i<g;i++){
        a[gg[i]][i]++;
    }
    for(i=0;i<b;i++){
        a[bb[i]][i]++;
    }

    int tot=0;
    for(i=2000;i>=0;i--){
        for(j=2000;j>=0;j--){
            while(a[i][j]>0){
                tot=tot+(a[i][j]/2*i);
            }
        }
    }
    cout<<tot<<"\n";
}
