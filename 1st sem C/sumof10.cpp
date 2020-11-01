//WAP to find sum of ten numbers.
#include<stdio.h>
int main()
{
	int sum=0,i=1;
	while(i<=10)
	{
		sum=sum+i;
		i++;
	}
	printf("The sum of first 10 natural numbers:%d",sum);
}
