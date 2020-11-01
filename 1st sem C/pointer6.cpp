//pointer6-call a function to scan values in an array and call a function to print the values in an array.
#include<stdio.h>
void scan(int a[],int n);                //both a[]=*a is same
void print(int *a,int n);
int main()
{
	int a[5];
	scan(a,5);
	print(a,5);
}
void scan(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",a+i);
}
void print(int *a,int n)
{
	int i;
	for(i=0;i<5;i++)
	printf("%d",*(a+i));
}
