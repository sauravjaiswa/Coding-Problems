//Planet Lapituletti

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli rev(lli num){
    lli d,cpy=num,rev=0;

    while(cpy!=0){
        d=cpy%10;
        rev=(rev*10)+d;
        cpy=cpy/10;
    }

    return rev;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        string startTime,tmp,strh,strm,ans="";
        lli h,m,sh,sm;

        cin>>h>>m;
        cin>>startTime;

        stringstream check1(startTime);
        string tokens;

        bool flag=true;
        while(getline(check1,tokens,':'))
        {
            if(flag){
                stringstream in(tokens);
                in>>sh;
                strh=tokens;
            }else{
                stringstream in(tokens);
                in>>sm;
                strm=tokens;
            }
            flag=!flag;
        }

        lli cph,cpm;
        cph=rev(sh);
        cpm=rev(sm);

        if(cpm<h&&cph<m){
            ans=to_string(cpm)+":"+to_string(cph);
        }else{

            while(cpm>h||cph>m){
                sm++;
                if(sm==m){
                    sm=0;
                    sh=sh+1;
                }
                if(sh==h){
                    sh=0;
                }

                cph=rev(sh);
                cpm=rev(sm);
            }

            ans=to_string(cpm)+":"+to_string(cph);


        }

        cout<<ans<<"\n";

    }

    return 0;
}
