//Consecutive elements
//https://practice.geeksforgeeks.org/problems/consecutive-elements/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,i,j;
        string s;
        cin>>s;
        n=s.length();
        j=1;

        for(i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                s[j]=s[i];
                j++;
            }
        }

        for(i=0;i<j;i++)
        cout<<s[i];
        cout<<"\n";
    }

	//code
	return 0;
}
