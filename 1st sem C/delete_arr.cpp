//WAP to delete a position given by user in the array.
#include<stdio.h>
int main()
{
	int i,n,ele,pos;
	start:
	printf("Enter capacity of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter position where it has to be deleted:");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
		a[i]=a[i+1];
		a[n]=0;
		printf("New array:");
		for(i=0;i<n-1;i++)
		printf("%d\t",a[i]);
}
