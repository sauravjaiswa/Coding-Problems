//Mobile Numeric Keypad
//https://www.geeksforgeeks.org/convert-sentence-equivalent-mobile-numeric-keypad-sequence/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ans="";
    char ch;
    int i,j,n;
    getline(cin,s);
    n=s.length();

    for(i=0;i<n;i++){
        ch=s[i];

        if(ch==' ')
            ans+='0';
        else if(ch<='O'){
            int num=(ch-'A')/3+2;
            int freq=(ch-'A')%3+1;

            for(j=1;j<=freq;j++)
                ans+=(char)(num+'0');

        }else if(ch<='S'){
            int freq=(ch-'P')+1;

            for(j=1;j<=freq;j++)
                ans+='7';

        }else if(ch<='V'){
            int freq=(ch-'T')+1;

            for(j=1;j<=freq;j++)
                ans+='8';
        }else{
            int freq=(ch-'W')+1;

            for(j=1;j<=freq;j++)
                ans+='9';
        }
    }

    cout<<ans<<"\n";

    return 0;
}
