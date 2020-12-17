//Add to Neighbour and Remove

#include<bits/stdc++.h>
using namespace std;

vector<int> findFactors(int n){
    int i;
    vector<int> res;
    for(i=1;i<=n/2;i++){
        if(n%i==0)
            res.push_back(i);
    }
    res.push_back(n);

    return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n;
        cin>>n;
        int a[n],sum=0;

        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        vector<int> factors=findFactors(sum);
        //vector<int> ans;
        int mini=INT_MAX;
        for(i=factors.size()-1;i>=0;i--){
            int f=factors[i];
            int temp=0;
            int cnt=0;
            for(j=0;j<n;j++){
                temp=temp+a[j];
                cnt++;
                if(temp==f){
                    cnt--;
                    temp=0;
                }else if(temp>f){
                    cnt=INT_MAX;
                    break;
                }

            }
            //cout<<"FACTOR : "<<f<<"\n";
            //cout<<"CHECK : "<<temp<<"\n";
            //cout<<"COUNT : "<<cnt<<"\n";
            //ans.push_back(cnt);

            if(cnt<mini)
                mini=cnt;
        }
        //sort(ans.begin(),ans.end());
        cout<<mini<<"\n";
    }
}
