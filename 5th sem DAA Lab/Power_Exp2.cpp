//Power using binary exponentiation

#include <bits/stdc++.h>
using namespace std;

int power(int a,int n){
	int pow;
	if(n==0)
		return 1;
	
	pow=power(a,n/2);
	if(n%2==0)  
        return pow*pow;  
    else
    	return a*pow*pow;
}

int main(){
    
	int a,n,pow,ans;
	cout<<"Enter value of a and n in a^n:\n";
	cin>>a>>n;
	pow=power(a,n);
	cout<<"Power is : "<<pow<<endl;
}
