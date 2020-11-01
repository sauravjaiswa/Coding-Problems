//pointer2-swapping two variables without third variable
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int x=5,y=10;
	swap(&x,&y);
	printf("after swap in main() x=%d\nand y=%d",x,y);
}
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("after swap in swap() x=%d\nand y=%d\n",*x,*y);
}
