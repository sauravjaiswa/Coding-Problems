//reverse function
#include<stdio.h>
int rev(int n);
int main()
{
	int N,i;
	printf("Enter a number:");
	scanf("%d",&N);
	printf("Reversed number is: %d",rev(N));
}
int rev(int n)
{
	int d,copy,r=0;
	copy=n;
	while(copy!=0)
	{
		d=copy%10;
		r=(r*10)+d;
		copy=copy/10;
	}
	return r;
}
