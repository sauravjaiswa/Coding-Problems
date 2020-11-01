//LuckyDivision

#include <bits/stdc++.h>
using namespace std;

int checkLucky(int n){
	int d,f=0,copy=n;
	while(copy!=0){
		d=copy%10;
		if(d!=4&&d!=7){
			f=1;
			break;
		}
		copy=copy/10;
	}
	return f;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i;
    cin>>n;
    
    vector<int> v;
    
    for(i=4;i<=n;i++){
    	if(checkLucky(i)==0){
//    		cout<<"Pushed"<<i<<endl;
			v.push_back(i);
		}
	}
	
	int f=0;
	for(i=0;i<v.size();i++){
//		cout<<n<<"   "<<v[i]<<endl;
		if(n%v[i]==0){
			f=1;
			break;
		}
	}
	
	if(f==1)
	cout<<"YES";
	else
	cout<<"NO";
}
