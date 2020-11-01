//Combinations

#include<bits/stdc++.h>
using namespace std;

vector<string> result;
string s;
void combinations(int i,string ns){
    if(s.length()==i){
        result.push_back(ns);
        return;
    }
    char ch=s[i];
    combinations(i+1,ns+ch);
    combinations(i+1,ns);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>s;
	combinations(0,"");
	int i;
	for(i=0;i<result.size();i++)
        cout<<result[i]<<"\n";
}
