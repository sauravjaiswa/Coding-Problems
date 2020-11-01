//ProblemC

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
    	int n,i,j;
    	cin>>n;
    	int w[n],dp[n][n],i,j;
    	
    	for(i=0;i<n;i++)
    	cin>>w[i];
    	
    	for(i=0;i<n;i++){
    		for(j=0;j<n;j++){
    			if(w[i]==w[j])
    				dp[i][j]=0;
    			else
    				dp[i][j]=w[i]+w[j];
			}
		}
		
		int max=INT_MIN;
		unordered_map<int,int> map;
		
		for(i=0;i<n;i++){
    		for(j=0;j<n;j++){
    			if(dp[i][j]!=0)
    			map[dp[i][j]]++;
			}
		}
		
		unordered_map<int> :: iterator itr;
    	for (itr=map.begin(); itr !=map.end(); itr++){
    		if(max>map[*itr])
    		max=[*itr];
		}
		cout<<max<<"\n";
    }
}
