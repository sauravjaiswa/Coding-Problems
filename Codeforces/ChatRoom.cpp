//Chat room

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s,ns="hello";
	int l,i,j=0,f=0;
	
	cin>>s;
	l=s.size();
	
	while(i<l){
		if(s[i]==ns[j]){
			i++;
			j++;
		}else{
			i++;
		}
		if(j==ns.size())
		f=1;
	}
	
	if(f==1)
	cout<<"YES";
	else
	cout<<"NO";
}
