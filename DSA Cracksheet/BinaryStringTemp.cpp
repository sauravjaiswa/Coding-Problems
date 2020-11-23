//Binary String Reduction

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,f=0,c0=0,c1=0,pos=-1;
        cin>>n;
        string s,sub="";
        cin>>s;

        for(i=0;i<n;i++){
//            if(s[i]=='0'){
//                if(((i+1)<n&&s[i+1]!='1')&&((i-1)>=0&&s[i-1]!='1'))
//                    c0++;
//                else if(((i+1)>=n&&(s[i-1]==s[i]))||((i-1)<0&&(s[i+1]==s[i])))
//                    c0++;
//
//            }else{
//                if(((i+1)<n&&s[i+1]!='0')&&((i-1)>=0&&s[i-1]!='0'))
//                    c1++;
//                else if(((i+1)>=n&&(s[i-1]==s[i]))||((i-1)<0&&(s[i+1]==s[i])))
//                    c1++;
//            }

            if(f==0){
                if(s[i]=='0'&&s[i+1]=='1'){
                    sub=sub+s[i]+s[i+1];
                    f=1;
                    i++;
                }
                else if(s[i]=='1'&&s[i+1]=='0'){
                    sub=sub+s[i]+s[i+1];
                    f=1;
                    i++;
                }
                else{
                    if(s[i]=='0')
                        c0++;
                    else
                        c1++;
                }
            }else{
                if(sub[sub.length()-1]=='0'&&s[i]=='1')
                    sub=sub+s[i];
                else if(sub[sub.length()-1]=='1'&&s[i]=='0')
                    sub=sub+s[i];
                else{
                    if(s[i]=='0')
                        c0++;
                    else
                        c1++;
                }
            }

        }

        cout<<c0<<" "<<c1<<"\n";
        cout<<sub<<"\n";
        int cnt=0;
        if(c0==n||c1==n)
            cnt+=max(c0,c1);
        else
            cnt=1+max(c0,c1);

        cout<<cnt<<"\n";
    }
}
