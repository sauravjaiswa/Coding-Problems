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
            if(i<(n-1)&&s[i]=='0'&&s[i+1]=='1'){
                f=1;
                //i++;
            }else if(i<(n-1)&&s[i]=='1'&&s[i+1]=='0'){
                f=1;
                //i++;
            }else if(i>0&&s[i-1]==s[i]){
                if(s[i]=='0')
                    c0++;
                else if(s[i]=='1')
                    c1++;
            }
        }
        int cnt=0;
        if(f==1)
            cnt=1;

//        if(s[n-1]==s[n-2]){
//            if(s[n-1]=='0')
//                c0++;
//            else if(s[n-1]=='1')
//                c1++;
//        }

        //cout<<c0<<" "<<c1<<"\n";
        int mini,maxi;
        if(c0<c1){
            mini=c0;
            maxi=c1;
        }else{
            mini=c1;
            maxi=c0;
        }
        cnt+=maxi;

        cout<<cnt<<"\n";
    }
}
