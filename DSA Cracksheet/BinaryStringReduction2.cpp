//Binary String Reduction

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,f=0,c0=0,c1=0,pos=-1;
        cin>>n;
        string s;
        cin>>s;

        for(i=0;i<n;i++){
            if(s[i]=='0'){
                if(((i+1)<n&&s[i+1]!='1')&&((i-1)>=0&&s[i-1]!='1'))
                    c0++;
                else if(((i+1)>=n&&(s[i-1]==s[i]))||((i-1)<0&&(s[i+1]==s[i])))
                    c0++;

            }else{
                if(((i+1)<n&&s[i+1]!='0')&&((i-1)>=0&&s[i-1]!='0'))
                    c1++;
                else if(((i+1)>=n&&(s[i-1]==s[i]))||((i-1)<0&&(s[i+1]==s[i])))
                    c1++;
            }
        }

        int cnt=0;
        if(c0==n||c1==n)
            cnt+=max(c0,c1);
        else
            cnt=1+max(c0,c1);

        cout<<cnt<<"\n";
    }
}
