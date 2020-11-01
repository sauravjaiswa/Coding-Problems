//WAP to find greatest of two numbers using if else.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if(a>b)
	printf("%d is greater %d",a,b);
	else if(a<b)
	printf("%d is greater %d",b,a);
	else
	printf("%d is equal to %d ",a,b);
	return 0;
}
