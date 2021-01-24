//First negative integer in every window of size k
/*Examples:

Input : arr[] = {-8, 2, 3, -6, 10}, k = 2
Output : -8 0 -6 -6
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

Input : arr[] = {12, -1, -7, 8, -15, 30, 16, 28} , k = 3
Output : -1 -1 -7 -15 -15 0*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j;
    cin>>n;
    int a[n],k;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;

    if(k>n)
        cout<<"INVALID\n";
    else{

        int num=0;
        vector<int> ans;
        queue<int> q;

        i=0;
        for(j=0;j<n;j++){
            if(a[j]<0){
                q.push(a[j]);
            }
            if(j-i+1==k){
                if(q.size()==0)
                    ans.push_back(0);
                else{
                    ans.push_back(q.front());
                    if(a[i]==q.front())
                        q.pop();
                }
                i++;
            }
        }
        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<"\n";

    }
    return 0;
}
