//Puzzle From the Future

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n;
        string s;
        cin>>n;
        cin>>s;
        int a[n],b[n];

        for(i=0;i<n;i++){
            if(s[i]=='1')
                b[i]=1;
            else
                b[i]=0;
        }

        a[0]=1;
        int bit,c[n];
        c[0]=a[0]+b[0];
        for(i=1;i<n;i++){
            bit=1+b[i];
            if(c[i-1]==bit)
                a[i]=0;
            else
                a[i]=1;
            c[i]=a[i]+b[i];
        }

        for(i=0;i<n;i++)
            cout<<a[i];
        cout<<"\n";
    }
}
