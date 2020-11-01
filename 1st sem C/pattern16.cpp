/*pattern-
*
**
***
****
***
**
*       */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		if(i<=4)
		for(j=1;j<=i;j++)
		printf("*");
		else
		for(j=(8-i);j>=1;j--)
		printf("*");
		printf("\n");
	}
}
