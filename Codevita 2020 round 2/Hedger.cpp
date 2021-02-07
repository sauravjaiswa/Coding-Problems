//Hedger

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

double roundOff(double n)
{
    double value=(lli)(n*100+0.5);
    return (double)value/100;
}

double calculateProfit(double profit[],double price[],double a,lli n,lli k){
    lli i,j,f;
    double temp;
    priority_queue<pair<double,double>> pq;
    for(i=0;i<n;i++){
        pq.push({profit[i],price[i]});
    }

    double cnt=0,ans=0;
    for(i=0;i<n;i++){
        double maxiProf=pq.top().first;
        double maxiPrice=pq.top().second;

        for(j=0;j<k;j++){
            if(cnt<a && (cnt+maxiPrice)<=a){
                cnt+=maxiPrice;
                ans=ans+roundOff((maxiPrice*maxiProf)/100);
            }
            else{
                return ans;
            }
        }
        pq.pop();
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli n,k,i;
    double a;
    cin>>n>>k>>a;

    double price[n],profit[n];
    for(i=0;i<n;i++)
        cin>>price[i];

    for(i=0;i<n;i++)
        cin>>profit[i];

    cout<<(lli)roundOff(calculateProfit(profit,price,a,n,k))<<"\n";

    return 0;
}

