//malloc_calloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,i,n;
	printf("Enter size of array");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	printf("\n%d",*(p+i));
	printf("\nPrinting calloc:\n");
	p=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	printf("\n%d",*(p+i));
	free(p);
}
