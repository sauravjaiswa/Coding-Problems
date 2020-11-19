//Two Brackets


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;
        int n,i;
        n=str.length();

        stack<char> s1,s2;
        char ch;
        int cnt1=0,cnt2=0;

        for(i=0;i<n;i++){
            ch=str[i];
            if(ch=='(')
                s1.push(ch);
            else if(ch=='[')
                s2.push(ch);
            else if(ch==')'){
                if(!s1.empty()){
                    cnt1++;
                    //cout<<ch<<" "<<s.top()<<"\n";
                    s1.pop();
                }
            }else{
                if(!s2.empty()){
                    cnt2++;
                    //cout<<ch<<" "<<s.top()<<"\n";
                    s2.pop();
                }
            }
        }

        cout<<cnt1+cnt2<<"\n";
    }

    return 0;

}
