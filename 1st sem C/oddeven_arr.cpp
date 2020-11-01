//WAP to find all even and odd integers in array.
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter capacity of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Even numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("\n%d",a[i]);
	}
	printf("\nOdd numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("\n%d",a[i]);
	}
}
