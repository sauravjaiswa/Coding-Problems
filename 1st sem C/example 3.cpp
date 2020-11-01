/*
0
1
1
2*/
#include<stdio.h>
static int x;
void sum();
int main()
{
	sum();
	sum();
}
void sum()
{
	printf("\n%d",x);
	x++;
	printf("\n%d",x);
}
