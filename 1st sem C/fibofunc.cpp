//fibbonaci
#include<stdio.h>
int fib();
int main()
{
	fib();
}
int fib()
{
	int N;
		printf("Enter a number:");
	scanf("%d",&N);
	int a=0,b=1,c,i;
	printf("Fibbonaci:");
	for(i=1;i<=N;i++)
	{
		printf("%d\t",a);
	c=a+b;
	a=b;
	b=c;
	}
}
