//Armstrong number
#include<stdio.h>
#include<math.h>
int input()
{
int N;
printf("Enter number");
scanf("%d",N);
return N;
}
int sum(int n)
{
	int copy,d,s=0;
	copy=n;
	while(copy!=0)
	{
		d=copy%10;
		s=s+pow(d,3);
		copy=copy/10;
	}
	return s;
}
int check()
{
	int x=input();
	if(x==sum(x))
	return 1;
	else
	return 0;
}
int main()
{
	//int N;
	//printf("Enter a number");
	//scanf("%d",N);
	if(check()==1)
	printf("Armstrong");
	else
	printf("Not Armstrong");
}
