#include<stdio.h>
int swap(int *x,int *y);
int a,b;
int main()
{
	printf("Enter two numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	swap(&a,&b);
	printf("a=%d",a);
	printf("b=%d",b);
}
int swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
