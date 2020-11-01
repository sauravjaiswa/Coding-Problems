//Minimum characters to be added at front to make string palindrome
//https://www.geeksforgeeks.org/minimum-characters-added-front-make-string-palindrome/

#include<bits/stdc++.h>
using namespace std;

int addFront(string s){
    int n,i,j,mid;
    int f=0;
    n=s.length();

    if(n==1)
        return 0;
    if(n==2){
        if(s[0]!=s[1])
            return 1;
    }

    mid=n/2;
    while(mid>0){
        f=0;
        while(mid>=1 && s[mid-1]!=s[mid+1]&&s[mid]!=s[mid-1])
            mid--;

        if(mid>0){
            for(i=mid-1;i>0;i--){
                if(s[i]!=s[i-1]&&s[i]!=s[2*mid-1]){
                    mid=i;
                    f=1;
                    break;
                }
            }
        }

        if(f==0)
            break;
    }

    if(mid==0||s[mid-1]==s[mid+1])
        return (n-1)-2*mid;
    else
        return (n-2*mid);
}

int main(){
    int n;
    string s,s1;
    cin>>s;
    n=s.length();

    cout<<addFront(s)<<"\n";

    return 0;
}
