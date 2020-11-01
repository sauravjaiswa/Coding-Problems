/*pattern 4-        *
                   ***
                  *****
                 *******
				  *****
				   ***
				    *    */
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
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(k=1;k<=(6-((2*i)-1));k++)
		printf("*");
		printf("\n");
	}

}
