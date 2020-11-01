/*There are two array a1[] and a2[] of two elements each. Declare a array of pointers which takes base address of both the arrays. Scan a1[] and a2[] using
array of pointers and print them back using array of pointers.*/
#include<stdio.h>
int main()
{
	int a1[2],a2[2],i,j;
	int *p[2]={a1,a2};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",(*(p+i)+j));       //(p[i]+j)=(*(p+i)+j)
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d",*(*(p+i)+j));       //*(p[i]+j)=*(*(p+i)+j)
		printf("\n");
	}
}
