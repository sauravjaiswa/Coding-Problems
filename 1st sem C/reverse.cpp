//reverse the number
#include<stdio.h>
int main()
{
	int n,copy,d,rev,c;
	printf("Enter a number to be reversed:");
	scanf("%d",&n);
	copy=n;
	rev=0;
	while(copy!=0)
	{
		d=copy%10;
		rev=(rev*10)+d;
		copy=copy/10;
	}
	printf("\noriginal number:%d",n);
	printf("\nreversed number:%d",rev);
}
