//Linkedin Question 1
//The Bitwise Equation
//https://drive.google.com/file/d/1HVi1x3eRsC_t-tFK6v5VCswvmoY0eV05/view?usp=sharing

//SUM=XOR+2*AND

/*3
29 36 57
25 18 3*/

#include<bits/stdc++.h>
using namespace std;

int calculate(int sum,int xor1){
    int and1=(sum-xor1)/2;

    int x=0,y=0,i=0;
    int XOR=xor1,AND=and1;

    while(XOR!=0||AND!=0){
        int xi,ai;

        xi=XOR&1;
        ai=AND&1;

        if(xi==0&&ai==1){
            x=x+pow(2,i);
            y=y+pow(2,i);
        }else if(xi==1&&ai==0){
            y=y+pow(2,i);
        }else if(xi==1&&ai==1){
            x=0;
            y=0;
            break;
        }
        XOR=XOR>>1;
        AND=AND>>1;
        i++;
    }

    int ans=(2*x)+(3*y);

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int a[n],b[n],i,xy[2];

    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];

    for(i=0;i<n;i++){
        int ans=calculate(a[i],b[i]);

        cout<<ans<<"\n";
    }

    return 0;
}
