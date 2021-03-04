//ABC String

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool checkBrackets(string s,char ch){
    lli i,n=s.length(),f=0;
    stack<char> st;

    for(i=0;i<n;i++)
    {
        if(s[i]==ch)
            st.push('(');
        else
        {
            if(st.empty()){
                return false;
            }else{
                st.pop();
            }
        }
    }

    return st.empty();

}

bool checkBracketsInv(string s,char ch){
    lli i,n=s.length(),f=0;
    stack<char> st;

    for(i=n-1;i>=0;i--)
    {
        if(s[i]==ch)
            st.push(')');
        else
        {
            if(st.empty()){
                return false;
            }else{
                st.pop();
            }
        }
    }

    return st.empty();

}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--){
        lli n,i,j,a,b,c;

        a=b=c=0;
        string s;
        cin>>s;
        n=s.length();

        for(i=0;i<n;i++){
            if(s[i]=='A')
                a++;
            else if(s[i]=='B')
                b++;
            else if(s[i]=='C')
                c++;
        }

        if(a!=(b+c)&&b!=(c+a)&&c!=(a+b)){
            cout<<"NO\n";
        }else{

            if(checkBrackets(s,'A')||checkBrackets(s,'B')||checkBrackets(s,'C')||checkBracketsInv(s,'A')||checkBracketsInv(s,'B')||checkBracketsInv(s,'C')){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }

        }



        /*if(a==(b+c)){
            if(checkBrackets(s,'A')){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(b==(a+c)){
            if(checkBrackets(s,'B')){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(c==(b+a)){
            if(checkBrackets(s,'C')){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            cout<<"NO\n";
        }*/

    }

    return 0;
}
