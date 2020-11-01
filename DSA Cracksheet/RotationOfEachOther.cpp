//Rotations of each other or not
//https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    int i,j,m,n;
    cin>>s1;
    cin>>s2;
    m=s1.length();
    n=s2.length();

    if(m!=n)
        cout<<"No\n";
    else{
        string temp=s1+s1;

        if(temp.find(s2)!=string::npos)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
