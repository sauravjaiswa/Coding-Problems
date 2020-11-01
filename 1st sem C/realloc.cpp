//realloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n;
	char *s,ch;
	printf("Enter size of array");
	scanf("%d",&n);
	s=(char*)malloc(n*sizeof(char));
	if(s==NULL)
	{
		printf("\nCannot be allocated");
		exit(0);
	}
	else
	{
		printf("Enter Y for changing size :");
		fflush(stdin);
		scanf("%c",&ch);
		if(ch=='Y'||ch=='y')
		{
			printf("\nReenter the size");
			scanf("%d",&n);
			s=(char*)realloc(s,n);
			for(i=0;i<n;i++)
			printf("\n%c",*(s+i));
		}
		else
		exit(0);
	}
}
