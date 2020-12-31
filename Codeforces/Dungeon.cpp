//Dungeon

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,a,b,c,tot;
        cin>>a>>b>>c;
        tot=a+b+c;

        lli f=0;

        for(i=1;i<=tot;i++){
            //cout<<"i : "<<i<<"\n";
            //cout<<"CHECK : "<<a<<" "<<b<<" "<<c<<"\n";
            if(i%7!=0){
                if(a==1&&b==1&&c==1){
                    f=1;
                    break;
                }else{
                    if(a>1)
                        a--;
                    else if(b>1)
                        b--;
                    else if(c>1)
                        c--;
                }
            }else{
                if(a>1&&b>1&&c>1){
                    a--;
                    b--;
                    c--;
                }else if(a==1&&b==1&&c==1){
                    break;
                }else if(a==1||b==1||c==1){
                    f=1;
                    break;
                }
            }



        }

        if(f==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
