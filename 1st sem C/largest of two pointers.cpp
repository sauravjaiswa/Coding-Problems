//Wap to find the largest of two numbers and return the pointer.
#include<stdio.h>
int* largest(int a,int b);
main()
{
	int a,b,*large;                          //use static to prevent shoewing of garbage value
	printf("Enter any two numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	large=largest(a,b);
	printf("The largest from %d and %d is %d.",a,b,*large);
}
int* largest(int a,int b)
{
	if(a>b)
	return &a;
	else
	return &b;
}
