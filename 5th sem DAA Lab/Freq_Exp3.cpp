//Exp 3-Frequency of char in string

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
    int i;
	int freq[256]={0};
	
	cout<<"Enter a string:\n";
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	getline(cin,s);
	for(i=0;i<s.size();i++){
		freq[s[i]]=freq[s[i]]+1;
	}
	
	for(i=1;i<256;i++){
		if(freq[i]>0){
			cout<<(char)i<<"  "<<freq[i]<<endl;
		}
	}
}
