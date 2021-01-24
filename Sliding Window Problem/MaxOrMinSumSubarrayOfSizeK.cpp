//Find maximum (or minimum) sum of a subarray of size k
/*Examples :

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

Input  : arr[] = {2, 3}
         k = 3
Output : Invalid
There is no subarray of size 3 as size of whole
array is 2.*/

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

        int sum=0,maxi=0,mini=INT_MAX;

        i=0;
        for(j=0;j<n;j++){
            sum+=a[j];
            if(j-i+1==k){
                maxi=max(maxi,sum);
                mini=min(mini,sum);
                sum-=a[i];
                i++;
            }
        }
        cout<<"Max sum subarray:"<<maxi<<"\n";
        cout<<"Min sum subarray:"<<mini<<"\n";

    }
    return 0;
}
