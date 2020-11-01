//pointer
/*10-value
6487628-address of x
10-value at that address*/
#include<stdio.h>
int main()
{
	int x=10;
	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d",*(&x));
}
