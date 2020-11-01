//WAP to calculate the area of circle and square.
#include<stdio.h>
int main()
{
	int x;
	float r,s,area2,area1;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	printf("Enter side of square:");
	scanf("%f",&s);
	area1=3.14*r*r;
	area2=s*s;
	printf("The area of circle is:%f",area1);
	printf("\nThe area of square is:%f",area2);
	printf("\nThe size of r is:%d",sizeof(r));
	printf("\n%d",(13%2));
	return 0;
}
