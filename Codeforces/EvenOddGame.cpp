//Even-Odd Game

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	lli t;
	cin>>t;
    while(t--){
        lli i,j,n,cnt=1;
        cin>>n;
        lli a[n];
        priority_queue<lli> even;
        priority_queue<lli> odd;

        for(i=0;i<n;i++){
            cin>>a[i];

            if(a[i]%2==0)
                even.push(a[i]);
            else
                odd.push(a[i]);
        }
        //if(!even.empty()&&!odd.empty())
          //  cout<<cnt<<" "<<even.top()<<" "<<odd.top()<<"\n";
        lli sumA=0,sumB=0;
        while(!even.empty()||!odd.empty()){

            if(cnt==1){
                if(!even.empty()){
                    if(!odd.empty()){
                        //cout<<even.top()<<" "<<odd.top()<<"\n";
                        if(odd.top()>even.top())
                            odd.pop();
                        else{
                            sumA=sumA+even.top();
                            even.pop();
                        }
                    }else{
                        sumA=sumA+even.top();
                        even.pop();
                    }
                }else{
                    odd.pop();
                }
                cnt=2;
            }else{
                if(!odd.empty()){
                    if(!even.empty()){
                        //cout<<even.top()<<" "<<odd.top()<<"\n";
                        if(even.top()>odd.top())
                            even.pop();
                        else{
                            sumB=sumB+odd.top();
                            odd.pop();
                        }
                    }else{
                        sumB=sumB+odd.top();
                        odd.pop();
                    }
                }else{
                    even.pop();
                }
                cnt=1;
            }
        }

        //cout<<sumA<<" "<<sumB<<"\n";
        if(sumA>sumB)
            cout<<"Alice\n";
        else if(sumA<sumB)
            cout<<"Bob\n";
        else
            cout<<"Tie\n";
    }
}
