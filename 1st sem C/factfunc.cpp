//factorial
#include<stdio.h>
int fact(int N);
int main()
{
	int N;
	printf("Enter a number:");
	scanf("%d",&N);
	printf("Factorial of %d is:%d",N,fact(N));
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	return f;
}
