//WAP to take input in 2D array.
#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter size of array:");
	scanf("%d",&r);
	scanf("%d",&c);
	int a[r][c];
		printf("Enter values in matrix:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				scanf("%d",&a[i][j]);
	    }
		printf("Matrix is:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				printf("%d\t",a[i][j]);
				printf("\n");
	    }
}
