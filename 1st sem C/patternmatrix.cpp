#include<stdio.h>
int main()
{
	int n,i,j,size,x,y,z,k;
	printf("Enter value of n:");
	scanf("%d",&n);
	size=(n*2)-1;
	x=5;
	y=0;
	z=size-1;
	for(i=0;i<size;i++)
	{
		if(x>=1)
		{
		for(j=0;j<size;j++)
		{
			for(k=0;k<size;k++)
			{
				if(i==y&&j==y&&i==z&&j==z)
				printf("%d",x);
			}
			printf("\n");
			y--;
			z--;
		}
		x=x-1;
	}
	else
		{
		for(j=0;j<size;j++)
		{
			for(k=0;k<size;k++)
			{
				if(i==y&&j==y&&i==z&&j==z)
				printf("%d",x);
			}
			printf("\n");
			y--;
			z--;
		}
		x=x+1;
	}
}
}

