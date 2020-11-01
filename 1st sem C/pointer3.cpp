//pointer3-significance of datatype of pointer
#include<stdio.h>
int main()
{
	int *pnum;
	char *pch;
	float *pfnum;
	printf("%d %d %d",sizeof(pnum),sizeof(pch),sizeof(pfnum));
	printf("\n%d %d %d",sizeof(*pnum),sizeof(*pch),sizeof(*pfnum));
}
