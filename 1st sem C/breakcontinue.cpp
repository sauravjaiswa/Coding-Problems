//break and continue
#include<stdio.h>
int main()
{
	int i;
	char ch1[45],ch[45];
	for(i=0;i<=10;i++)
	{
		if(i<=3)
		{
			printf("Enter username:");
			scanf("%s",ch1);
			printf("\nEnter password:");
			scanf("%s",ch);
			continue;
		}
		else
		break;
	}
}
