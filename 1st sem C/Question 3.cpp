//Question 3
#include<stdio.h>
int main()
{
	int i,j,x;
	for(i=1;i<=3;i++)
	{
		x=2;
		for(j=3;j>=1;j--)
		{
			if(j<=i)
			printf("%d",j);
		}
		if(i==2)
		{
			for(j=(i+1);j<=(i+1);j++)
			printf("%d",x);
		}
		if(i==3)
		{
			for(j=(i+1);j<=(i+2);j++)
			printf("%d",x++);
		}
		printf("\n");
	}
}
