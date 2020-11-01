//Find all triplets with zero sum

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,j,l,r,curr;

	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	cin>>a[i];

	sort(a,a+n);
	l=0;
	r=n-1;
	int flag=0;
	for(i=0;i<n-1;i++){
        l=i+1;
        r=n-1;
        curr=a[i];
        while(l<r){
            if(curr+a[l]+a[r]==0){
                cout<<curr<<" "<<a[l]<<" "<<a[r]<<"\n";
                l++;
                r--;
                flag=1;
            }else if(curr+a[l]+a[r]<0){
                l++;
            }else{
                r--;
            }
        }
        if(flag==0)
            cout<<"Not found\n";
	}

    return 0;
}
