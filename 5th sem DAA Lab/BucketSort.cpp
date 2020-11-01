//Bucket Sort

#include<bits/stdc++.h>
using namespace std;

void bucketSort(float a[],int n){
    //cout<<n<<"\n";
    int i,j,key,ind;
    priority_queue<float, vector<float>, greater<float> > li[n];

    for(i=0;i<n;i++)
    {
       key=n*a[i];
        li[key].push(a[i]);
    }

    ind=0;
    for(i=0;i<n;i++){
        cout<<i<<" -> ";
        while(!li[i].empty()){
            cout<<li[i].top()<<" ";
            a[ind++]=li[i].top();
            li[i].pop();
        }
        cout<<"\n";
    }
}

int main(){
    float a[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n=sizeof(a)/sizeof(a[0]);
    bucketSort(a,n);

    int i;
    cout<<"Sorted array is \n";
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
    return 0;
}
