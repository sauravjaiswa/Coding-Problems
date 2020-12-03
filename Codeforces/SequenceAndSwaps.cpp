//Sequence and Swaps

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int n){
    int i;
    for(i=n-1;i>0;i--){
        if(a[i]<a[i-1])
            return false;
    }
    return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        int n,x;
        cin>>n>>x;
        int a[n],i,cnt=0;

        for(i=0;i<n;i++)
            cin>>a[i];

        while(!isSorted(a,n)){
            cnt++;
            i=0;
            while(i<n&&a[i]<=x)
                i++;

            if(i==n){
                cnt=-1;
                break;
            }else{
                int t=x;
                x=a[i];
                a[i]=t;
            }
        }
        cout<<cnt<<"\n";
	}
}
