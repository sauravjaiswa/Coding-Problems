//Circular Tracks

#include<bits/stdc++.h>
#define lli long long int
#define pi 3.141592653589793
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli r1,r2,s1,s2,t,d,intersectionArea=0,lcm,tt1,tt2;
    double t1,t2;

    cin>>r1>>r2>>s1>>s2>>t>>d;

    intersectionArea=(r1+r2)-d;
    if(intersectionArea<0)
        cout<<"no crash\n";
    else if(intersectionArea==0){
        t1=(2*pi*r1)/s1;
        t2=(2*pi*r2)/s2;
        tt1=(float)t1;
        tt2=(float)t2;

        lcm=(tt1*tt2)/__gcd(tt1,tt2);
        if(lcm<=t)
            cout<<lcm<<" E&F"<<"\n";
    }else{
        vector<double> m1e,m1f,m2e,m2f;
        double theta1=acos(r1/d);
        double dist1=2*theta1*r1;
        double time1=dist1/s1;

        double theta2=acos(r2/d);
        double dist2=2*theta2*r2;
        double time2=dist2/s2;

        double initial1=(2*pi*r1)/s1;
        double ini1,ini2,c1,c2;
        double initial2=(2*pi*r2)/s2;

        ini1=initial1-time1;
        ini2=initial2-time2;

        c1=initial1;
        c2=ini1;

        while(c1<t||c2<t){
            m1e.push_back(c1);
            m2e.push_back(c2);

            c1+=initial1;
            c2+=initial2;
        }

        c1=initial2;
        c2=ini2;

        while(c1<t||c2<t){
            m1f.push_back(c1);
            m2f.push_back(c2);

            c1+=initial1;
            c2+=initial2;
        }

        lli i;
        for(i=0;i<m1e.size();i++){
            cout<<m1e[i]<<" ";
        }

        cout<<"\n";
        for(i=0;i<m2e.size();i++){
            cout<<m2e[i]<<" ";
        }

        cout<<"\n";
        for(i=0;i<m1f.size();i++){
            cout<<m1f[i]<<" ";
        }

        cout<<"\n";
        for(i=0;i<m2f.size();i++){
            cout<<m2f[i]<<" ";
        }

    }


    return 0;
}

