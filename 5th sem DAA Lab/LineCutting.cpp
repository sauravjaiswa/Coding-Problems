//Line Cutting problem

#include<bits/stdc++.h>
#define p pair<int,int>
using namespace std;

p min_max(int a[],int n){

    p minMax;
    int i;

    if(n%2!=0){
        minMax.first=minMax.second=a[0];
        i=1;
    }else{
        if(a[0]>a[1]){
            minMax.first=a[0];
            minMax.second=a[1];
        }else{
            minMax.first=a[1];
            minMax.second=a[0];
        }
        i=2;
    }

    for(;i<n-1;i+=2){
        if(a[i]>a[i+1])
        {
          if(a[i]>minMax.first)
            minMax.first=a[i];
          if(a[i+1]<minMax.second)
            minMax.second=a[i+1];
        }else
        {
          if(a[i+1]>minMax.first)
            minMax.first=a[i+1];
          if(a[i]<minMax.second)
            minMax.second=a[i];
        }
    }

    return minMax;
}

int main(){
    int xy1[2],xy2[2];
    cin>>xy1[0]>>xy1[1];
    cin>>xy2[0]>>xy2[1];


}
