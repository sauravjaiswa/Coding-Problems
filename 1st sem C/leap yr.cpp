//Leap year
#include<stdio.h>
#include<math.h>
int main()
{
	int yr,i,d,sum=0,copy,c;
	printf("Enter a year to check whether it is leap year or not:");
	scanf("%d",&yr);
	copy=c=yr;
	for(i=0;i<=1;i++)
	{
	copy=copy%10;
	sum=sum+(copy*pow(10,i));
	c=c/10;
    }
    if(sum==0)
    {
    	if(yr%400==0)
    	printf("The year %d is a leap year.",yr);
    	else
    	printf("The year %d is not a leap year.",yr);
	}
	else
	{
		if(yr%4==0)
    	printf("The year %d is a leap year.",yr);
    	else
    	printf("The year %d is not a leap year.",yr);
	}
}
