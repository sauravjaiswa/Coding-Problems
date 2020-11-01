//ProblemB

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        string s;
        int i,j,l,cnt=0;

        cin>>s;
        l=s.length();
        vector<int> v;

        for(i=0;i<l;i++){
            if(s[i]=='1'){
                cnt++;
            }else{
                v.push_back(cnt);
                cnt=0;
            }
            if(i==l-1&&cnt>0)
            v.push_back(cnt);
        }

        sort(v.begin(),v.end(),greater<int>());
        cnt=0;
        for(i=0;i<v.size();i+=2){
            //cout<<v[i]<<" ";
            cnt+=v[i];
        }
        //cout<<"\n";
        cout<<cnt<<"\n";
    }
}
