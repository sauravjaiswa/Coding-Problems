//Circle Coloring

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        set<int> s1;


        cin>>n;
        int abc[3][n];
        int result[n];

        for(i=0;i<3;i++){
            for(j=0;j<n;j++){
                cin>>abc[i][j];
                s1.insert(abc[i][j]);
            }
        }

        result[0]=abc[0][0];
        int cnt=0,f=1;
        for(i=1;i<n;i++){
            if(result[i-1]!=abc[cnt][i])
                result[i]=abc[cnt][i];
            else{
                if(f==1){
                    if((cnt+1)>=3){
                        cnt=0;
                        //f=0;
                    }
                    else
                        cnt++;
                }/*else{
                    if((cnt-1)<0){
                        cnt++;
                        f=1;
                    }
                    else
                        cnt--;
                }*/
                result[i]=abc[cnt][i];
            }
        }

        /*set <int> :: iterator itr;
        i=0;
        while(i<n){
            for(itr=s1.begin();itr!=s1.end();itr++){
                result.push_back(*itr);
                i++;
            }
        }

        if(result[0]==result[n-1]){
            result[n-1]=abc[1][0];
        }*/

        if(result[0]==result[n-1]){
            if(abc[0][n-1]!=result[n-2]&&abc[0][n-1]!=result[0])
                result[n-1]=abc[0][n-1];
            else if(abc[1][n-1]!=result[n-2]&&abc[1][n-1]!=result[0])
                result[n-1]=abc[1][n-1];
            else if(abc[2][n-1]!=result[n-2]&&abc[2][n-1]!=result[0])
                result[n-1]=abc[2][n-1];
        }

        for(i=0;i<n;i++)
        cout<<result[i]<<" ";

        cout<<"\n";
    }
}
