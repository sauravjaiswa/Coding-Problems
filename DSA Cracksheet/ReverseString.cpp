//Reverse a string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i,j,n;
    cin>>s;
    n=s.length();

    for(i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }

    cout<<s<<"\n";
    return 0;
}
