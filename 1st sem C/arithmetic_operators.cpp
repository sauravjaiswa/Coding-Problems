//Arithmetic operators.
#include<stdio.h>
int main()
{
	int a,b;
	float sum,diff,prod,div,rem1;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	div=a/b;
	rem1=a%b;
	printf("Sum of two numbers: %f",sum);
	printf("\nDifference of two numbers: %f",diff);
	printf("\nProduct of two numbers: %f",prod);
	printf("\nDivision of two numbers: %f",div);
	printf("\nRemainder of two numbers: %f",rem1);
	return 0;
}
