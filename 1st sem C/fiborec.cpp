//fibonacci recursion
#include<stdio.h>
int fibo(int x);
int main()
{
	int n,x,i;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	x=fibo(i);
	printf("%d",x);
}
}
int fibo(int x)
{
	if(x==0)
	return 0;
	else if(x==1)
	return 1;
	else
	return(fibo(x-1)+fibo(x-2));
}
