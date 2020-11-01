//conditional macros
#define PI 3.14
#include<stdio.h>
int main()
{
	#ifdef PI
	printf("PI is a macro.");
	#endif
	#ifndef RAD
	printf("\nRAD is not a macro.");
	#endif
}
