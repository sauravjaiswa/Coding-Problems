//armstrong function
#include<stdio.h>
#include<math.h>
int rev(int n);
int main()
{
	int N,i;
	printf("Enter a number:");
	scanf("%d",&N);
	if(rev(N)==N)
	printf("%d is a armstrong number.",N);
	else
	printf("%d is not a armstrong number.",N);
}
int rev(int n)
{
	int d,copy,r=0,s=0;
	copy=n;
	while(copy!=0)
	{
		d=copy%10;
		r=r+pow(d,3);
		copy=copy/10;
	}
	return r;
}
