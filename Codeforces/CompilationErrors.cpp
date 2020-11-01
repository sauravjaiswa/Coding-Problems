//Compilation Errors

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,k=0,n;
    cin>>n;
    map<lli,lli> m;
    lli err1[n],err2[n-1],err3[n-2];
    vector<lli> ans;
    
    for(i=0;i<n;i++){
    	cin>>err1[i];
	}
	for(i=0;i<n-1;i++){
    	cin>>err2[i];
	}
	for(i=0;i<n-2;i++){
    	cin>>err3[i];
	}
	
	sort(err1,err1+n);
	sort(err2,err2+n-1);
	sort(err3,err3+n-2);
	
	for(i=0;i<n-1;i++){
		if(err1[i]!=err2[i]){
			ans.push_back(err1[i]);
		}
		if(ans.size()==1)
			break;
	}
	
	if(ans.size()==0){
		ans.push_back(err1[n-1]);
	}
	
	for(i=0;i<n-2;i++){
		if(err2[i]!=err3[i]){
			ans.push_back(err2[i]);
		}
		if(ans.size()==2)
			break;
	}
	
	if(ans.size()==1){
		ans.push_back(err2[n-2]);
	}
	
	cout<<ans[0]<<endl<<ans[1]<<endl;
}
