//Write a program to find roots of a quadratic equations.
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2,e,f;
	printf("Enter a,b,c values which are real for quadratic equation ax^2+bx+c=0:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==0)
	{
	printf("Enter valid value for a which is real for quadratic equation ax^2+bx+c=0:");
	scanf("%d",&a);
	}
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("The two roots for (%d)x^2+(%d)x+(%d)=0 are:%f and %f ",a,b,c,r1,r2);
	}
	else if(d==0)
	{
		r1=r2=-b/(2*a);
		printf("The two roots for (%d)x^2+(%d)x+(%d)=0 are:%f and %f ",a,b,c,r1,r2);
	}
	else
	{
		e=(-b/(2*a));
		f=(sqrt(-d)/(2*a));
		printf("The first root for (%d)x^2+(%d)x+(%d)=0 are: %f+i%f ",a,b,c,e,f);
		printf("\nThe second root for (%d)x^2+(%d)x+(%d)=0 are: %f-i%f ",a,b,c,e,f);
	}
}

