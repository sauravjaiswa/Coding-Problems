//WAP to find greatest of three numbers using ternary operator.
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	if(d==a)
	printf("%d is greatest",a);
	else if(d==b)
	printf("%d is greatest",b);
    else
	printf("%d is greatest",c);
	return 0;
}
