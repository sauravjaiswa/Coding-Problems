//Returning string in a function
#include<stdio.h>
char* dayofweek(int n);
int main()
{
	int n;
	char *wd;
	printf("Enter day number:");
	scanf("%d",&n);
	wd=dayofweek(n);
	printf("day of week on day number %d is %s.",n,wd);
}
char* dayofweek(int n)
{
    char *week_day[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	if(n>=1&&n<=7)
	return week_day[n-1];
	else
	return NULL;
}
