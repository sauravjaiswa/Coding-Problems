//Given an array find minimum size subarray having sum greater than k.

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j,max_end,max_curr,cnt=INT_MAX;
    cin>>n;
    int a[n],k;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;

    max_curr=k;
    max_end=0;
    j=0;

    for(i=0;i<n;i++){
        if(a[i]>k){
            cnt=1;
            break;
        }

        max_end=max_end+a[i];

        if(max_end>max_curr){
            j++;
            cnt=min(cnt,j-i);
        }else{
            j++;
        }

    }


    cout<<"Min product subarray:"<<mini<<"\n";

    }
    return 0;
}
