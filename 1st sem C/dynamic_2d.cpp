//Dynamic memory allocation 2d array
#include<stdio.h>
#include<stdlib.h>
main()
{
	int **p,r,c,i,j;
	printf("Enter rows of array");
	scanf("%d",&r);
	printf("Enter columns of array");
	scanf("%d",&c);
	p=(int**)malloc(r*sizeof(int));     //Assigning memory for row **
	if(p==NULL)
	{
		printf("\nMemory of rows Cannot be allocated");
		exit(-1);
	}
	for(i=0;i<r;i++)
	{
		p[i]=(int*)malloc(c*sizeof(int));      //Assigning memory for columns *
		if(p[i]==NULL)
		{
			printf("\nMemory of columns Cannot be allocated");
			exit(-1);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&p[i][j]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",*(*(p+i)+j));
		printf("\n");
	}
}
