//Generate all binary strings

#include<bits/stdc++.h>
using namespace std;

void binaryString(string s,int i){
    if(i==s.length()){
        cout<<s<<"\n";
        return;
    }

    if(s[i]=='?'){
        s[i]='0';
        binaryString(s,i+1);

        s[i]='1';
        binaryString(s,i+1);
    }else{
        binaryString(s,i+1);
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,j,l;
	string s;

	cin>>s;
	binaryString(s,0);
}
