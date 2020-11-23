//String Equality

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;

    while(t--){
        lli n,k,i,q,l,r,f=0;
        string a,b;
        cin>>n>>k;
        cin>>a>>b;

        int freq1[26]={0};
        int freq2[26]={0};

        for(i=0;i<n;i++){
            freq1[a[i]-97]++;
            freq2[b[i]-97]++;
        }

        for(i=0;i<26;i++){
            int temp=min(freq1[i],freq2[i]);
            freq1[i]=freq1[i]-temp;
            freq2[i]=freq2[i]-temp;
        }

        lli sum=0;
        for(i=0;i<26;i++){
            sum+=freq1[i];
        }

        if(sum%k!=0)
            f=1;
        else{
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());

            for(i=n-1;i>=0;i--){
                if(a[i]>b[i]){
                    f=1;
                    break;
                }
            }
        }

        if(f==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;

}
