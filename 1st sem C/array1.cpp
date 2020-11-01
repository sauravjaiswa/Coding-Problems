//WAP to take input in an array.
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the total number of inputs to be taken by user:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",(i+1));
		scanf("%d",&a[i]);
	}
	printf("The values in array:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
