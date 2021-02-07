//Infected Cells

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli r,c,i,j;

    cin>>r>>c;
    lli a[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    lli row=0;
    for(i=0;i<r;i++){
        for(j=0;j<c-1;j++){
            if(a[i][j]==6)
                cnt++;
        }
    }

    return 0;
}

