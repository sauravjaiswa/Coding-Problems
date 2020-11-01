#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j,tmp,x;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    x=arr[n-1];
    for(i=n-2;i>=0;i--)
        {
            if(x<arr[i])
            {
                arr[i+1]=arr[i];
                for(j=0;j<n;j++)
                cout<<arr[j]<<" ";
            }
            else
            {
                arr[i+1]=x;
                break;
            }
            cout<<"\n";
        }
        for(j=0;j<n;j++)
        cout<<arr[j]<<" ";

    return 0;
}
