//call by reference
#include<stdio.h>
void fun(int *i);
int main()
{
	int x;
	scanf("%d",&x);
	fun(&x);
	printf("\nValue of x is:%d",x);
}
void fun(int *i)
{
	printf("\n%d",i);
	printf("\n%d",*i);
	(*i)++;
	printf("\n%d",*i);
}
