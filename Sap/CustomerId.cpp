//Customer ID

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n,i,j,flag=0,cnt=0;
    char ch;
    unordered_map<char,int> m;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>s;
    n=s.length();

    if(n==15){
        for(i=0;i<n;i++){
            ch=s[i];
            m[ch]++;

            if((ch>='0'&&ch<='9')||(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
                cnt++;
            }else if(ch=='_'){
                if(cnt>3){
                    flag=1;
                    break;
                }else{
                    cnt=0;
                }
            }else{
                flag=1;
                break;
            }
        }

        for(auto it:m){
            if(it.second>3){
                flag=1;
                break;
            }
        }
    }else{
        flag=-1;
    }

    if(flag==-1)
        cout<<"wrong_code";
    else if(flag==1)
        cout<<"invalid";
    else
        cout<<"valid";

    return 0;
}
