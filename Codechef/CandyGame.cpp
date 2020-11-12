//November 2020 Challenge
//Candy Game

#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli n,i,j,q,pos=-1,firstOne=0,midOne=0;
        cin>>n;
        lli a[n],prefix[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];

        prefix[0]=0;

        for(i=0;i<n;i++){
            if(a[0]==1){
                firstOne=1;
                prefix[i+1]=1;
            }else if(a[i+1]==1&&(i<n-2)){
                midOne=1;

                pos=i;
                if(a[i]%2==0)
                    prefix[i+1]=(prefix[i]+a[i]-1)%MOD;
                else{
                    // cout<<"CHECK\n";
                    prefix[i+1]=(prefix[i]+(a[i]))%MOD;
                }
            }else{
                if(i!=n-1){
                    if(a[i]%2==0)
                        prefix[i+1]=(prefix[i]+a[i])%MOD;
                    else
                        prefix[i+1]=(prefix[i]+(a[i]-1))%MOD;
                }else{
                    if(a[n-1]%2!=0)
                        prefix[i+1]=(prefix[i]+a[i])%MOD;
                    else
                        prefix[i+1]=(prefix[i]+a[i]-1)%MOD;

                }
            }
        }

        // for(i=1;i<=n;i++)
        //     cout<<prefix[i]<<" ";
        // cout<<"\n";

        cin>>q;
        int r,ans=0;
        for(i=1;i<=q;i++){
            ans=0;
            cin>>r;
            int times=r/n;
            int left=r%n;

            // cout<<"r : "<<r<<"\n";
            //for(j=0;j<times;j++)
            ans=(times*prefix[n])%MOD;
            // cout<<"VAL : "<<prefix[r]<<"\n";
            // cout<<"LEFT : "<<left<<"\n";

            if(firstOne==1){
                if(times==0)
                    ans=1;
                else{
                    if(left>1)
                        ans=(times+1)%MOD;
                    else
                        ans=times;
                }

            }else if(left==0){
                if(a[n-1]%2==0)
                ans=(ans+1)%MOD;
            }else if(left!=0){
                if(left-1==pos&&midOne==1){
                    if(a[left-1]%2==0){
                        ans=(ans+prefix[left]+1)%MOD;
                    }else{
                        ans=(ans+prefix[left])%MOD;
                    }
                }else if(left-1==pos+1&&midOne==1){
//                    if(left>=2){

                        if(a[left-2]%2==0)
                            ans=(ans+prefix[left]+2)%MOD;
                        else
                            ans=(ans+prefix[left])%MOD;

//                    }else{
//                        ans=(ans+prefix[left])%MOD;
//                    }

                }else if(a[left-1]%2!=0)
                    ans=(ans+prefix[left]+1)%MOD;
                else if(a[left-1]%2==0){
                    ans=(ans+prefix[left])%MOD;
                }
            }

            // LLI testAns=calcOld(r,n,a);
            // if(testAns==ans){
            //     cout<<ans<<"\nMATCH\n";
            // }else{
            //     cout<<ans<<" "<<testAns<<"\n";
            //     cout<<"MISMATCH\n";
            //     break;
            // }
            cout<<ans<<"\n";
        }

    }
}
