//Increment Decrement operator
#include<stdio.h>
int main()
{
	int a=25,b=6,x;
	x=++a*b++ + a++/++b;
	printf("a=%d",a);
	printf("\nb=%d",b);
	printf("\nx=%d",x);
}
