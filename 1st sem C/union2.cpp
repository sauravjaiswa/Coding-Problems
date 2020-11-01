//union array
//unions
#include<stdio.h>
typedef struct
{
	union
	{
		int x;
		int y;
	};
	int z;
}POINT;
main()
{
	POINT p[2];
	p[0].x=1;
	p[0].y=2;
	p[0].z=3;
	printf("%d %d %d\n",p[0].x,p[0].y,p[0].z);
}
