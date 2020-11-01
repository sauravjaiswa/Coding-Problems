//WAP to take input in an array and search for maximum and minimum number in the array.
#include<stdio.h>
int main()
{
	int i,n,max,min;
	printf("Enter the total number of inputs to be taken by user:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",(i+1));
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("The largest number is %d.",max);
	printf("\nThe smallest number is %d.",min);
}
