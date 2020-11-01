//ProblemB

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
    	lli a[n],b[n],min1,min2,change1,change2,change=0;
    	
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	for(i=0;i<n;i++)
    	cin>>b[i];
    	
    	min1=*min_element(a,a+n);
    	min2=*min_element(b,b+n);
    	
    	for(i=0;i<n;i++){
    		change1=change2=0;
    		
    		if(a[i]>min1)
    		change1=a[i]-min1;
    		
    		if(b[i]>min2)
    		change2=b[i]-min2;
    		
    		change+=max(change1,change2);
		}
		cout<<change<<"\n";
    }
}
