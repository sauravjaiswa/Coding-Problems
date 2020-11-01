//Static class
#include<stdio.h>
void sum();
int main()
{
	printf("First call of sum():");
	sum();
	printf("\nSecond call of sum():");
	sum();
}
void sum()
{
	static int x=0;
	printf("\n%d",x);
	x++;
	printf("\n%d",x);
}
