//Divide two integers without using multiplication, division and mod operator

#include<bits/stdc++.h>
using namespace std;

int calculate(int a,int b){
    int rem=INT_MAX,ans=0,i;

    if(b==0)
        return INT_MAX;

    while(a>=b){
        int msbA=log2(a)+1;
        int msbB=log2(b)+1;

        int diffPos=msbA-msbB;
        ans+=(1<<diffPos);
        rem=(a-(b<<diffPos));
        if(rem<0){
            ans-=1;
            break;
        }
        a=rem;
    }
    return ans;
}

int main(){
    int a,b,signFlag=1;
    cin>>a>>b;

    if((a<0&&b>=0)||(b<0&&a>=0))
        signFlag=-1;


    cout<<signFlag*calculate(abs(a),abs(b))<<"\n";
}
