//String Task

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s,ns="";
	int l,i;
	
	cin>>s;
	l=s.size();
	
	for(i=0;i<l;i++){
		if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
			ns=ns+'.';
			if(s[i]>='A'&&s[i]<='Z'){
				ns=ns+(char)(s[i]+32);
		 	}else{
				ns=ns+s[i];
			}
		}
	}
	
	cout<<ns;
}
