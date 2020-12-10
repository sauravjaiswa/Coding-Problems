//Write code for longest common subsequence , also dry run it with the help of suitable test case.
//Note : Give complexity analysis also

#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2){
    int m,n,i,j;
    m=s1.length();
    n=s2.length();
    int t[m+1][n+1];

    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0||j==0)
                t[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }

    return t[m][n];
}

int main(){
    string s1,s2;
    cout<<"Enter first string:\n";
    cin>>s1;
    cout<<"Enter second string:\n";
    cin>>s2;

    cout<<"Length of the longest common subsequence(LCS) of both strings is : "<<lcs(s1,s2)<<"\n";

    return 0;
}
