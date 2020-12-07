//Errich-Tac-Toe (Easy Version)

//Avoid Trygub

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

        int cntX=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]=='.')
                    cntX=0;
                else if(a[i][j]=='X')
                    cntX++;

                if(cntX==3){
                    a[i][j]='O';
                    cntX=0;
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
