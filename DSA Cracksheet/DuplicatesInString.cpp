//Duplicates in a string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i,j,n;
    getline(cin,s);
    n=s.length();
    int freq[256]={0};

    for(i=0;i<n;i++){
        freq[s[i]]++;
    }

    for(i=0;i<n;i++){
        if(freq[s[i]]>1)
            cout<<s[i]<<" --> "<<freq[s[i]]<<"\n";
        freq[s[i]]=0;
    }
    return 0;
}
