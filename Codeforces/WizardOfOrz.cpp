//Wizard of Orz

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
    while(t--){
        int i,j,n;
        cin>>n;
        int a[n],d=0,f=0;

        if(n==1)
            a[0]=9;
        else if(n==2){
            a[0]=9;
            a[1]=8;
        }else if(n==3){
            a[0]=9;
            a[1]=8;
            a[2]=9;
        }else{
            a[0]=9;
            a[1]=8;
            a[2]=9;
            for(i=3;i<n;i++){
                a[i]=d;
                d++;
                if(d>9)
                d=0;
            }
        }

        for(i=0;i<n;i++)
            cout<<a[i];
        cout<<"\n";
    }
}
