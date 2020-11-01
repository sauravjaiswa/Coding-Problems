#include<stdio.h>
int main()
{
	int x[]={0,1,2,3,4};
	int *p1=&x[0];
	int *p2=&x[2];
	printf("%d",*p1);
	printf("\n%d",*p2);
	printf("\n%d",*p2-*p1);
	printf("\n%d",p1);
	printf("\n%d",p2);
	printf("\n%d",p2-p1);
	//printf("\n%d",p2+p1);     //error
	//printf("\n%d",p2*2+p1);     //error
}
