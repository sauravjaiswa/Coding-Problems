//Fix You

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,i,j;
        cin>>m>>n;
        char a[m][n];

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        i=0;
        j=0;
        int cnt=0,flag=0;
        /*while(i<m&&j<n){
            if(a[i][j]=='R'){
                if((j+1)>=n){
                    a[i][j]='D';
                    cnt++;
                    i++;
                }else{
                    j++;
                }
            }else if(a[i][j]=='D'){
                if((i+1)>=m){
                    a[i][j]='R';
                    cnt++;
                    j++;
                }else{
                    i++;
                }
            }else if(a[i][j]=='C'){
                break;
            }
        }*/

        for(i=0;i<m;i++){
            if(a[i][n-1]=='R')
                cnt++;
        }
        for(i=0;i<n;i++){
            if(a[m-1][i]=='D')
                cnt++;
        }

        cout<<cnt<<"\n";
    }
}
