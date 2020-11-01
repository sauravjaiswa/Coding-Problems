//ProblemA

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
    	int n,l,i,j;
    	string s,ns="";
    	vector<string> v;

    	cin>>n;
    	cin>>s;

    	l=s.length();
    	for(i=0;i<n;i++){
            ns+=s[n-1];
    	}

    	cout<<ns<<"\n";
	}
}
