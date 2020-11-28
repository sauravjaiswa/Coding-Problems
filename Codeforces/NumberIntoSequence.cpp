//Number Into Sequence

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool isPrime(lli n){
    lli i;
    if(n==2)
        return true;

    for(i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }

    return true;
}

int main(){
    lli t;
    cin>>t;

    while(t--){
        lli n,cnt=0,i;
        cin>>n;
        vector<lli> result;


//        if(n%2==0){
//            //cout<<"TEST\n";
//            lli temp=n;
//            while(temp%2==0){
//                temp=temp/2;
//                cnt++;
//                if(temp%2==0)
//                    result.push_back(2);
//                else
//                    result.push_back(temp*2);
//            }
//
//            cout<<cnt<<"\n";
//            for(i=0;i<result.size();i++)
//                cout<<result[i]<<" ";
//            cout<<"\n";
//
//        }else{

            vector<vector<lli>> store;
            vector<lli> v;
            if(isPrime(n)==true){
                //cout<<"TEST1\n";
                cout<<1<<"\n";
                result.push_back(n);
            }else{
                lli temp=n;


                for(i=2;i*i<=n;i++){
                    temp=n;

                    while(temp%i==0){
                        temp=temp/i;

                        if(temp%i==0)
                            v.push_back(i);
                        else{
                            v.push_back(temp*i);
                            store.push_back(v);
                            v.clear();
                            break;
                        }
                    }
                }

                lli j;
//                for(i=0;i<store.size();i++){
//                    cout<<"SIZE:"<<store[i].size()<<"\n";
//                    for(j=0;j<store[i].size();j++){
//                        cout<<store[i][j]<<" ";
//                    }
//                    cout<<"\n";
//                }

                cnt=0;
                for(i=0;i<store.size();i++){
                    if(store[i].size()>cnt){

                        cnt=store[i].size();
                        result=store[i];
                    }
                }
                cout<<cnt<<"\n";

            }

            for(i=0;i<result.size();i++)
                cout<<result[i]<<" ";
            cout<<"\n";
        //}



    }
}
