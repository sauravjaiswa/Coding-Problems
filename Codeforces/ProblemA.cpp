//Problem A

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int n,temp,mini=INT_MAX,maxi=INT_MIN;
    	unordered_set<int> set;
    	vector<int> v;
    	cin>>n;
    	int a[n],i;

    	for(i=0;i<n;i++){
    		cin>>a[i];
    		//set.insert(a[i]);
		}

    	/*unordered_set<int> :: iterator itr;
    	for(itr=set.begin();itr!=set.end();itr++){
    		v.push_back(*itr);
		}

		temp=v[0];
		int flag=0;
		for(i=1;i<v.size();i++){
			if(abs(v[i-1]-v[i])==1)
			{
				temp=min(v[i-1],v[i]);
				v.resize(temp);
			}else{
				flag=1;
				break;
			}
		}

		if(flag==1||v.size()>1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;*/

		sort(a,a+n);
		int flag=0;
		for(i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])<=1)
                continue;
            else{
                flag=1;
                break;
            }
		}

		int diff=maxi-mini;
		if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
}
