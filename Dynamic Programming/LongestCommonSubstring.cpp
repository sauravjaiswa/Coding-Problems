//Longest Common Substring

#include<bits/stdc++.h>
using namespace std;

int longestCommonSubstring(string x,string y){
    int m,n,i,j;
    m=x.length();
    n=y.length();
    int t[m+1][n+1];

    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(x[i-1]==y[j-1])
                t[i][j]=t[i-1][j-1]+1;
            else
                t[i][j]=0;
        }
    }

    int maxi=INT_MIN;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(t[i][j]>maxi)
                maxi=t[i][j];
        }
    }

    return maxi;
}

int main()
{
    string x="AREBCDE";
    string y="jhdchvhfjAREBFCE";

    int m=x.length();
    int n=y.length();

    cout<<"Length of Longest Common Substring is: "<<longestCommonSubstring(x,y)<<"\n" ;
    return 0;
}
