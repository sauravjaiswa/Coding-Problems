//factorial recursion
#include<stdio.h>
int fact(int a);
int main()
{
	int n,f;
	start:
	printf("Enter value of n:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Enter a valid positive number!!");
		goto start;
	}
	else
	{
	     f=fact(n);
         printf("The factorial of %d is: %d",n,f);
    }
}
int fact(int x)
{
	if(x==0||x==1)
	return 1;
	else
	return (x*fact(x-1));
}
