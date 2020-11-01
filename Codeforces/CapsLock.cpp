//Caps Lock

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	string s,ns="";
	int l,i,lo=0,hi=0;
	
	cin>>s;
	l=s.size();
	
	int pos=-1;
	for(i=0;i<l;i++){
		if(s[i]>='A'&&s[i]<='Z')
			hi++;
		else{
			lo++;
			pos=i;
		}
	}
	
	if(hi==l||(lo==1&&pos==0)){
		if(lo==1){
			ns=ns+(char)(s[0]-32);
			for(i=1;i<l;i++){
				ns=ns+(char)(s[i]+32);
			}
		}else{
			for(i=0;i<l;i++){
				ns=ns+(char)(s[i]+32);
			}
		}
	}else{
		ns=s;
	}
	
	cout<<ns;
}
