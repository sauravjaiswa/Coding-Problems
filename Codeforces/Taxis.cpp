//Taxi

#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i;
    cin>>n;
    int s[n],freq[5];
    
    for(i=0;i<5;i++)
    freq[i]=0;
    
    for(i=0;i<n;i++){
    	cin>>s[i];
    	freq[s[i]]=freq[s[i]]+1;
	}
	
	int temp,count=0;
	count=freq[4]+freq[3]+freq[2]/2;
	freq[1]=freq[1]-freq[3];
	
	if(freq[2]%2!=0){
		count=count+1;
		freq[1]=freq[1]-2;
	}
	if(freq[1]>0){
		count=count+freq[1]/4;
	}
	if(freq[1]>0&&freq[1]%4!=0)
	count+=1;
	
	cout<<count;
}
