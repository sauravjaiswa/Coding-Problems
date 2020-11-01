//Structures 3
//Passing STRUCTURES to function
#include<stdio.h>
typedef int INT;
typedef struct POINT
{
	INT x;
	INT y;
};
void display(POINT);
int main()
{
	POINT p1={1,2};
	display(p1);
}
void display(POINT p)
{
	printf("%d %d",p.x,p.y);
}
