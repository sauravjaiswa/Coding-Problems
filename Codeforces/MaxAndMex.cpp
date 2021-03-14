//Max and Mex

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool binSearch(vector<lli> a,lli n,lli val){
    lli s,e;
    s=0;
    e=n-1;

    while(s<e){
        lli mid=(s+e)/2;

        if(a[mid]==val)
            return true;
        else if(val<a[mid])
            e=mid-1;
        else
            s=mid+1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli i,j,n,k,maxi=LONG_MIN,mini,a,cnt;

        cin>>n>>k;

        unordered_set<lli> st;

        for(i=0;i<n;i++){
            cin>>a;
            if(a>maxi)
                maxi=a;
            st.insert(a);
        }

        mini=0;
        lli res;

        while(st.find(mini)!=st.end()){
            mini=mini+1;
        }

        if(k==0){
            cnt=st.size();
        }else{
            if(mini>maxi){
                cnt=st.size()+k;
            }else{
                lli res=(lli)(ceil((float)(mini+maxi)/(float)2));

                if(st.find(res)==st.end())
                    cnt=st.size()+1;
                else
                    cnt=st.size();
            }
        }

        cout<<cnt<<"\n";
    }

    return 0;
}
