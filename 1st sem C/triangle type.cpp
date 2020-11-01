//Check triangle is equilateral,isosceles or scalene.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first side of triangle:");
	scanf("%d",&a);
	printf("Enter second side of triangle:");
	scanf("%d",&b);
	printf("Enter third side of triangle:");
	scanf("%d",&c);
	if(a==b&&b==c&&c==a)
	printf("Equilateral");
	else if(a==b||b==c||c==a)
	printf("Isoscleles");
	else
	printf("Scalene");
}
