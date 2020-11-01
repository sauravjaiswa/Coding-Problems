//macros
#define PI 3.14
#include<stdio.h>
int main()
{
	float r,h,v;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	printf("Enter height of right circular cone:");
	scanf("%f",&h);
	v=PI*r*r*h;
	printf("Volume of right circular cone:%f",v);
}
