//Subtract Or Divide

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,i,q,l,r,c0,c1,j;
        string s,ns,refer;
        cin>>n>>q;
        cin>>s;

        lli f=0;
        for(i=0;i<q;i++){
            cin>>l>>r;
            f=0;
            refer="";

            if(l-1!=0&&r!=n){
                cout<<"YES\n";
            }else{
                for(j=l-1;j<=r-1;j++)
                refer+=s[j];

                char first=refer[0];
                char last=refer[refer.length()-1];
                int f1,f2;
                f1=f2=0;

                for(j=l-2;j>=0;j--){
                    if(first==s[j]){
                        f1=1;
                        break;
                    }
                }

                for(j=r;j<n;j++){
                    if(last==s[j]){
                        f2=1;
                        break;
                    }
                }

                //cout<<f1<<" "<<f2<<"\n";
                if(f1==1&&f2==1)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }

            /*for(j=l-1;j<=r-1;j++)
                refer+=s[j];

            char first=refer[0];
            char last=refer[refer.length()-1];
            int f1,f2;
            f1=f2=0;

            for(j=l-2;j>=0;j--){
                if(first==s[j]){
                    f1=1;
                    break;
                }
            }

            for(j=r;j<n;j++){
                if(last==s[j]){
                    f2=1;
                    break;
                }
            }

            cout<<f1<<" "<<f2<<"\n";
            if(f1==1&&f2==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";*/
        }
    }

    return 0;

}
