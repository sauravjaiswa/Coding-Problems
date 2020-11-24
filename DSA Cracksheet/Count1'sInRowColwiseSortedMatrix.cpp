/*Question- 1) Given a matrix of 0s and 1s. The matrix is sorted row-wise and column-wise. Count the total number of 1s in the matrix.
I gave him three approaches and he told me to code the most optimal one.*/

#include<bits/stdc++.h>
using namespace std;

class Temp{
public:
    int pos,left;

    Temp(int pos,int left){
        this->pos=pos;
        this->left=left;
    }
};

Temp binarySearch(int a[],int l,int r){
    int mid,p=-1;

    while(l<=r){
        mid=(l+r)/2;

        //cout<<l<<" "<<r<<"\n";
        if(a[mid]==1){
            cout<<"START : "<<mid<<"\n";
            if(a[mid-1]==1&&mid>0)
                r=mid-1;
            else{
                //cout<<"RETURNING\n";
                return Temp(mid,mid);
            }
        }else if(a[mid]<1)
            l=mid+1;
    }

    return Temp(-1,0);
}

int main(){
    int m,n,i,j;
    cin>>m>>n;

    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }

    int total=0,l=0,r=n-1;

    for(i=m-1;i>=0;i--){
        Temp temp=binarySearch(a[i],l,r);

        //cout<<(n-temp.pos)<<"\n";
        if(temp.pos>=0)
            total+=(n-temp.pos);
        l=temp.left;
    }

    cout<<total<<"\n";
}
