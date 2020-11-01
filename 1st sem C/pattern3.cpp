/* pattern 3-   *       *
                **     **
                ***   ***
                **** ****
                *********
                **** ****
                ***   ***
                **     **
                *       *    */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		if(i<=5)
		{
			for(j=1;j<=i;j++)
			printf("*");
			for(j=7;j>=1;j=(j-(i*2)))
			printf(" ");
			for(j=i;j>=1;j--)
			printf("*");
			printf("\n");
		}
		else
		{
			for(j=(10-i);j>=1;j--)
			printf("*");
			printf("\n");
		}
		}
	}
