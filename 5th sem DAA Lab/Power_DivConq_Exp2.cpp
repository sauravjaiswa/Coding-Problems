//Power using divide and conquer

#include <bits/stdc++.h>
using namespace std;

int power(int a,int n){
	int pow;
	if(n==0)
		return 1;
	else if(n%2==0) 
        return power(a,n/2)*power(a,n/2); 
    else
        return a*power(a,n/2)*power(a,n/2);
}

int main(){
    
	int a,n,pow,ans;
	cout<<"Enter value of a and n in a^n:\n";
	cin>>a>>n;
	pow=power(a,n);
	cout<<"Power is : "<<pow<<endl;
}
