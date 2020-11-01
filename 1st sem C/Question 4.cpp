//Question 4
#include<stdio.h>
int main()
{
	//start:
	int num,copy,copy1,c=0,ac,ec,n;
	printf("Enter a 10 digit telephone number:");
	scanf("%d",&num);
	copy1=num;
	while(copy1!=0)
	{
		c++;
		copy1=copy1/10;
	}/*
	if(c!=10)
	{
		printf("Please enter a valid 10 digit telephone number!!");
		goto start;
	}*/
	copy=num;
	n=copy%10000;
	copy=copy/10000;
	ec=copy%1000;
	copy=copy/1000;
	ac=copy%1000;
	printf("\nArea code\tExchange code\tNumber");
	printf("\n%d\t\t%d\t\t%d",ac,ec,n);
}
