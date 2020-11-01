/*pattern- 
A
BC
DEF
GHIJ
KLMNO      */           
#include<stdio.h>
int main()
{
	int i,j;
	int ch=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		printf("%c",ch++);
		printf("\n");
	}
}
