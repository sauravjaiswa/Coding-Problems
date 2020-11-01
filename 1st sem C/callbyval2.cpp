//call by value
#include<stdio.h>
int fun(int a,int b);
int main()
{
	int x=fun(10,20);
	printf("sum of 10 and 20 is:%d",x);
	x=fun(30,50);
	printf("\nsum of 30 and 50 is:%d",x);
	x=fun(100,150);
	printf("\nsum of 100 and 150 is:%d",x);
}
int fun(int n,int m)
{
	int s=0;
	for( ;n<=m;n++)
	s=s+n;
	return s;
}
