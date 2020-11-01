//find factorial of a number.
#include<stdio.h>
int main()
{
	int i,n,fac=1;
	printf("Enter the number to find its factorial:");
	scanf("%d",&n);
	i=n;
	while(i>=1)
{
	fac=fac*i;
	i--;
}
	printf("The factorial of number %d is: %d",n,fac);
}
