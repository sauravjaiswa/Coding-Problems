//Errich-Tac-Toe (Easy Version)

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
        char a[n][n];

        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cin>>a[i][j];
        }

        int cntX[3]={0};
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]=='X'){
                    cntX[(i+j)%3]++;
                }
            }
        }

        int mini=INT_MAX,minipos=-1;
        for(i=0;i<3;i++){
            if(cntX[i]<mini){
                mini=cntX[i];
                minipos=i;
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i+j)%3==minipos&&a[i][j]=='X'){
                    a[i][j]='O';
                }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                cout<<a[i][j];
            cout<<"\n";
        }
    }
}
