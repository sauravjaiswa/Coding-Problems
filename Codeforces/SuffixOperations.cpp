//Suffix Operations

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
        lli n;
        cin>>n;
        lli a[n],i;

        for(i=0;i<n;i++){
            cin>>a[i];
        }
        lli median=0;


        vector<lli> sum;
        lli j,k,step=0,mini=INT_MAX;

        for(i=n-1;i>0;i--){
            step=step+abs(a[i]-a[i-1]);
        }


        for(j=0;j<n;j++){
            lli s=0;
            lli p,q,r;

            if(j==0){
                median=a[j+1];
                s=step-(abs(a[j]-median));
                sum.push_back(s);

            }else if(j==n-1){
                median=a[j-1];
                s=step-(abs(a[j]-median));
                sum.push_back(s);
            }else{
                //if(a[j-1]>a[j+1]){
                    p=a[j-1];
                    q=a[j];
                    r=a[j+1];
                    s=step-((abs(p-q))+(abs(q-r))-abs(r-p));
                    sum.push_back(s);

                //}else{
//                    median=a[j+1];
//                    s=step-(abs(a[j]-median));
//                    sum.push_back(s);
                //}
            }

        }

        cout<<*min_element(sum.begin(),sum.end())<<"\n";
	}
}
