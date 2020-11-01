//K-Palindrome(Codeblocks)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k,l,i;
		vector<int> diff;

		cin>>s;
		cin>>k;
		l=s.length();

		for(i=0;i<l/2;i++){
			diff.push_back(abs(s[i]-s[l-i-1]));
		}

		if(l%2!=0)
			diff.push_back(0);

		int cnt=k/2;
		int sum=0;

		while(cnt>0){
			//cout<<diff[cnt]<<"\n";
			sum+=diff[cnt];
			cnt--;
		}

		cout<<sum<<"\n";
	}
}
