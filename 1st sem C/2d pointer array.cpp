//pointer pointing to a 2d array.
#include<stdio.h>
main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int (*p)[3]=a;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",*(*(p+i)+j));
		printf("\n");
	}
}
