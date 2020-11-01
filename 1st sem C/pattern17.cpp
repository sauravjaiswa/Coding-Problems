/*pascals triangle-
1
11
121
1331
14641*/
#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=1;i<=5;i++)
	{
		c=1;
		for(j=1;j<=i;j++)
		{
			printf("%d",c);
			c=c*(i-j)/j;
		
		}
		printf("\n");
	}
}
