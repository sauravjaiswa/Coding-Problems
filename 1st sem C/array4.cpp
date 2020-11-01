//WAP to take input in an array and find the sum of numbers in the array.
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the total number of inputs to be taken by user:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",(i+1));
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe sum of numbers in the array is %d.",sum);
}
