//prime number
#include<stdio.h>
int prime(int n)
{
	int i,c=0;
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0&&n!=1&&n!=2)
	return 1;
}
int main()
{
	int a,b,j;
	printf("Enter a range to find prime numbers:");
	scanf("%d",&a);
	scanf("\n%d",&b);
	for(j=a;j<=b;j++)
	{
		if(prime(j)==1)
		printf("\n%d is a prime number.",j);
		else
		printf("\n%d is not a prime number.",j);
	}
}
