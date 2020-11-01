#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

int wildcardMatching(string s1,string s2,int m,int n){

    if(m<0&&n<0)
        return 1;

    if(m<0)
        return 0;

    if(n<0){

        while(m>=0){
            if(s1[m]!='*')
                return 0;
            m--;
        }
        return 1;
    }

    if(t[m][n]!=-1)
        return t[m][n];

    if(s1[m]=='*')
        return t[m][n]=wildcardMatching(s1,s2,m-1,n)||wildcardMatching(s1,s2,m,n-1);
    else{
        if(s1[m]==s2[n]||s1[m]=='?')
            return t[m][n]=wildcardMatching(s1,s2,m-1,n-1);
        else
            return t[m][n]=0;
    }

}

int main() {
	//code
	int test;
	cin>>test;

	while(test--){
	    string s1,s2;
	    int m,n;

	    cin>>s1;
	    cin>>s2;

	    m=s1.length();
	    n=s2.length();

	   // t=new bool[m+1][n+1];

        memset(t,-1,sizeof(t));


        t[m][n]=wildcardMatching(s1,s2,m-1,n-1);

	    if(t[m][n])
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	}
	return 0;
}
