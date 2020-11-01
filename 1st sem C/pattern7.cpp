/*pattern- 
00      01      02      03
10      11      12      13
20      21      22      23
30      31      32      33   */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		printf("%d%d",i,j);
		printf("\t");
	    }
	printf("\n");
	}
}
