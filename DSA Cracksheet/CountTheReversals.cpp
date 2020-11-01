//Count the Reversals
//https://practice.geeksforgeeks.org/problems/count-the-reversals/0

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        int i,j,n,c1,c2;
        stack<char> st;
        cin>>s;
        n=s.length();

        c1=c2=0;
        int cnt=0;

        if(n%2!=0)
            cout<<"-1\n";
        else{
            for(i=0;i<n;i++){
                if(s[i]=='{')
                    st.push('{');
                else if(s[i]=='}'){
                    if(!st.empty()){
                        st.pop();
                    }else{
                        c2++;
                    }
                }
            }
            while(!st.empty()){
                c1++;
                st.pop();
            }
            cout<<c1<<" "<<c2<<"\n";

            cnt=(c1+1)/2+(c2+1)/2;
            cout<<cnt<<"\n";
        }
    }

}
