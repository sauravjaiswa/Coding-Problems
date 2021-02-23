//Vestigium

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t,k=1;
    cin>>t;
    while(t--){
        lli n,i,j;
        cin>>n;
        lli m[n][n],trace=0,r=0,c=0;
        
        bool rowDup,colDup;
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>m[i][j];
            }
        }
        
        for(i=0;i<n;i++){
            rowDup=false;
            colDup=false;
            set<lli> temp1,temp2;
            for(j=0;j<n;j++){
                
                if(i==j)
                    trace=trace+m[i][j];
                    
                if(temp1.find(m[i][j])==temp1.end())
                    temp1.insert(m[i][j]);
                else
                    rowDup=true;
                    
                if(temp2.find(m[j][i])==temp2.end())
                    temp2.insert(m[j][i]);
                else
                    colDup=true;
                
            }
            if(rowDup==true)
                r++;
            if(colDup==true)
                c++;
        }
        
        cout<<"Case #"<<k<<": "<<trace<<" "<<r<<" "<<c<<"\n";
        k++;
        
    }
    
    return 0;
}