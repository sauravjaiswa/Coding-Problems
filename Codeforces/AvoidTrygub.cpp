//Avoid Trygub

#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2)
{
    int m,n,i,j;
    m=s1.length();
    n=s2.length();
   int dp[m+1][n+1];

   for(i=0;i<=m;i++)
   {
     for(j=0;j<=n;j++)
     {
       if (i == 0 || j == 0)
         dp[i][j] = 0;

       else if(s1[i-1]==s2[j-1])
         dp[i][j]=dp[i-1][j-1]+1;

       else
         dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
     }
   }

   return dp[m][n];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,freq[27];
        cin>>n;
        string s1,s2,rev="",ns="";
        cin>>s1;
        s2="trygub";


        int cnt=0;
        for(i=0;i<n;i++){
            if(s1[i]=='t'){
                cnt++;
            }else{
                ns+=s1[i];
            }
        }
        for(i=0;i<cnt;i++)
            ns+='t';

        cout<<ns<<"\n";
    }
}
