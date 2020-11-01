//ProblemA

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n,f=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        i=0;
        j=n-1;

        while(i-1<j){
            if((a[i]+a[i+1])>a[j]){
                i++;
            }else if((a[i]+a[i+1])<=a[j]){
                f=1;
                cout<<(i+1)<<" "<<i+2<<" "<<j+1<<"\n";
                break;
            }
        }

        if(f==0)
            cout<<-1<<"\n";
    }
}
