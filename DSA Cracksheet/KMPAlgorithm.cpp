//KMP Algorithm
//https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/
//https://www.youtube.com/watch?v=7RRE-YEOjk8

#include<bits/stdc++.h>
using namespace std;

void buildLps(int lps[],string pattern){
    int n=pattern.length();
    int i,j;
    lps[0]=-1;
    i=0;
    j=-1;

    while(i<n){
        while(j>=0 && pattern[i]!=pattern[j])
            j=lps[j];

        i++;
        j++;
        lps[i]=j;
    }
}

void kmpSearch(string txt,string pattern,int lps[]){
    int m,n,i,j;

    buildLps(lps,pattern);

    m=txt.length();
    n=pattern.length();
    i=j=0;
    while(i<m){
        while(j>=0 && txt[i]!=pattern[j])
            j=lps[j];

        i++;
        j++;

        if(j==n){
            cout<<"Pattern is found at : "<<(i-j)<<"\n";
            j=lps[j];
        }
    }
}

int main(){
    string txt,pattern;
    cin>>txt;
    cin>>pattern;

    int lps[pattern.length()]={-1};

    kmpSearch(txt,pattern,lps);

    return 0;
}
