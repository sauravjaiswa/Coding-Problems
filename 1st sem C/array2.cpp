//WAP to take input in an array and search for a number given by user.
#include<stdio.h>
int main()
{
	int i,n,num,pos=-1;
	printf("Enter the total number of inputs to be taken by user:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %dth element:",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
	    	pos=i;
	    	break;
	    }
	}
	if(pos>=0)
	printf("The number %d is present at %dth position.",num,(pos+1));
	else
	printf("The number %d is not present.",num);
}
