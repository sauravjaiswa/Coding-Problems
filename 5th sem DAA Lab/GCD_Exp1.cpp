//GCD

#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(b==0)
	return a;
	
	return gcd(b,a%b);
}

int gcdIterative(int a,int b){
	
	while(b!=0){
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int a,b,temp;
	cout<<"Enter two numbers for GCD:"<<endl;
	cin>>a>>b;
	
	if(b>a){
		temp=a;
		a=b;
		b=temp;
	}
	
	cout<<"GCD is : "<<gcd(a,b)<<endl;
	cout<<"GCD in Iterative is : "<<gcdIterative(a,b)<<endl;
}
