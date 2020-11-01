//FILE(for ExternClass_1)
#include<stdio.h>
extern int x;
void print()
{
	x++;
	printf("\nx in FILE=%d",x);
}
main()
{
}
