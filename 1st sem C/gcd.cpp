#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int n1,n2,g;
	printf("Enter two numbers:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	g=gcd(n1,n2);
	printf("GCD of %d and %d is %d.",n1,n2,g);
}
int gcd(int a,int b)
{
	if(a>=b&&a%b==0)
	return b;
	else if(b>a&&b%a==0)
	gcd(b,a);
	else
	gcd(b,a%b);
}
