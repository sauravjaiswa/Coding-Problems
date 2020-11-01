//WAP to find greatest of two numbers using ternary operator.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	c=(a>b)?a:b;
	if(c==a)
	printf("%d is greater than %d",a,b);
    else
	printf("%d is greater than %d",b,a);
	return 0;
}
