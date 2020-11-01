#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,i;
    cin>>n;
    string s[101],str;
    int x;
    for(i=0;i<n/2;i++)
    {
        cin>>x>>str;
        s[x]=s[x]+"-"+" ";

    }
    for(i=n/2;i<n;i++)
    {
        cin>>x>>str;
        s[x]=s[x]+str+" ";

    }
    for(i=0;i<101;i++)
    cout<<s[i];
    return 0;
}

