//FILE(for ExternClass_1)
#include<stdio.h>
extern int x;
void fun()
{
	x++;
	printf("\nx in FILE=%d",x);
}
