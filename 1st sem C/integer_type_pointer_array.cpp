//pointer array
/*6487588
3*/
#include<stdio.h>
main()
{
	int *p[3];
	int a=1,b=2,c=3;
	p[0]=&a;   //p[i] stores address of a,b,c
	p[1]=&b;
	p[2]=&c;
	printf("%d",p[2]);
	printf("\n%d",*p[2]); //prints the values at 3rd position of array 
}
