//pointer to pointer
//1   1
#include<stdio.h>
main()
{
	int x=1;
	int *p=&x;
	int **pp=&p;
	printf("%d   %d",*p,**pp);
}

