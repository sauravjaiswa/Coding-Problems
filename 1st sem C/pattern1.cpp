/*pattern 1-        *
                   ***
                  *****
                 *******    */
#include<stdio.h>
int main()
{
	int i,j ,k,l;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<4;j++)
		printf(" ");
		for(k=1;k<=i;k++)
		printf("*");
		
			for(l=1;l<=(i-1);l++)
			printf("*");
		
		printf("\n");
	}
}
