#define PI 3.14
#include<stdio.h>
int main()
{
	float r,area;
	#ifdef PI
	printf("PI is a defined macro.");
	#endif
	#ifndef PIE
	printf("PI is not a defined macro.");
	#endif
	printf("Enter radius of circle:");
	scanf("%f",&r);
	area=PI*r*r;
	#undef PI
	printf("Area:%f",area);
}
