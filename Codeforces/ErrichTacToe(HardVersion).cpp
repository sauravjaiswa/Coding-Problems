//Errich-Tac-Toe (Hard Version)

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

        int cntX[3]={0,0,0};
        int cntO[3]={0,0,0};
        int k=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j]=='X'){
                    cntX[(i+j)%3]++;
                    k++;
                }else if(a[i][j]=='O'){
                    cntO[(i+j)%3]++;
                    k++;
                }
            }
        }

        int miniX=INT_MAX,miniposX=-1;
        int miniO=INT_MAX,miniposO=-1;
//        for(i=0;i<3;i++){
//            if(cntX[i]<miniX){
//                miniX=cntX[i];
//                miniposX=i;
//            }
//            if(cntO[i]<miniO){
//               miniO=cntO[i];
//                miniposO=i;
//            }
//        }

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i!=j){
                    if((cntO[i]+cntX[j])<=k/3){
                        miniposX=i;
                        miniposO=j;
                        break;
                    }
                }
            }
            if(miniposO>=0&&miniposX>=0)
                break;
        }
        //cout<<miniposX<<" "<<miniposO<<"\n";

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((i+j)%3==miniposO&&a[i][j]=='X'){
                    a[i][j]='O';
                }else if((i+j)%3==miniposX&&a[i][j]=='O'){
                    a[i][j]='X';
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
