#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i;
    cin>>n;
    int a[n+1],freq[100]={0},cf[100],tmp[n+1];
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
    freq[a[i]]=freq[a[i]]+1;

    for(i=1;i<100;i++)
    cf[i]=cf[i-1]+freq[i];

    for(i=n;i>0;i--)
    {
        tmp[cf[a[i]]]=a[i];
        cf[a[i]]=cf[a[i]]-1;
    }

    for(i=1;i<=n;i++)
    cout<<tmp[i]<<" ";
    return 0;
}

