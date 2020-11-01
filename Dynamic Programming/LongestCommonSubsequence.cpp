//Longest Common Subsequence

#include<bits/stdc++.h>
using namespace std;

int lcs(string x,string y,int m,int n){
    if(m==0||n==0)
        return 0;

    if(x[m-1]==y[n-1])
        return 1+lcs(x,y,m-1,n-1);
    else
        return max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));
}

string lcs(string str1,string str2){
    int m,n,i,j;
    m=str1.length();
    n=str2.length();
    int t[m+1][n+1];

    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(str1[i-1]==str2[j-1])
                t[i][j]=1+t[i-1][j-1];
            else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }

    i=m;j=n;
    string s="";
    while(i>0&&j>0){
        if(str1[i-1]==str2[j-1]){
            s+=str1[i-1];
            i--;
            j--;
        }else{
            if(t[i][j-1]>t[i-1][j])
                j--;
            else
                i--;
        }
    }

    char ch;
    for(i=0;i<s.length()/2;i++){
        ch=s[i];
        s[i]=s[s.length()-i-1];
        s[s.length()-i-1]=ch;
    }

    return s;
}

int main()
{
    string x="AGGTAB";
    string y="GXTXAYB";

    int m=x.length();
    int n=y.length();

    cout<<"Length of LCS is: "<<lcs(x,y,m,n)<<"\n" ;
    cout<<"LCS: "<<lcs(x,y);

    return 0;
}
