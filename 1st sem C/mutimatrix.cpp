//WAP to multiply two matrices given by user in the array.
#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2,k,temp=0;
	printf("Enter size of array1:");
	scanf("%d",&r1);
	scanf("%d",&c1);
	printf("Enter size of array2:");
	scanf("%d",&r2);
	scanf("%d",&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	printf("Enter elements in array 1:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter elements in array 2:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&b[i][j]);
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
				temp=temp+(a[i][k]*b[k][j]);
				c[i][j]=temp;
				temp=0;
			}
		}
		printf("Result of matrix multiplication is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
				printf("%d\t",c[i][j]);
				printf("\n");
	    }
	}
	else
	printf("Matrix multiplication not possible.");
}
