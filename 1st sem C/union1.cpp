//unions
#include<stdio.h>
typedef union
{
	int x;
	float y;
}POINT;
main()
{
	printf("%d\n",sizeof(POINT));
	POINT p1;
	p1.x=2;
	printf("%d\n",p1.x);
	p1.y=3;
	printf("%f\n",p1.y);
	printf("%f\n",p1.x);
	printf("%d\n",p1.x);
}
