//Juggling Letters

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,i,j,flag=0;
        string s;
        int freq[26]={0};

        cin>>n;
        for(i=0;i<n;i++){
            cin>>s;
            for(j=0;j<s.length();j++){
                freq[s[j]-97]++;
            }
        }

        for(i=0;i<26;i++){
            if(freq[i]%n!=0){
                flag=1;
                break;
            }
        }

        if(flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
