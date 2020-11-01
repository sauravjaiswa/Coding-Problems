//Split the binary string into substrings with equal number of 0s and 1s
//https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int i,n,c0,c1,cnt;
    c0=c1=cnt=0;
    n=s.length();

    for(i=0;i<n;i++){
        if(s[i]=='0')
            c0++;
        else if(s[i]=='1')
            c1++;

        if(c0==c1){
            cnt++;
            c0=c1=0;
        }
    }

    cout<<cnt<<"\n";
}
