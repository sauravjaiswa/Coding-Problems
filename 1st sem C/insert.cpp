//WAP to insert a number given by user in the user given position.
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
	printf("Enter element and position where it has to be inserted:");
	scanf("%d",&ele);
	scanf("%d",&pos);
	if(pos>n)
	goto start;
	for(i=n+1;i>=pos;i--)
		a[i]=a[i-1];
		a[pos-1]=ele;
		n=n+1;
		printf("New array:");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
